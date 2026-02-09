// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/TaskAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/task_action.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'robot'
// Member 'type'
// Member 'object'
// Member 'room'
// Member 'source_location'
// Member 'target_location'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'path'
#include "pyrobosim_msgs/msg/detail/path__struct.h"

/// Struct defined in msg/TaskAction in the package pyrobosim_msgs.
/**
  * Task Action ROS Message
 */
typedef struct pyrobosim_msgs__msg__TaskAction
{
  /// Main action information
  rosidl_runtime_c__String robot;
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String object;
  rosidl_runtime_c__String room;
  rosidl_runtime_c__String source_location;
  rosidl_runtime_c__String target_location;
  /// Action cost (from the output of a planner)
  float cost;
  /// Other parameters
  bool has_pose;
  geometry_msgs__msg__Pose pose;
  pyrobosim_msgs__msg__Path path;
} pyrobosim_msgs__msg__TaskAction;

// Struct for a sequence of pyrobosim_msgs__msg__TaskAction.
typedef struct pyrobosim_msgs__msg__TaskAction__Sequence
{
  pyrobosim_msgs__msg__TaskAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__TaskAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__STRUCT_H_
