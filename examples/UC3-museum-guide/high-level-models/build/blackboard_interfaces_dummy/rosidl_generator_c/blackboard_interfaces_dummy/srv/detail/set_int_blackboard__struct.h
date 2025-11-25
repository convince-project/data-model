// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from blackboard_interfaces_dummy:srv/SetIntBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__SET_INT_BLACKBOARD__STRUCT_H_
#define BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__SET_INT_BLACKBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetIntBlackboard in the package blackboard_interfaces_dummy.
typedef struct blackboard_interfaces_dummy__srv__SetIntBlackboard_Request
{
  int32_t field_name;
  int32_t value;
} blackboard_interfaces_dummy__srv__SetIntBlackboard_Request;

// Struct for a sequence of blackboard_interfaces_dummy__srv__SetIntBlackboard_Request.
typedef struct blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__Sequence
{
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetIntBlackboard in the package blackboard_interfaces_dummy.
typedef struct blackboard_interfaces_dummy__srv__SetIntBlackboard_Response
{
  bool is_ok;
} blackboard_interfaces_dummy__srv__SetIntBlackboard_Response;

// Struct for a sequence of blackboard_interfaces_dummy__srv__SetIntBlackboard_Response.
typedef struct blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__Sequence
{
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__request__MAX_SIZE = 1
};
// response
enum
{
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetIntBlackboard in the package blackboard_interfaces_dummy.
typedef struct blackboard_interfaces_dummy__srv__SetIntBlackboard_Event
{
  service_msgs__msg__ServiceEventInfo info;
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__Sequence request;
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__Sequence response;
} blackboard_interfaces_dummy__srv__SetIntBlackboard_Event;

// Struct for a sequence of blackboard_interfaces_dummy__srv__SetIntBlackboard_Event.
typedef struct blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__Sequence
{
  blackboard_interfaces_dummy__srv__SetIntBlackboard_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__SET_INT_BLACKBOARD__STRUCT_H_
