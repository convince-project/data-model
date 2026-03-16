// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from overarching_msgs:msg/Location.idl
// generated code does not contain a copyright notice
#ifndef OVERARCHING_MSGS__MSG__DETAIL__LOCATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define OVERARCHING_MSGS__MSG__DETAIL__LOCATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "overarching_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "overarching_msgs/msg/detail/location__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
bool cdr_serialize_overarching_msgs__msg__Location(
  const overarching_msgs__msg__Location * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
bool cdr_deserialize_overarching_msgs__msg__Location(
  eprosima::fastcdr::Cdr &,
  overarching_msgs__msg__Location * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
size_t get_serialized_size_overarching_msgs__msg__Location(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
size_t max_serialized_size_overarching_msgs__msg__Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
bool cdr_serialize_key_overarching_msgs__msg__Location(
  const overarching_msgs__msg__Location * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
size_t get_serialized_size_key_overarching_msgs__msg__Location(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
size_t max_serialized_size_key_overarching_msgs__msg__Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_overarching_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, overarching_msgs, msg, Location)();

#ifdef __cplusplus
}
#endif

#endif  // OVERARCHING_MSGS__MSG__DETAIL__LOCATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
