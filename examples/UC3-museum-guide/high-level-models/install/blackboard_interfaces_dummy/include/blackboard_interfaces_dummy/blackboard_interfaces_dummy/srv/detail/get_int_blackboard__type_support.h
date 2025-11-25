// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__TYPE_SUPPORT_H_
#define BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "blackboard_interfaces_dummy/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  blackboard_interfaces_dummy,
  srv,
  GetIntBlackboard_Request
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  blackboard_interfaces_dummy,
  srv,
  GetIntBlackboard_Response
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  blackboard_interfaces_dummy,
  srv,
  GetIntBlackboard_Event
)();

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  blackboard_interfaces_dummy,
  srv,
  GetIntBlackboard
)();

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  blackboard_interfaces_dummy,
  srv,
  GetIntBlackboard
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  blackboard_interfaces_dummy,
  srv,
  GetIntBlackboard
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__TYPE_SUPPORT_H_
