#!/usr/bin/env python3

"""
Place translator node.

This node bridges:
- input action:  overarching_msgs/Place   (default topic: /PlaceComponet/Place)
- output action: pyrobosim_msgs/ExecuteTaskAction (default topic: /execute_action)

It receives a Place goal, resolves which object should be placed,
forwards a "place" task to pyrobosim, and maps the result back to Place.
"""

import rclpy
from rclpy.action import ActionClient, ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node

from overarching_msgs.action import Place
from pyrobosim_msgs.action import ExecuteTaskAction
from pyrobosim_msgs.msg import ExecutionResult, RobotState


class PlaceTranslatorNode(Node):
    """ROS 2 node that translates Place requests into pyrobosim task actions."""

    def __init__(self) -> None:
        super().__init__("place_translator")

        # Input/output endpoints and behavior configuration.
        self.declare_parameter("input_action_name", "/PlaceComponet/Place")
        self.declare_parameter("output_action_name", "/execute_action")
        self.declare_parameter("robot_state_topic", "/robot/robot_state")
        self.declare_parameter("robot_id", "robot")
        self.declare_parameter("default_object", "")
        self.declare_parameter("wait_server_timeout_sec", 5.0)

        # Cache parameter values for faster usage in callbacks.
        self._input_action_name = self.get_parameter("input_action_name").value
        self._output_action_name = self.get_parameter("output_action_name").value
        self._robot_state_topic = self.get_parameter("robot_state_topic").value
        self._robot_id = self.get_parameter("robot_id").value
        self._default_object = self.get_parameter("default_object").value
        self._wait_server_timeout_sec = float(self.get_parameter("wait_server_timeout_sec").value)

        # Reentrant callback group allows overlapping callbacks if needed.
        self._cb_group = ReentrantCallbackGroup()

        # Last robot state is used to infer which object is currently held.
        self._latest_robot_state = None

        # Subscribe to robot state updates from pyrobosim.
        self._state_sub = self.create_subscription(
            RobotState,
            self._robot_state_topic,
            self._on_robot_state,
            10,
        )

        # Client towards pyrobosim action server.
        self._pyrobosim_client = ActionClient(
            self,
            ExecuteTaskAction,
            self._output_action_name,
            callback_group=self._cb_group,
        )

        # Server exposed to the tutorial/BT side.
        self._place_server = ActionServer(
            self,
            Place,
            self._input_action_name,
            execute_callback=self._execute_place,
            goal_callback=self._on_goal,
            cancel_callback=self._on_cancel,
            callback_group=self._cb_group,
        )

        self.get_logger().info(
            f"Place translator ready: {self._input_action_name} -> {self._output_action_name}"
        )

    def _on_robot_state(self, msg: RobotState) -> None:
        """Store latest robot state for object resolution."""
        self._latest_robot_state = msg

    def _on_goal(self, _goal_request: Place.Goal) -> GoalResponse:
        """Accept all incoming Place goals."""
        return GoalResponse.ACCEPT

    def _on_cancel(self, _goal_handle) -> CancelResponse:
        """Accept cancel requests from clients."""
        return CancelResponse.ACCEPT

    def _resolve_object_to_place(self) -> str:
        """
        Resolve the object name to place.

        Priority:
        1) object currently manipulated by robot (from RobotState)
        2) configured default_object parameter
        3) empty string => let downstream decide (e.g., place currently held object)
        """
        if (
            self._latest_robot_state is not None
            and self._latest_robot_state.holding_object
            and self._latest_robot_state.manipulated_object
        ):
            return self._latest_robot_state.manipulated_object

        if self._default_object:
            return self._default_object

        return ""

    async def _execute_place(self, goal_handle) -> Place.Result:
        """Main translation flow for a Place goal."""

        # Determine which object should be placed.
        object_name = self._resolve_object_to_place()

        # Ensure downstream action server is reachable.
        if not self._pyrobosim_client.wait_for_server(timeout_sec=self._wait_server_timeout_sec):
            self.get_logger().error(
                f"Output action server '{self._output_action_name}' not available"
            )
            goal_handle.abort()
            return Place.Result()

        # Build translated goal for pyrobosim.
        forward_goal = ExecuteTaskAction.Goal()
        forward_goal.action.robot = self._robot_id
        forward_goal.action.type = "place"
        forward_goal.action.object = object_name

        if not object_name:
            self.get_logger().warn(
                "No object resolved from RobotState/default_object; forwarding place request "
                "with empty object to downstream action server."
            )

        self.get_logger().info(
            f"Forwarding Place -> ExecuteTaskAction(type='place', robot='{self._robot_id}', object='{object_name}')"
        )

        # Send translated goal and wait for goal acceptance.
        send_goal_future = self._pyrobosim_client.send_goal_async(forward_goal)
        remote_goal_handle = await send_goal_future

        if remote_goal_handle is None or not remote_goal_handle.accepted:
            self.get_logger().error("Output action goal rejected")
            goal_handle.abort()
            return Place.Result()

        # Wait for downstream completion.
        result_future = remote_goal_handle.get_result_async()
        wrapped_result = await result_future

        if wrapped_result is None:
            self.get_logger().error("Output action returned no result")
            goal_handle.abort()
            return Place.Result()

        # Map downstream status to upstream Place result.
        execution_result = wrapped_result.result.execution_result
        if execution_result.status == ExecutionResult.SUCCESS:
            goal_handle.succeed()
            return Place.Result()

        self.get_logger().error(
            "Place failed in pyrobosim: "
            f"status={execution_result.status}, message='{execution_result.message}'"
        )
        goal_handle.abort()
        return Place.Result()


def main(args=None) -> None:
    """Node entrypoint."""
    rclpy.init(args=args)
    node = PlaceTranslatorNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
