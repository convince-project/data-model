// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigation_interfaces_dummy/msg/detail/navigation_status__rosidl_typesupport_introspection_c.h"
#include "navigation_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigation_interfaces_dummy/msg/detail/navigation_status__functions.h"
#include "navigation_interfaces_dummy/msg/detail/navigation_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigation_interfaces_dummy__msg__NavigationStatus__init(message_memory);
}

void navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_fini_function(void * message_memory)
{
  navigation_interfaces_dummy__msg__NavigationStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation_interfaces_dummy__msg__NavigationStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_members = {
  "navigation_interfaces_dummy__msg",  // message namespace
  "NavigationStatus",  // message name
  1,  // number of fields
  sizeof(navigation_interfaces_dummy__msg__NavigationStatus),
  navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_member_array,  // message members
  navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_type_support_handle = {
  0,
  &navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_members,
  get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__msg__NavigationStatus__get_type_hash,
  &navigation_interfaces_dummy__msg__NavigationStatus__get_type_description,
  &navigation_interfaces_dummy__msg__NavigationStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, msg, NavigationStatus)() {
  if (!navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_type_support_handle.typesupport_identifier) {
    navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigation_interfaces_dummy__msg__NavigationStatus__rosidl_typesupport_introspection_c__NavigationStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
