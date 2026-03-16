// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_state.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'robots'
#include "pyrobosim_msgs/msg/detail/robot_state__struct.h"
// Member 'locations'
#include "pyrobosim_msgs/msg/detail/location_state__struct.h"
// Member 'hallways'
#include "pyrobosim_msgs/msg/detail/hallway_state__struct.h"
// Member 'objects'
#include "pyrobosim_msgs/msg/detail/object_state__struct.h"

/// Struct defined in msg/WorldState in the package pyrobosim_msgs.
/**
  * World state definition message
 */
typedef struct pyrobosim_msgs__msg__WorldState
{
  pyrobosim_msgs__msg__RobotState__Sequence robots;
  pyrobosim_msgs__msg__LocationState__Sequence locations;
  pyrobosim_msgs__msg__HallwayState__Sequence hallways;
  pyrobosim_msgs__msg__ObjectState__Sequence objects;
} pyrobosim_msgs__msg__WorldState;

// Struct for a sequence of pyrobosim_msgs__msg__WorldState.
typedef struct pyrobosim_msgs__msg__WorldState__Sequence
{
  pyrobosim_msgs__msg__WorldState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__WorldState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_
