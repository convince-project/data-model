#!/usr/bin/env python3
"""A node for policy execution in CONVINCE overarching demo environment.

This policy executor can run data collection or refined policy execution.

Author: Charlie Street
Owner: Charlie Street
"""

from refine_plan.models.policy import Policy
from refine_plan.models.state_factor import StateFactor
from pyrobosim_msgs.action import ExecuteTaskAction
from pyrobosim_msgs.msg import TaskAction
from refine_plan.models.state import State
from action_msgs.msg import GoalStatus
from rclpy.action import ActionClient
from pymongo import MongoClient
from datetime import datetime
from rclpy.node import Node
import random
import rclpy


class PolicyExecutor(Node):
    """A node for behaviour execution in the CONVINCE demo environment.

    Attributes:
        _db_collection: The MongoDB collection for data logging (if mode == data)
        _pyrobosim_client: The action client for Pyrobosim (navigation/detection)
        _run_id: The ID for this run
        _refined_policy: The refined policy, if used in this instance
        _policy_fn: A function describing robot policy execution
        _mode: The execution mode (data or refined)
        _goal_fn: A function which takes a state history and returns True if goal reached
        _bread_locs: A list of locations the bread could be at
        _nav_locs: The list of locations the robot can move to
    """

    def __init__(self):
        """Initialise the policy executor."""
        super().__init__("policy_executor")
        self.declare_parameter("db_connection_string", rclpy.Parameter.Type.STRING)
        self.declare_parameter("db_name", rclpy.Parameter.Type.STRING)
        self.declare_parameter("db_collection", rclpy.Parameter.Type.STRING)
        self.declare_parameter("mode", rclpy.Parameter.Type.STRING)

        self._run_id = random.getrandbits(32)
        self._mode_setup()
        self._db_setup()
        self._setup_actions()
        self._bread_locs = ["side_table", "dining_table", "kitchen_table", "fridge"]
        self._nav_locs = ["hall"] + self._bread_locs
        self.get_logger().info("Policy Executor Setup")

    def _at_bread(self, history):
        """Returns True if the bread has been found and the robot is at that location.

        This is used for the refined policy.

        Args:
            history: The state history

        Returns:
            True if the bread has been found
        """
        last_state = history[-1]

        for bread_loc in self._bread_locs:
            if (
                last_state["bread_at_{}".format(bread_loc)] == "yes"
                and last_state["location"] == bread_loc
            ):
                return True

        return False

    def _data_collect_goal(self, history):
        """Returns True if 100 actions executed (101 states in history) or the bread is reached.

        This is used for data collection.
        There's not much point collecting data once the bread is reached.

        Args:
            history: The state history

        Returns:
            True if 100 actions have been executed or the bread is reached
        """

        return len(history) > 100 or self._at_bread(history)

    def _mode_setup(self):
        """Setup the policy and goal_fn for a given mode."""
        self._mode = self.get_parameter("mode").value
        if self._mode == "data":
            self._policy_fn = self._rand_action
            self._goal_fn = self._data_collect_goal
        elif self._mode == "refined":
            self._refined_policy = Policy(
                {}, policy_file="../params/demo_refined_policy.yaml"
            )
            self._policy_fn = self._refined_policy.get_action
            self._goal_fn = self._at_bread

        self.get_logger().info("Executing {} Policy".format(self._mode))

    def _db_setup(self):
        """Setup the Mongo connection."""
        if self._mode == "data":
            connect_str = self.get_parameter("db_connection_string").value
            db_name = self.get_parameter("db_name").value
            db_collection = self.get_parameter("db_collection").value
            self._db_collection = MongoClient(connect_str)[db_name][db_collection]
            self.get_logger().info("Connected to MongoDB")
        elif self._mode == "refined":
            self._db_collection = None
            self.get_logger().info("Running in refined mode - no Mongo logging")

    def _setup_actions(self):
        """Setup the action client for all actions."""
        self._pyrobosim_client = ActionClient(self, ExecuteTaskAction, "execute_action")
        self._pyrobosim_client.wait_for_server()
        self.get_logger().info("Pyrobosim Action Execution Client Active")

    def _create_initial_state(self):
        """Creates the initial state for policy execution.

        Returns:
            The initial state
        """
        loc_sf = StateFactor("location", self._nav_locs)
        bread_sfs = []
        for bread_loc in self._bread_locs:
            bread_sfs.append(
                StateFactor("bread_at_{}".format(bread_loc), ["unknown", "no", "yes"])
            )

        state_dict = {loc_sf: "hall"}
        for sf in bread_sfs:
            state_dict[sf] = "unknown"

        return State(state_dict)

    def _enabled_actions(self, state):
        """Return the enabled actions in a state.

        Args:
            state: The current state

        Returns:
            A list of enabled actions
        """
        enabled_actions = set([])

        loc = state["location"]
        if loc in self._bread_locs and state["bread_at_{}".format(loc)] == "unknown":
            enabled_actions.add("detect")

        # We have a fully connected graph so add actions for each pair
        for next_loc in self._nav_locs:
            if next_loc != state["location"]:
                enabled_actions.add(f"{loc}-{next_loc}")

        return list(enabled_actions)

    def _rand_action(self, state):
        """Select a random enabled action for data collection.

        Args:
            state: Unused

        Returns:
            The action to be executed
        """
        return random.choice(self._enabled_actions(state))

    def _log_action(self, state, new_state, action, start, end):
        """Log an action to the mongoDB database.

        Args:
            state: The predecessor state
            new_state: The successor state
            action: The executed action
            start: The start time
            end: The end time
        """
        doc = {}
        doc["run_id"] = self._run_id
        doc["mode"] = self._mode
        doc["option"] = action
        doc["date_started"] = float(start.nanoseconds) / 1e9
        doc["date_finished"] = float(end.nanoseconds) / 1e9
        doc["duration"] = float((end - start).nanoseconds) / 1e9
        doc["_meta"] = {"inserted_at": datetime.now()}

        for sf in state._state_dict:
            doc["{}0".format(sf)] = state[sf]

        for sf in new_state._state_dict:
            doc["{}t".format(sf)] = new_state[sf]

        if self._mode == "data":
            self._db_collection.insert_one(doc)
        else:
            self.get_logger().info(f"Finished {doc["option"]} in {doc["duration"]} seconds")

    def _search_for_bread(self, state):
        """Check if the wire is at a location.

        Args:
            state: The current state

        Returns:
            The updated state
        """
        # TODO: Change
        wire_req = WireCheck.Request()
        wire_req.node = state["location"]

        future = self._check_wire_client.call_async(wire_req)
        start = self.get_clock().now()
        rclpy.spin_until_future_complete(self, future)
        end = self.get_clock().now()
        result = future.result()

        new_wire_status = "yes" if result.found else "no"

        new_state_dict = {}
        unknown_vars = []
        for sf in state._state_dict:
            new_state_dict[state._sf_dict[sf]] = (
                new_wire_status
                if sf == "wire_at_{}".format(state["location"])
                else state._state_dict[sf]
            )
            if new_state_dict[state._sf_dict[sf]] == "unknown":
                unknown_vars.append(state._sf_dict[sf])

        fill_val = None
        if new_wire_status == "yes":  # We can fill in everything once a yes is found
            fill_val = "no"
        elif len(unknown_vars) == 1:  # The last unknown is yes if all else is no
            fill_val = "yes"

        if fill_val is not None:  # Replace the unknowns
            for sf in unknown_vars:
                new_state_dict[sf] = fill_val

        new_state = State(new_state_dict)
        self._log_action(state, new_state, "check_for_wire", start, end)
        return new_state

    def _navigation(self, state, action):
        """Navigate to a new location.

        Args:
            state: The current state
            action: The current navigation action (<SRC>_<DST>)

        Returns:
            The updated state
        """
        # TODO: Change
        edge_goal = NavigateEdge.Goal()
        edge_goal.edge_id = action

        future = self._edge_client.send_goal_async(edge_goal)
        rclpy.spin_until_future_complete(self, future)
        start = self.get_clock().now()
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Edge Navigation Action Not Accepted")
            return None

        result = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result)
        end = self.get_clock().now()

        if result.result().status != GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().error("Edge Navigation Action Failed")
            return None
        else:
            new_loc = result.result().result.dest
            new_state_dict = {}

            for sf in state._state_dict:  # Update location
                new_state_dict[state._sf_dict[sf]] = (
                    new_loc if sf == "location" else state._state_dict[sf]
                )

            new_state = State(new_state_dict)
            self._log_action(state, new_state, action, start, end)

            return new_state

    def execute_policy(self):
        """Execute the policy until a termination condition is satisfied."""

        current_state = self._create_initial_state()
        history = [current_state]

        while not self._goal_fn(history):
            action = self._policy_fn(current_state)
            assert action in self._enabled_actions(current_state)

            self.get_logger().info(
                "Action: {}; Executing {} in {}".format(
                    len(history), action, current_state
                )
            )

            if action == "detect":
                current_state = self._search_for_bread(current_state)
            else:  # Edge action
                current_state = self._navigation(current_state, action)

            history.append(current_state)

            if current_state is None:  # Error case
                self.get_logger().error("Error During Policy Execution. Exiting.")
                return


def main(args=None):
    rclpy.init(args=args)

    policy_exec = PolicyExecutor()

    # Execute the policy and then shut down
    policy_exec.execute_policy()
    rclpy.shutdown()
