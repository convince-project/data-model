// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/WorldInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_info.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'location_categories'
// Member 'object_categories'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WorldInfo in the package pyrobosim_msgs.
/**
  * World information definition message
 */
typedef struct pyrobosim_msgs__msg__WorldInfo
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String__Sequence location_categories;
  rosidl_runtime_c__String__Sequence object_categories;
} pyrobosim_msgs__msg__WorldInfo;

// Struct for a sequence of pyrobosim_msgs__msg__WorldInfo.
typedef struct pyrobosim_msgs__msg__WorldInfo__Sequence
{
  pyrobosim_msgs__msg__WorldInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__WorldInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__STRUCT_H_
