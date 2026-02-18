# Offline Verification

## Introduction

This folder contains increasingly complex RoAML models for the overarching tutorial.

Each RoAML model consists of an entry xml file (e.g. [main.xml](main.xml)), that in turns references to one or more ASCXML models (e.g. representing the environment, ROS nodes, or other executables), a BT policy and the models of the custom BT plugins (if any).

### Environments

For this tutorial, we prepared three environments, of increasing complexity. All models of the environment can be found in the [environment folder](environment).
- [world.ascxml](environment/world.ascxml): A simple, deterministic environment, with a single location where the robot can navigate and pick the object.
- [world_multiple_locations.ascxml](environment/world_multiple_locations.ascxml): Extends the basic environment by introducing multiple locations that the robot must navigate to find the object. All actions are deterministically successful.
- [world_multiple_locations_w_failures.ascxml](environment/world_multiple_locations_w_failures.ascxml): Builds on the multiple locations scenario by adding probabilistic failure modes and fault conditions that the system must handle.

### Policies

We developed different policies, to handle the increasingly hard environment the robot must deal with.
All policies are collected in the [policy folder](policy).

### BT Plugins

Finally, we developed a number of BT Plugins, to be used by the policies we implemented. They can be found in the [bt_plugins folder](bt_plugins).

## Tools usage

### Get the verifiable model by using AS2FM

This section contains general instructions for generating a verifiable model starting from a RoAML xml file.

For these instructions, let's assume we want to generate the model starting from the [main.xml file](main.xml).

To do that, the first step is to source the required ROS interfaces (located in the [ros_interfaces folder](../ros_interfaces)):

Assuming we are in the `roaml` folder, and the interface were already built, run the following:

```bash
source ../ros_interfaces/install/setup.bash
```

Now that the ROS interfaces are sourced, we are ready to generate the verifiable models.

The JANI model, required by SMC Storm, can be obtained by running:
```bash
as2fm_roaml_to_jani main.xml --jani-out-file main.jani
```
This commands generates a single file, `main.jani`, containing the complete model of the system and the properties to verify on it.

The SCXML models, required by SCAN, can be obtained by running:
```bash
as2fm_roaml_to_jani main.xml --scxml-out-dir scxml
```
This commands generates a folder with several SCXML files, that can be loaded and executed by SCAN for property verification.

### Verify the JANI model using SMC_STORM

Once we have a JANI model of the system, we can use SMC Storm to verify properties on it.

In particular, for this model we developed the property `snack_at_start`, already present in the JANI file, that reads as follows:
```
F((topic_object_loc_msg__ros_fields__x = 0) & ((topic_object_loc_msg__ros_fields__y = 0) & (topic_object_loc_msg__ros_fields__parent = 'world')))
```
and checks that, eventually, the snack object reaches the table (location (0, 0)).

We can verify this property using SMC Storm with the following command:

```bash
smc_storm --model main.jani --properties-names snack_at_start --disable-explored-states-caching --n-threads 10 --show-statistics --batch-size 5 --traces-folder smc_storm_traces
```

#### Introspect CSV traces using PlotJuggles

In order to visualize what is happening, we can use PlotJuggler to visualize the generated traces.

PlotJuggler can be started using the command:
```bash
ros2 run plotjuggler plotjuggler -d smc_storm_traces/trace_<id>.csv
```

Afterwards, topics can be plotted to see their evolution along the trace.

### Verify the SCXML model using SCAN

TODO

## The tutorial

This section guide you through the different RoAML models, and describe what can be done using verification.

### Part 1: the simple world

For this part, we refer to the [main.xml file](main.xml).

To be able to operate in this world, we need a simple BT Sequence, as the one described in [this BT](policy/bt_tree.xml).

We can verify the property using SMC Storm (or SCAN), and see that it results in the porperty being always verified (Result = 1.0), meaning that the object always ends up in the desired location.

### Part 2: the world with multiple locations

### Part 3: The world with multiple locations and failures