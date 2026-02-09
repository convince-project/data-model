// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/ObjectState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/object_state.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__STRUCT_H_

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
// Member 'category'
// Member 'parent'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ObjectState in the package pyrobosim_msgs.
/**
  * Object state definition message
 */
typedef struct pyrobosim_msgs__msg__ObjectState
{
  /// Fixed data
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String category;
  /// Dynamic data
  rosidl_runtime_c__String parent;
  geometry_msgs__msg__Pose pose;
} pyrobosim_msgs__msg__ObjectState;

// Struct for a sequence of pyrobosim_msgs__msg__ObjectState.
typedef struct pyrobosim_msgs__msg__ObjectState__Sequence
{
  pyrobosim_msgs__msg__ObjectState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__ObjectState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__STRUCT_H_
