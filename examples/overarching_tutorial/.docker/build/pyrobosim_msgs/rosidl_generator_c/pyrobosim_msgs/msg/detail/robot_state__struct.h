// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/robot_state.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
// Member 'manipulated_object'
// Member 'last_visited_location'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/RobotState in the package pyrobosim_msgs.
/**
  * Robot state definition message
 */
typedef struct pyrobosim_msgs__msg__RobotState
{
  /// Header containing a timestamp
  std_msgs__msg__Header header;
  /// Robot information
  rosidl_runtime_c__String name;
  /// Continuous state
  geometry_msgs__msg__Pose pose;
  double battery_level;
  /// Discrete state
  bool executing_action;
  bool holding_object;
  rosidl_runtime_c__String manipulated_object;
  rosidl_runtime_c__String last_visited_location;
} pyrobosim_msgs__msg__RobotState;

// Struct for a sequence of pyrobosim_msgs__msg__RobotState.
typedef struct pyrobosim_msgs__msg__RobotState__Sequence
{
  pyrobosim_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
