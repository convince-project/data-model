// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_specification.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'predicates'
#include "pyrobosim_msgs/msg/detail/goal_predicate__struct.h"

/// Struct defined in msg/GoalSpecification in the package pyrobosim_msgs.
/**
  * Goal Specification ROS Message
  * A goal specification consists of a list of predicates.
 */
typedef struct pyrobosim_msgs__msg__GoalSpecification
{
  pyrobosim_msgs__msg__GoalPredicate__Sequence predicates;
} pyrobosim_msgs__msg__GoalSpecification;

// Struct for a sequence of pyrobosim_msgs__msg__GoalSpecification.
typedef struct pyrobosim_msgs__msg__GoalSpecification__Sequence
{
  pyrobosim_msgs__msg__GoalSpecification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__GoalSpecification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__STRUCT_H_
