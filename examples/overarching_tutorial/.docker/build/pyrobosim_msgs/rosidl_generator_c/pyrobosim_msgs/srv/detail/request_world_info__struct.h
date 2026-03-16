// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:srv/RequestWorldInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/request_world_info.h"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__STRUCT_H_
#define PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RequestWorldInfo in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__RequestWorldInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} pyrobosim_msgs__srv__RequestWorldInfo_Request;

// Struct for a sequence of pyrobosim_msgs__srv__RequestWorldInfo_Request.
typedef struct pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence
{
  pyrobosim_msgs__srv__RequestWorldInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "pyrobosim_msgs/msg/detail/world_info__struct.h"

/// Struct defined in srv/RequestWorldInfo in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__RequestWorldInfo_Response
{
  /// The world information
  pyrobosim_msgs__msg__WorldInfo info;
} pyrobosim_msgs__srv__RequestWorldInfo_Response;

// Struct for a sequence of pyrobosim_msgs__srv__RequestWorldInfo_Response.
typedef struct pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence
{
  pyrobosim_msgs__srv__RequestWorldInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pyrobosim_msgs__srv__RequestWorldInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pyrobosim_msgs__srv__RequestWorldInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RequestWorldInfo in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__RequestWorldInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence request;
  pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence response;
} pyrobosim_msgs__srv__RequestWorldInfo_Event;

// Struct for a sequence of pyrobosim_msgs__srv__RequestWorldInfo_Event.
typedef struct pyrobosim_msgs__srv__RequestWorldInfo_Event__Sequence
{
  pyrobosim_msgs__srv__RequestWorldInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__RequestWorldInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__STRUCT_H_
