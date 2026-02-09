// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:srv/ResetWorld.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/reset_world.h"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__RESET_WORLD__STRUCT_H_
#define PYROBOSIM_MSGS__SRV__DETAIL__RESET_WORLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetWorld in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__ResetWorld_Request
{
  /// Request
  /// If true, resets the world to exactly the state when it was first loading.
  /// Otherwise, if loaded from YAML, randomly sampled positions will change.
  bool deterministic;
  /// The seed to use for random number generation.
  /// This is useful for applications such as machine learning where you want to control randomness.
  /// If -1 (default), does not use a fixed seed.
  int64_t seed;
} pyrobosim_msgs__srv__ResetWorld_Request;

// Struct for a sequence of pyrobosim_msgs__srv__ResetWorld_Request.
typedef struct pyrobosim_msgs__srv__ResetWorld_Request__Sequence
{
  pyrobosim_msgs__srv__ResetWorld_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__ResetWorld_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ResetWorld in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__ResetWorld_Response
{
  /// Response
  /// Indicates whether the world reset operation was successful.
  bool success;
} pyrobosim_msgs__srv__ResetWorld_Response;

// Struct for a sequence of pyrobosim_msgs__srv__ResetWorld_Response.
typedef struct pyrobosim_msgs__srv__ResetWorld_Response__Sequence
{
  pyrobosim_msgs__srv__ResetWorld_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__ResetWorld_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pyrobosim_msgs__srv__ResetWorld_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pyrobosim_msgs__srv__ResetWorld_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetWorld in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__ResetWorld_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pyrobosim_msgs__srv__ResetWorld_Request__Sequence request;
  pyrobosim_msgs__srv__ResetWorld_Response__Sequence response;
} pyrobosim_msgs__srv__ResetWorld_Event;

// Struct for a sequence of pyrobosim_msgs__srv__ResetWorld_Event.
typedef struct pyrobosim_msgs__srv__ResetWorld_Event__Sequence
{
  pyrobosim_msgs__srv__ResetWorld_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__ResetWorld_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__RESET_WORLD__STRUCT_H_
