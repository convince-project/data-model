// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from timer_interfaces_dummy:srv/IsTimerActive.idl
// generated code does not contain a copyright notice

#ifndef TIMER_INTERFACES_DUMMY__SRV__DETAIL__IS_TIMER_ACTIVE__STRUCT_H_
#define TIMER_INTERFACES_DUMMY__SRV__DETAIL__IS_TIMER_ACTIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IsTimerActive in the package timer_interfaces_dummy.
typedef struct timer_interfaces_dummy__srv__IsTimerActive_Request
{
  uint8_t structure_needs_at_least_one_member;
} timer_interfaces_dummy__srv__IsTimerActive_Request;

// Struct for a sequence of timer_interfaces_dummy__srv__IsTimerActive_Request.
typedef struct timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence
{
  timer_interfaces_dummy__srv__IsTimerActive_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/IsTimerActive in the package timer_interfaces_dummy.
typedef struct timer_interfaces_dummy__srv__IsTimerActive_Response
{
  bool is_ok;
  bool is_active;
} timer_interfaces_dummy__srv__IsTimerActive_Response;

// Struct for a sequence of timer_interfaces_dummy__srv__IsTimerActive_Response.
typedef struct timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence
{
  timer_interfaces_dummy__srv__IsTimerActive_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  timer_interfaces_dummy__srv__IsTimerActive_Event__request__MAX_SIZE = 1
};
// response
enum
{
  timer_interfaces_dummy__srv__IsTimerActive_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/IsTimerActive in the package timer_interfaces_dummy.
typedef struct timer_interfaces_dummy__srv__IsTimerActive_Event
{
  service_msgs__msg__ServiceEventInfo info;
  timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence request;
  timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence response;
} timer_interfaces_dummy__srv__IsTimerActive_Event;

// Struct for a sequence of timer_interfaces_dummy__srv__IsTimerActive_Event.
typedef struct timer_interfaces_dummy__srv__IsTimerActive_Event__Sequence
{
  timer_interfaces_dummy__srv__IsTimerActive_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} timer_interfaces_dummy__srv__IsTimerActive_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIMER_INTERFACES_DUMMY__SRV__DETAIL__IS_TIMER_ACTIVE__STRUCT_H_
