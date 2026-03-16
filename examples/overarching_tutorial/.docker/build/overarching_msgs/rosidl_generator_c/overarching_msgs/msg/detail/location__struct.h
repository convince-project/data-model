// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from overarching_msgs:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "overarching_msgs/msg/location.h"


#ifndef OVERARCHING_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
#define OVERARCHING_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'parent'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Location in the package overarching_msgs.
typedef struct overarching_msgs__msg__Location
{
  float x;
  float y;
  rosidl_runtime_c__String parent;
} overarching_msgs__msg__Location;

// Struct for a sequence of overarching_msgs__msg__Location.
typedef struct overarching_msgs__msg__Location__Sequence
{
  overarching_msgs__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OVERARCHING_MSGS__MSG__DETAIL__LOCATION__STRUCT_H_
