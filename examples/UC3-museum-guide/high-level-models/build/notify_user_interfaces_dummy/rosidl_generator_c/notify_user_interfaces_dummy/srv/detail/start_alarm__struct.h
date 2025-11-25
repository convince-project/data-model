// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from notify_user_interfaces_dummy:srv/StartAlarm.idl
// generated code does not contain a copyright notice

#ifndef NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__STRUCT_H_
#define NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StartAlarm in the package notify_user_interfaces_dummy.
typedef struct notify_user_interfaces_dummy__srv__StartAlarm_Request
{
  uint8_t structure_needs_at_least_one_member;
} notify_user_interfaces_dummy__srv__StartAlarm_Request;

// Struct for a sequence of notify_user_interfaces_dummy__srv__StartAlarm_Request.
typedef struct notify_user_interfaces_dummy__srv__StartAlarm_Request__Sequence
{
  notify_user_interfaces_dummy__srv__StartAlarm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} notify_user_interfaces_dummy__srv__StartAlarm_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/StartAlarm in the package notify_user_interfaces_dummy.
typedef struct notify_user_interfaces_dummy__srv__StartAlarm_Response
{
  bool is_ok;
} notify_user_interfaces_dummy__srv__StartAlarm_Response;

// Struct for a sequence of notify_user_interfaces_dummy__srv__StartAlarm_Response.
typedef struct notify_user_interfaces_dummy__srv__StartAlarm_Response__Sequence
{
  notify_user_interfaces_dummy__srv__StartAlarm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} notify_user_interfaces_dummy__srv__StartAlarm_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  notify_user_interfaces_dummy__srv__StartAlarm_Event__request__MAX_SIZE = 1
};
// response
enum
{
  notify_user_interfaces_dummy__srv__StartAlarm_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/StartAlarm in the package notify_user_interfaces_dummy.
typedef struct notify_user_interfaces_dummy__srv__StartAlarm_Event
{
  service_msgs__msg__ServiceEventInfo info;
  notify_user_interfaces_dummy__srv__StartAlarm_Request__Sequence request;
  notify_user_interfaces_dummy__srv__StartAlarm_Response__Sequence response;
} notify_user_interfaces_dummy__srv__StartAlarm_Event;

// Struct for a sequence of notify_user_interfaces_dummy__srv__StartAlarm_Event.
typedef struct notify_user_interfaces_dummy__srv__StartAlarm_Event__Sequence
{
  notify_user_interfaces_dummy__srv__StartAlarm_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} notify_user_interfaces_dummy__srv__StartAlarm_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__STRUCT_H_
