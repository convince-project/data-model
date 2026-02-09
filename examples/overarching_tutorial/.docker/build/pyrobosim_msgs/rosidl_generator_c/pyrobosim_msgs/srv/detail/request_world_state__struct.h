// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:srv/RequestWorldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/request_world_state.h"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_STATE__STRUCT_H_
#define PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_STATE__STRUCT_H_

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

/// Struct defined in srv/RequestWorldState in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__RequestWorldState_Request
{
  /// Optional robot name.
  /// If specified, gets the known world state of that robot.
  /// If not specified, gets the full world state.
  rosidl_runtime_c__String robot;
} pyrobosim_msgs__srv__RequestWorldState_Request;

// Struct for a sequence of pyrobosim_msgs__srv__RequestWorldState_Request.
typedef struct pyrobosim_msgs__srv__RequestWorldState_Request__Sequence
{
  pyrobosim_msgs__srv__RequestWorldState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__RequestWorldState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "pyrobosim_msgs/msg/detail/world_state__struct.h"

/// Struct defined in srv/RequestWorldState in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__RequestWorldState_Response
{
  /// The world state
  pyrobosim_msgs__msg__WorldState state;
} pyrobosim_msgs__srv__RequestWorldState_Response;

// Struct for a sequence of pyrobosim_msgs__srv__RequestWorldState_Response.
typedef struct pyrobosim_msgs__srv__RequestWorldState_Response__Sequence
{
  pyrobosim_msgs__srv__RequestWorldState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__RequestWorldState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pyrobosim_msgs__srv__RequestWorldState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pyrobosim_msgs__srv__RequestWorldState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RequestWorldState in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__RequestWorldState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pyrobosim_msgs__srv__RequestWorldState_Request__Sequence request;
  pyrobosim_msgs__srv__RequestWorldState_Response__Sequence response;
} pyrobosim_msgs__srv__RequestWorldState_Event;

// Struct for a sequence of pyrobosim_msgs__srv__RequestWorldState_Event.
typedef struct pyrobosim_msgs__srv__RequestWorldState_Event__Sequence
{
  pyrobosim_msgs__srv__RequestWorldState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__RequestWorldState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_STATE__STRUCT_H_
