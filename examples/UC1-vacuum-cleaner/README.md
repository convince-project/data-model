# Model 1: uc1-docking

## Offline verification

This models describes the docking procedure of UC1.

In the model, we have a robot that tries to get to the dock using a BT.

While driving, the robot might find an obstacle, might fail to align to the charging pins and so on. Using this model, we make sure that the BT properly recovers from all those situations.

### Properties:

* *charging_starts*: the robot gets to the docking station and starts charging.
* *tree_success*: the BT terminates and reports a successful execution.

## Situation understanding

We use OWL to model the environment around the robot.

The related files can be found in [knowledge-graph-OWL](uc1-docking/knowledge-graph-OWL)

# Model 2: uc1-mission

## Offline verification

In this model, we simulate a complete system with a robot that docks, undocks, navigates and cleans the environment.

The expected outcome is that the robot is always able to undock, clean and, once it finishes, drive back to the dock before terminating the mission.

Since the robot could get stuck in any of those stages, we also expect that the robot performs some unstuck operation before resuming its operation.


### Important details

The cleaning mission is started only once using a ROS action, and the coverage status gets updated at 10 Hz. For each update, there is the possibility for the robot to get stuck.
If coverage steps forward before the robot gets unstuck, the action server tries up to a number pf times, and then fails. This results in the BT failing, too.

In the current model, this should never happen.

Using this model, we uncovered a bug where the robot tries to resume coverage after it was already stopped (this happened in case the robot got stuck while driving back to the dock or while docking).
We designed a new property (`no_coverage_failures_after_mission_failed`, below), that detects the bug by ensuring the n. of failures of the coverage action never exceeds 1.

### Properties

* *tree_success*: The BT reports success and cleaning coverage is above 95%
* *tree_finished_robot_docked*: Once the BT is not running, we expect the robot to be docked and the online_coverage_done flag in the BT Blackboard to be set.
* *no_coverage_failures_after_mission_failed*: Before the BT terminates, the coverage failures count cannot exceed 1. If that happens, the BT tried (by mistake) to request the coverage action after the robot got stuck.

Both of them are expected to return 1.0 probability of the property being verified.

## Situation Understanding

### VLM-based situation awareness pipeline (instruction prompts)

The `instruction` folder contains the prompt templates used to drive a Vision-Language Model (VLM) through the situation-awareness pipeline:

* `prompts_UC1.py`: defines a system prompt and two chained prompts.
  1. *System prompt*: frames the VLM as a supervisor of a vacuum robot navigating a cluttered indoor environment. It explains the input format — chunks of roughly one second each, containing 4 to 6 camera images and odometry statistics (min, max, mean position and velocity, plus a normalized derivative vector) — and instructs the model to use them to detect collisions or anomalies.
  2. *Event description (PROMPT1)*: asks the VLM to analyze the data, identify patterns and relationships, describe what the robot comes into contact with, and characterize robot behavior before, during and after the anomalous event (e.g. stops, reverses, gets stuck), including whether the robot manages to recover.
  3. *Anomaly classification (PROMPT2)*: instructs the VLM to assign the described event to one of the UC1 anomaly categories: stuck due to objects in the way (bumping then getting stuck, high-friction ground, slippery floor) or stuck due to a lift or forward-backward oscillation (caused by a chair, wall, or similar obstacle).

### Synchronized input multimodal data (JSON)

The `synchronized-input-multimodal-data` folder contains an example input to the situation-understanding pipeline:

* `data_chunk_0.json`: a single one-second data chunk. It bundles several camera image samples (base64-encoded PNG) together with odometry statistics for the same time window, including pose position and angular velocity summaries (min, max, mean across the ~100 samples in the chunk, plus normalized derivative vectors). This format matches the input description in the system prompt above.

