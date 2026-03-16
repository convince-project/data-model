// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/path.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__PATH__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Path in the package pyrobosim_msgs.
/**
  * Path ROS Message
 */
typedef struct pyrobosim_msgs__msg__Path
{
  geometry_msgs__msg__Pose__Sequence poses;
  double length;
} pyrobosim_msgs__msg__Path;

// Struct for a sequence of pyrobosim_msgs__msg__Path.
typedef struct pyrobosim_msgs__msg__Path__Sequence
{
  pyrobosim_msgs__msg__Path * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__Path__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__PATH__STRUCT_H_
