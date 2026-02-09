// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/HallwayState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/hallway_state.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__STRUCT_H_

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
// Member 'room_start'
// Member 'room_end'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HallwayState in the package pyrobosim_msgs.
/**
  * Hallway state definition message
 */
typedef struct pyrobosim_msgs__msg__HallwayState
{
  /// Fixed data
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String room_start;
  rosidl_runtime_c__String room_end;
  /// Dynamic data
  bool is_open;
  bool is_locked;
} pyrobosim_msgs__msg__HallwayState;

// Struct for a sequence of pyrobosim_msgs__msg__HallwayState.
typedef struct pyrobosim_msgs__msg__HallwayState__Sequence
{
  pyrobosim_msgs__msg__HallwayState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__HallwayState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__STRUCT_H_
