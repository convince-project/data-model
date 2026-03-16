// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bt_interfaces_dummy/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bt_interfaces_dummy/msg/detail/action_response__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace bt_interfaces_dummy
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
cdr_serialize(
  const bt_interfaces_dummy::msg::ActionResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bt_interfaces_dummy::msg::ActionResponse & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
get_serialized_size(
  const bt_interfaces_dummy::msg::ActionResponse & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
max_serialized_size_ActionResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
cdr_serialize_key(
  const bt_interfaces_dummy::msg::ActionResponse & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
get_serialized_size_key(
  const bt_interfaces_dummy::msg::ActionResponse & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
max_serialized_size_key_ActionResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bt_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bt_interfaces_dummy
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, msg, ActionResponse)();

#ifdef __cplusplus
}
#endif

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
