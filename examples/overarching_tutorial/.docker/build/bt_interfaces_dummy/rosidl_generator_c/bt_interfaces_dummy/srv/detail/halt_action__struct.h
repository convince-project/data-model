// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bt_interfaces_dummy:srv/HaltAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bt_interfaces_dummy/srv/halt_action.h"


#ifndef BT_INTERFACES_DUMMY__SRV__DETAIL__HALT_ACTION__STRUCT_H_
#define BT_INTERFACES_DUMMY__SRV__DETAIL__HALT_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/HaltAction in the package bt_interfaces_dummy.
typedef struct bt_interfaces_dummy__srv__HaltAction_Request
{
  uint8_t structure_needs_at_least_one_member;
} bt_interfaces_dummy__srv__HaltAction_Request;

// Struct for a sequence of bt_interfaces_dummy__srv__HaltAction_Request.
typedef struct bt_interfaces_dummy__srv__HaltAction_Request__Sequence
{
  bt_interfaces_dummy__srv__HaltAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_interfaces_dummy__srv__HaltAction_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/HaltAction in the package bt_interfaces_dummy.
typedef struct bt_interfaces_dummy__srv__HaltAction_Response
{
  bool is_ok;
} bt_interfaces_dummy__srv__HaltAction_Response;

// Struct for a sequence of bt_interfaces_dummy__srv__HaltAction_Response.
typedef struct bt_interfaces_dummy__srv__HaltAction_Response__Sequence
{
  bt_interfaces_dummy__srv__HaltAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_interfaces_dummy__srv__HaltAction_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  bt_interfaces_dummy__srv__HaltAction_Event__request__MAX_SIZE = 1
};
// response
enum
{
  bt_interfaces_dummy__srv__HaltAction_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/HaltAction in the package bt_interfaces_dummy.
typedef struct bt_interfaces_dummy__srv__HaltAction_Event
{
  service_msgs__msg__ServiceEventInfo info;
  bt_interfaces_dummy__srv__HaltAction_Request__Sequence request;
  bt_interfaces_dummy__srv__HaltAction_Response__Sequence response;
} bt_interfaces_dummy__srv__HaltAction_Event;

// Struct for a sequence of bt_interfaces_dummy__srv__HaltAction_Event.
typedef struct bt_interfaces_dummy__srv__HaltAction_Event__Sequence
{
  bt_interfaces_dummy__srv__HaltAction_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_interfaces_dummy__srv__HaltAction_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BT_INTERFACES_DUMMY__SRV__DETAIL__HALT_ACTION__STRUCT_H_
