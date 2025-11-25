// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from notify_user_interfaces_dummy:srv/StartAlarm.idl
// generated code does not contain a copyright notice

#ifndef NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__TYPE_SUPPORT_H_
#define NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "notify_user_interfaces_dummy/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_notify_user_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  notify_user_interfaces_dummy,
  srv,
  StartAlarm_Request
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_notify_user_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  notify_user_interfaces_dummy,
  srv,
  StartAlarm_Response
)();

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_notify_user_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  notify_user_interfaces_dummy,
  srv,
  StartAlarm_Event
)();

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_notify_user_interfaces_dummy
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  notify_user_interfaces_dummy,
  srv,
  StartAlarm
)();

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_notify_user_interfaces_dummy
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  notify_user_interfaces_dummy,
  srv,
  StartAlarm
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_notify_user_interfaces_dummy
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  notify_user_interfaces_dummy,
  srv,
  StartAlarm
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__TYPE_SUPPORT_H_
