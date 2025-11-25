// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "people_detector_filter_interfaces_dummy/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__struct.hpp"

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

namespace people_detector_filter_interfaces_dummy
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_detector_filter_interfaces_dummy
cdr_serialize(
  const people_detector_filter_interfaces_dummy::msg::IsFollowed & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_detector_filter_interfaces_dummy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  people_detector_filter_interfaces_dummy::msg::IsFollowed & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_detector_filter_interfaces_dummy
get_serialized_size(
  const people_detector_filter_interfaces_dummy::msg::IsFollowed & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_detector_filter_interfaces_dummy
max_serialized_size_IsFollowed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace people_detector_filter_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_people_detector_filter_interfaces_dummy
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, people_detector_filter_interfaces_dummy, msg, IsFollowed)();

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
