// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bt_interfaces_dummy/msg/detail/action_response__functions.h"
#include "bt_interfaces_dummy/msg/detail/action_response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bt_interfaces_dummy
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bt_interfaces_dummy::msg::ActionResponse(_init);
}

void ActionResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bt_interfaces_dummy::msg::ActionResponse *>(message_memory);
  typed_message->~ActionResponse();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionResponse_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_interfaces_dummy::msg::ActionResponse, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionResponse_message_members = {
  "bt_interfaces_dummy::msg",  // message namespace
  "ActionResponse",  // message name
  1,  // number of fields
  sizeof(bt_interfaces_dummy::msg::ActionResponse),
  false,  // has_any_key_member_
  ActionResponse_message_member_array,  // message members
  ActionResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionResponse_message_members,
  get_message_typesupport_handle_function,
  &bt_interfaces_dummy__msg__ActionResponse__get_type_hash,
  &bt_interfaces_dummy__msg__ActionResponse__get_type_description,
  &bt_interfaces_dummy__msg__ActionResponse__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bt_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::msg::ActionResponse>()
{
  return &::bt_interfaces_dummy::msg::rosidl_typesupport_introspection_cpp::ActionResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, msg, ActionResponse)() {
  return &::bt_interfaces_dummy::msg::rosidl_typesupport_introspection_cpp::ActionResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
