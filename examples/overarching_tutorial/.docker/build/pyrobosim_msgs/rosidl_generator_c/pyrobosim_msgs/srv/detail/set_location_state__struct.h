// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:srv/SetLocationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/set_location_state.h"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__STRUCT_H_
#define PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetLocationState in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__SetLocationState_Request
{
  /// Request
  rosidl_runtime_c__String location_name;
  bool open;
  bool lock;
} pyrobosim_msgs__srv__SetLocationState_Request;

// Struct for a sequence of pyrobosim_msgs__srv__SetLocationState_Request.
typedef struct pyrobosim_msgs__srv__SetLocationState_Request__Sequence
{
  pyrobosim_msgs__srv__SetLocationState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__SetLocationState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "pyrobosim_msgs/msg/detail/execution_result__struct.h"

/// Struct defined in srv/SetLocationState in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__SetLocationState_Response
{
  pyrobosim_msgs__msg__ExecutionResult result;
} pyrobosim_msgs__srv__SetLocationState_Response;

// Struct for a sequence of pyrobosim_msgs__srv__SetLocationState_Response.
typedef struct pyrobosim_msgs__srv__SetLocationState_Response__Sequence
{
  pyrobosim_msgs__srv__SetLocationState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__SetLocationState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pyrobosim_msgs__srv__SetLocationState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pyrobosim_msgs__srv__SetLocationState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLocationState in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__srv__SetLocationState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pyrobosim_msgs__srv__SetLocationState_Request__Sequence request;
  pyrobosim_msgs__srv__SetLocationState_Response__Sequence response;
} pyrobosim_msgs__srv__SetLocationState_Event;

// Struct for a sequence of pyrobosim_msgs__srv__SetLocationState_Event.
typedef struct pyrobosim_msgs__srv__SetLocationState_Event__Sequence
{
  pyrobosim_msgs__srv__SetLocationState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__srv__SetLocationState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__STRUCT_H_
