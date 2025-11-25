// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__functions.h"
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace people_detector_filter_interfaces_dummy
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IsFollowed_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) people_detector_filter_interfaces_dummy::msg::IsFollowed(_init);
}

void IsFollowed_fini_function(void * message_memory)
{
  auto typed_message = static_cast<people_detector_filter_interfaces_dummy::msg::IsFollowed *>(message_memory);
  typed_message->~IsFollowed();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IsFollowed_message_member_array[1] = {
  {
    "is_followed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_detector_filter_interfaces_dummy::msg::IsFollowed, is_followed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IsFollowed_message_members = {
  "people_detector_filter_interfaces_dummy::msg",  // message namespace
  "IsFollowed",  // message name
  1,  // number of fields
  sizeof(people_detector_filter_interfaces_dummy::msg::IsFollowed),
  IsFollowed_message_member_array,  // message members
  IsFollowed_init_function,  // function to initialize message memory (memory has to be allocated)
  IsFollowed_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IsFollowed_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IsFollowed_message_members,
  get_message_typesupport_handle_function,
  &people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_hash,
  &people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description,
  &people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace people_detector_filter_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<people_detector_filter_interfaces_dummy::msg::IsFollowed>()
{
  return &::people_detector_filter_interfaces_dummy::msg::rosidl_typesupport_introspection_cpp::IsFollowed_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, people_detector_filter_interfaces_dummy, msg, IsFollowed)() {
  return &::people_detector_filter_interfaces_dummy::msg::rosidl_typesupport_introspection_cpp::IsFollowed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
