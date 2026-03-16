// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/TaskPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/task_plan.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'actions'
#include "pyrobosim_msgs/msg/detail/task_action__struct.h"

/// Struct defined in msg/TaskPlan in the package pyrobosim_msgs.
/**
  * Task Plan ROS Message
 */
typedef struct pyrobosim_msgs__msg__TaskPlan
{
  rosidl_runtime_c__String robot;
  pyrobosim_msgs__msg__TaskAction__Sequence actions;
  float cost;
} pyrobosim_msgs__msg__TaskPlan;

// Struct for a sequence of pyrobosim_msgs__msg__TaskPlan.
typedef struct pyrobosim_msgs__msg__TaskPlan__Sequence
{
  pyrobosim_msgs__msg__TaskPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__TaskPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__STRUCT_H_
