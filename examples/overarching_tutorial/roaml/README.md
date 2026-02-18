# Offline Verification

## Introduction

This folder contains increasingly complex RoAML models for the overarching tutorial.

Each RoAML model consists of an entry xml file (e.g. [main.xml](main.xml)), that in turns references to one or more ASCXML models (e.g. representing the environment, ROS nodes, or other executables), a BT policy and the models of the custom BT plugins (if any).

## Environments

For this tutorial, we prepared three environments, of increasing complexity. All models of the environment can be found in the [environment folder](environment).
- [world.ascxml](environment/world.ascxml): A simple, deterministic environment, with a single location where the robot can navigate and pick the object.
- [world_multiple_locations.ascxml](environment/world_multiple_locations.ascxml): Extends the basic environment by introducing multiple locations that the robot must navigate to find the object. All actions are deterministically successful.
- [world_multiple_locations_w_failures.ascxml](environment/world_multiple_locations_w_failures.ascxml): Builds on the multiple locations scenario by adding probabilistic failure modes and fault conditions that the system must handle.

## Policies

We developed different policies, to handle the increasingly hard environment the robot must deal with.
All policies are collected in the [policy folder](policy).

## BT Plugins

Finally, we developed a number of BT Plugins, to be used by the policies we implemented. They can be found in the [bt_plugins folder](bt_plugins).

### Get the verifiable model by using AS2FM

A model of the system, to be used for verification, can be found in the `roaml` folder.

The custom ROS interfaces used by this model can be found in the `ros_interfaces` folder:
they need to be built and sourced before trying to compile the RoAML model with AS2FM.

From this folder, run the following:

```bash
cd ros_interfaces
source /opt/ros/<your-ros-distro>/setup.bash
colcon build
source install/setup.bash
cd ..
```

Once the ROS interfaces are compiled and sourced, we are ready to generate the JANI and the SCXML model:

```bash
cd roaml
as2fm_roaml_to_jani main.xml --jani-out-file main.jani --generated-scxml-dir scxml
```

This will make a JANI model of the system, in the `main.jani` file, and a plain SCXML model, in the scxml folder.

### Verify the JANI model using SMC_STORM

#### Run smc_storm
smc_storm can be used to verify properties on the generated model.

In the following line, we verify that, in the model, the snack object eventually reaches the table.

```bash
smc_storm --model main.jani --properties-names snack_at_table --disable-explored-states-caching --n-threads 10 --show-statistics --batch-size 5 --traces-folder smc_storm_traces
```

The human-readable version of the property in use is the following:
```
F((topic_object_loc_msg__ros_fields__x = 0) & ((topic_object_loc_msg__ros_fields__y = 0) & (topic_object_loc_msg__ros_fields__parent = 'world')))
```

#### Visualize what happens in PlotJuggler

Any trace can be loaded using:

```bash
ros2 run plotjuggler plotjuggler -d smc_storm_traces/trace_<id>.csv
```

Then, topics can be plotted to see their evolution along the trace.
