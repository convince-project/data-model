# Model 1: uc1-docking

This models describes the docking procedure of UC1.

In the model, we have a robot that tries to get to the dock using a BT.

While driving, the robot might find an obstacle, might fail to align to the charging pins and so on. Using this model, we make sure that the BT properly recovers from all those situations.

## Properties:

* *charging_starts*: the robot gets to the docking station and starts charging.
* *tree_success*: the BT terminates and reports a successful execution.

# Model 2: uc1-mission

In this model, we simulate a complete system with a robot that docks, undocks, navigates and cleans the environment.

The expected outcome is that the robot is always able to undock, clean and, once it finishes, drive back to the dock before terminating the mission.

Since the robot could get stuck in any of those stages, we also expect that the robot performs some unstuck operation before resuming its operation.


## Important details

The cleaning mission is started only once using a ROS action, and the coverage status gets updated at 10 Hz. For each update, there is the possibility for the robot to get stuck.
If coverage steps forward before the robot gets unstuck, the action server tries up to a number pf times, and then fails. This results in the BT failing, too.

In the current model, this should never happen.

Using this model, we uncovered a bug where the robot tries to resume coverage after it was already stopped (this happened in case the robot got stuck while driving back to the dock or while docking).
We designed a new property (`no_coverage_failures_after_mission_failed`, below), that detects the bug by ensuring the n. of failures of the coverage action never exceeds 1.

## Properties

* *tree_success*: The BT reports success and cleaning coverage is above 95%
* *tree_finished_robot_docked*: Once the BT is not running, we expect the robot to be docked and the online_coverage_done flag in the BT Blackboard to be set.
* *no_coverage_failures_after_mission_failed*: Before the BT terminates, the coverage failures count cannot exceed 1. If that happens, the BT tried (by mistake) to request the coverage action after the robot got stuck.

Both of them are expected to return 1.0 probability of the property being verified.
