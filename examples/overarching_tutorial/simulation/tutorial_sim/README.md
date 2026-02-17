# tutorial_sim

## Place Translator Component

This package includes a ROS 2 bridge node that translates the tutorial `Place` action into the pyrobosim `ExecuteTaskAction`.

The input interface definition used by this node is the `Place.action` file in:
- `examples/overarching_tutorial/ros_interfaces/src/overarching_msgs/action/Place.action`

Implementation file:
- `tutorial_sim/translate_component.py`

Compatibility wrapper:
- `../component/translate_component.py`

### What it does

The translator exposes an action server for:
- Input action: `/place_object`
- Input type: `overarching_msgs/action/Place`

When a goal is received, it forwards a new goal to pyrobosim:
- Output action: `/execute_action`
- Output type: `pyrobosim_msgs/action/ExecuteTaskAction`

Forwarded fields are mapped as:
- `action.robot` <- `robot_id` parameter (default: `robot`)
- `action.type` <- `"place"`
- `action.object` <- resolved object to place

Object resolution order:
1. `RobotState.manipulated_object` (when `holding_object` is true)
2. `default_object` parameter
3. If still empty, the goal is aborted

### Result handling

The bridge waits for pyrobosim action completion and maps the result back to the original `Place` goal:
- `ExecutionResult.SUCCESS` -> `Place` goal succeeds
- Any other status -> `Place` goal aborts

The goal is also aborted if:
- no object can be resolved,
- `/execute_action` is not available,
- pyrobosim rejects the forwarded goal,
- no result is returned.

### ROS parameters

- `input_action_name` (default: `/place_object`)
- `output_action_name` (default: `/execute_action`)
- `robot_state_topic` (default: `/robot/robot_state`)
- `robot_id` (default: `robot`)
- `default_object` (default: empty string)
- `wait_server_timeout_sec` (default: `5.0`)

### Run

After building and sourcing your workspace:

```bash
ros2 run tutorial_sim translate_component
```

Example with custom parameters:

```bash
ros2 run tutorial_sim translate_component --ros-args \
  -p input_action_name:=/place_object \
  -p output_action_name:=/execute_action \
  -p robot_id:=robot
```

### Send commands after startup

Once `translate_component` is running, send a `Place` request to the new action endpoint:

```bash
ros2 action send_goal /place_object overarching_msgs/action/Place "{}"
```
otherwise bypassing the bridger/translator:

```bash
ros2 action send_goal /execute_action pyrobosim_msgs/action/ExecuteTaskAction "{action: {robot: robot, type: place, object: butter}, realtime_factor: 1.0}"
```


Useful checks:

```bash
ros2 action list
ros2 action info /place_object
ros2 action info /execute_action
```

If the robot is not currently holding an object (`/robot/robot_state`) and `default_object` is empty,
the goal is aborted. In that case, launch the translator with a fallback object:

```bash
ros2 run tutorial_sim translate_component --ros-args -p default_object:=butter
```
