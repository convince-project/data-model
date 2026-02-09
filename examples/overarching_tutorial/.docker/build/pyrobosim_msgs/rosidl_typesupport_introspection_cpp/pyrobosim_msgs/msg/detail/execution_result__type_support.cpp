// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pyrobosim_msgs:msg/ExecutionResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pyrobosim_msgs/msg/detail/execution_result__functions.h"
#include "pyrobosim_msgs/msg/detail/execution_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pyrobosim_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutionResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pyrobosim_msgs::msg::ExecutionResult(_init);
}

void ExecutionResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pyrobosim_msgs::msg::ExecutionResult *>(message_memory);
  typed_message->~ExecutionResult();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutionResult_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::ExecutionResult, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::ExecutionResult, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutionResult_message_members = {
  "pyrobosim_msgs::msg",  // message namespace
  "ExecutionResult",  // message name
  2,  // number of fields
  sizeof(pyrobosim_msgs::msg::ExecutionResult),
  false,  // has_any_key_member_
  ExecutionResult_message_member_array,  // message members
  ExecutionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutionResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutionResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutionResult_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__ExecutionResult__get_type_hash,
  &pyrobosim_msgs__msg__ExecutionResult__get_type_description,
  &pyrobosim_msgs__msg__ExecutionResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pyrobosim_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pyrobosim_msgs::msg::ExecutionResult>()
{
  return &::pyrobosim_msgs::msg::rosidl_typesupport_introspection_cpp::ExecutionResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pyrobosim_msgs, msg, ExecutionResult)() {
  return &::pyrobosim_msgs::msg::rosidl_typesupport_introspection_cpp::ExecutionResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
