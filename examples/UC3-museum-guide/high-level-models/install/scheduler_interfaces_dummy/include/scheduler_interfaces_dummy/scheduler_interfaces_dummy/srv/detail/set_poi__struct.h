// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scheduler_interfaces_dummy:srv/SetPoi.idl
// generated code does not contain a copyright notice

#ifndef SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__STRUCT_H_
#define SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPoi in the package scheduler_interfaces_dummy.
typedef struct scheduler_interfaces_dummy__srv__SetPoi_Request
{
  int32_t poi_number;
} scheduler_interfaces_dummy__srv__SetPoi_Request;

// Struct for a sequence of scheduler_interfaces_dummy__srv__SetPoi_Request.
typedef struct scheduler_interfaces_dummy__srv__SetPoi_Request__Sequence
{
  scheduler_interfaces_dummy__srv__SetPoi_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scheduler_interfaces_dummy__srv__SetPoi_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetPoi in the package scheduler_interfaces_dummy.
typedef struct scheduler_interfaces_dummy__srv__SetPoi_Response
{
  bool is_ok;
} scheduler_interfaces_dummy__srv__SetPoi_Response;

// Struct for a sequence of scheduler_interfaces_dummy__srv__SetPoi_Response.
typedef struct scheduler_interfaces_dummy__srv__SetPoi_Response__Sequence
{
  scheduler_interfaces_dummy__srv__SetPoi_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scheduler_interfaces_dummy__srv__SetPoi_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  scheduler_interfaces_dummy__srv__SetPoi_Event__request__MAX_SIZE = 1
};
// response
enum
{
  scheduler_interfaces_dummy__srv__SetPoi_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetPoi in the package scheduler_interfaces_dummy.
typedef struct scheduler_interfaces_dummy__srv__SetPoi_Event
{
  service_msgs__msg__ServiceEventInfo info;
  scheduler_interfaces_dummy__srv__SetPoi_Request__Sequence request;
  scheduler_interfaces_dummy__srv__SetPoi_Response__Sequence response;
} scheduler_interfaces_dummy__srv__SetPoi_Event;

// Struct for a sequence of scheduler_interfaces_dummy__srv__SetPoi_Event.
typedef struct scheduler_interfaces_dummy__srv__SetPoi_Event__Sequence
{
  scheduler_interfaces_dummy__srv__SetPoi_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scheduler_interfaces_dummy__srv__SetPoi_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__STRUCT_H_
