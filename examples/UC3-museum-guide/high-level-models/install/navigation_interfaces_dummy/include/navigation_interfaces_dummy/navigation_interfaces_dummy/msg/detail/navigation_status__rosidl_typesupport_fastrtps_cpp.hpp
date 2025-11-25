// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "navigation_interfaces_dummy/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "navigation_interfaces_dummy/msg/detail/navigation_status__struct.hpp"

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

namespace navigation_interfaces_dummy
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation_interfaces_dummy
cdr_serialize(
  const navigation_interfaces_dummy::msg::NavigationStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation_interfaces_dummy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  navigation_interfaces_dummy::msg::NavigationStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation_interfaces_dummy
get_serialized_size(
  const navigation_interfaces_dummy::msg::NavigationStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation_interfaces_dummy
max_serialized_size_NavigationStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_navigation_interfaces_dummy
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, msg, NavigationStatus)();

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
