// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__STRUCT_H_
#define BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetIntBlackboard in the package blackboard_interfaces_dummy.
typedef struct blackboard_interfaces_dummy__srv__GetIntBlackboard_Request
{
  int32_t field_name;
} blackboard_interfaces_dummy__srv__GetIntBlackboard_Request;

// Struct for a sequence of blackboard_interfaces_dummy__srv__GetIntBlackboard_Request.
typedef struct blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence
{
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GetIntBlackboard in the package blackboard_interfaces_dummy.
typedef struct blackboard_interfaces_dummy__srv__GetIntBlackboard_Response
{
  int32_t value;
  bool is_ok;
} blackboard_interfaces_dummy__srv__GetIntBlackboard_Response;

// Struct for a sequence of blackboard_interfaces_dummy__srv__GetIntBlackboard_Response.
typedef struct blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence
{
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__request__MAX_SIZE = 1
};
// response
enum
{
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetIntBlackboard in the package blackboard_interfaces_dummy.
typedef struct blackboard_interfaces_dummy__srv__GetIntBlackboard_Event
{
  service_msgs__msg__ServiceEventInfo info;
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence request;
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence response;
} blackboard_interfaces_dummy__srv__GetIntBlackboard_Event;

// Struct for a sequence of blackboard_interfaces_dummy__srv__GetIntBlackboard_Event.
typedef struct blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence
{
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__STRUCT_H_
