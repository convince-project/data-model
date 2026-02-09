// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pyrobosim_msgs:msg/TaskPlan.idl
// generated code does not contain a copyright notice

#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pyrobosim_msgs/msg/detail/task_plan__struct.hpp"

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

namespace pyrobosim_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
cdr_serialize(
  const pyrobosim_msgs::msg::TaskPlan & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pyrobosim_msgs::msg::TaskPlan & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
get_serialized_size(
  const pyrobosim_msgs::msg::TaskPlan & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
max_serialized_size_TaskPlan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
cdr_serialize_key(
  const pyrobosim_msgs::msg::TaskPlan & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
get_serialized_size_key(
  const pyrobosim_msgs::msg::TaskPlan & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
max_serialized_size_key_TaskPlan(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pyrobosim_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pyrobosim_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pyrobosim_msgs, msg, TaskPlan)();

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
