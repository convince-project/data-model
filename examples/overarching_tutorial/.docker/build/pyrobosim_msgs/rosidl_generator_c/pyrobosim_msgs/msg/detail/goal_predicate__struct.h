// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/GoalPredicate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_predicate.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'args'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GoalPredicate in the package pyrobosim_msgs.
/**
  * Goal Predicate ROS Message
 */
typedef struct pyrobosim_msgs__msg__GoalPredicate
{
  /// Predicate type
  rosidl_runtime_c__String type;
  /// Predicate arguments
  rosidl_runtime_c__String__Sequence args;
} pyrobosim_msgs__msg__GoalPredicate;

// Struct for a sequence of pyrobosim_msgs__msg__GoalPredicate.
typedef struct pyrobosim_msgs__msg__GoalPredicate__Sequence
{
  pyrobosim_msgs__msg__GoalPredicate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__GoalPredicate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__STRUCT_H_
