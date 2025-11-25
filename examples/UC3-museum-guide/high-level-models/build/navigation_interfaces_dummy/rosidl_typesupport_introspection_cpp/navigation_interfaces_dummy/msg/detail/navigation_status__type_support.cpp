// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "navigation_interfaces_dummy/msg/detail/navigation_status__functions.h"
#include "navigation_interfaces_dummy/msg/detail/navigation_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace navigation_interfaces_dummy
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigationStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) navigation_interfaces_dummy::msg::NavigationStatus(_init);
}

void NavigationStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<navigation_interfaces_dummy::msg::NavigationStatus *>(message_memory);
  typed_message->~NavigationStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigationStatus_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation_interfaces_dummy::msg::NavigationStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigationStatus_message_members = {
  "navigation_interfaces_dummy::msg",  // message namespace
  "NavigationStatus",  // message name
  1,  // number of fields
  sizeof(navigation_interfaces_dummy::msg::NavigationStatus),
  NavigationStatus_message_member_array,  // message members
  NavigationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigationStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigationStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigationStatus_message_members,
  get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__msg__NavigationStatus__get_type_hash,
  &navigation_interfaces_dummy__msg__NavigationStatus__get_type_description,
  &navigation_interfaces_dummy__msg__NavigationStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace navigation_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::msg::NavigationStatus>()
{
  return &::navigation_interfaces_dummy::msg::rosidl_typesupport_introspection_cpp::NavigationStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, msg, NavigationStatus)() {
  return &::navigation_interfaces_dummy::msg::rosidl_typesupport_introspection_cpp::NavigationStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
