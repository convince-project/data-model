# How to use the simulation

> [!WARNING]
> You must be in the `data-model/examples/overarching_tutorial` folder for this to work.

## Build

```bash
docker build -t convince_tutorial -f .docker/Dockerfile .
```

## Run

```bash
 docker run -it --rm --name convince_tutorial \
  -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
  -v ${XAUTHORITY:-$HOME/.Xauthority}:/root/.Xauthority \
  -v ./simulation/tutorial_sim:/convince_ws/src/tutorial_sim \
  -v ./ros_interfaces:/convince_ws/src/ros_interfaces \
  -v ./roaml:/convince_ws/src/roaml \
  -v ./simulation/behavior_tree:/convince_ws/src/behavior_tree \
  -v ./simulation/tutorial_run:/convince_ws/src/tutorial_run \
  -v ./simulation/generated_skill:/convince_ws/src/generated_skill \
  -v ./simulation/bt_nodes:/convince_ws/src/bt_nodes \
  -v ./.docker/build:/convince_ws/build \
  -v ./.docker/install:/convince_ws/install \
  -v ./.docker/log:/convince_ws/log \
  -e DISPLAY -e QT_X11_NO_MITSHM=1 \
  convince_tutorial bash
```

If you previously mounted only `build`, the colcon cache can become inconsistent across container restarts
(for example missing `/convince_ws/install/.../ament_index/...` files for Python packages like `tutorial_sim`).
If this happens, clear cache once before re-running:

```bash
rm -rf ./.docker/build ./.docker/install ./.docker/log
mkdir -p ./.docker/build ./.docker/install ./.docker/log
```

Inside the docker container, run

```bash
ros2 run tutorial_sim run
```

In another shell (attach to the same running container) run:

```bash
ros2 run tutorial_sim translate_component
```

In a third shell (attach to the same running container) run:

```bash
ros2 run bt_executor btcpp_executor --ros-args -p tree:=src/roaml/policy/bt_tree.xml
```

Don't forget to run the custom skill:

```bash
ros2 run place_object_skill place_object_skill
```

Or launch the full stack in one command:

```bash
convince_build_packages tutorial_run
source /convince_ws/install/setup.bash
ros2 launch tutorial_run full_simulation.launch.py
```

When `btcpp_executor` finishes (SUCCESS or FAILURE), the launch automatically shuts down all started nodes (`tutorial_sim`, `translate_component`, `place_object_skill`) so no ROS processes are left running.

> [!WARNING]
> Some simulation actions are probabilistic (for example `pick`), so a BT execution can end in `FAILURE` even when the setup is correct.
> If you see messages like `Simulated pick failure`, rerun the BT or use a tree with retries/fallback handling.
>
> To change action success probabilities, edit:
> - `simulation/tutorial_sim/worlds/world.yaml` under `robots[0].action_execution_options.*.success_probability`
>   (`navigate`, `pick`, `place`, `open`, `close`, `detect`).
> - `roaml/environment/world_multiple_locations_w_failures.ascxml` if you want to change the
>   probabilistic RoAML model used in the tutorial docs/examples (for example transitions with
>   `prob="0.9"` / `prob="0.8"`).

To choose a different BT when launching, pass the `tree` argument:

```bash
ros2 launch tutorial_run full_simulation.launch.py tree:=src/roaml/policy/bt_tree_locations.xml
```

Default BT (if `tree` is not provided):

```bash
src/roaml/policy/bt_tree.xml
```
## Translator  

To make dynamic `Place` object resolution reliable during BT execution, two aligned updates were introduced:

- `tutorial_sim run` now publishes `RobotState` at a higher rate (`state_pub_rate=5.0`) so object updates are visible in time.
- `tutorial_sim translate_component` now resolves the object using:
	1. current `RobotState.manipulated_object`,
	2. `default_object` fallback,
	3. last seen non-empty `manipulated_object`,
	4. short wait window (`wait_for_object_timeout_sec`) before sending empty object.

Expected translator logs in the successful case:

- `Resolved object 'butter0' (type='butter', source='robot_state').`
- `Forwarding Place -> ExecuteTaskAction(type='place', robot='robot', object='butter0')`

## Usage

For example:

- Type `fridge` into the `Goal query` box.
- Click `Navigate`.
- Click `Open`. (Notice that all these may fail with some porbability. If nothing changes, just try again.)
- Click `Detect`.
- Type `soda0` into the `Goal query` box.
- Click `Pick`.
- Type `desk` into the `Goal query` box.
- Click `Navigate`.
- Click `Place`.

You must charge before you run out of battery.
But the door to the room with the charger is closed.

- Type `hall_office_closet` into `Goal query` box.
- Click `Navigate`.
- Click `Open`.
- Type `charger` into `Goal query` box.
- Click `Navigate`.
- Notice the battery jumpng to `100%`.

## ROS Integration

All the steps abover could be triggered by ROS actions.
While pyrobosim is running in the other terminal, connect to the same docker:

```bash
docker exec -it convince_tutorial bash
```

And run:

```bash
ros2 action send_goal /execute_action pyrobosim_msgs/action/ExecuteTaskAction action:\ \{robot:\ \'robot\'\,\ type:\ \'\navigate\'\,\ target_location:\ \'office\'\}
```
