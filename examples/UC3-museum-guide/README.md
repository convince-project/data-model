# Model: uc3-museum-guide

## Offline verification

This model describes a museum guide robot that navigates through a sequence of points of interest (POIs) while continuously monitoring its battery level.

In the model, the robot follows a BT-driven mission: it visits POIs in order, waits for visitors to follow, and triggers an alarm notification when the battery drops to a critical threshold. The BT interacts with a set of components (battery monitor, navigation, people detector, scheduler, blackboard, and user notifier) through ROS topics and services.

### Properties

* *tree_success*: The BT terminates and reports a successful execution.
* *battery_alarm_response_1*: The alarm is only ever triggered when the battery level is at or below 30 (alarm implies battery ≤ 30).
* *battery_alarm_response_2*: Whenever the battery level drops to 30 or below, an alarm notification is triggered within 6200 ms.
* *no_alarm_if_battery_high*: No alarm is triggered while the battery level remains above 30.
* *battery_recurrence*: The battery level is published at least once every 3 seconds.
* *battery_steady*: The alarm is preceded by a monotonically decreasing battery level (constrained precedence chain through the 40 → 30 → 20 thresholds).

All properties are expected to return 1.0 probability of being verified.
