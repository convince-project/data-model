// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from pyrobosim_msgs:msg/ObjectState.idl
// generated code does not contain a copyright notice
#ifndef PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pyrobosim_msgs/msg/detail/object_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
bool cdr_serialize_pyrobosim_msgs__msg__ObjectState(
  const pyrobosim_msgs__msg__ObjectState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
bool cdr_deserialize_pyrobosim_msgs__msg__ObjectState(
  eprosima::fastcdr::Cdr &,
  pyrobosim_msgs__msg__ObjectState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t get_serialized_size_pyrobosim_msgs__msg__ObjectState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t max_serialized_size_pyrobosim_msgs__msg__ObjectState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
bool cdr_serialize_key_pyrobosim_msgs__msg__ObjectState(
  const pyrobosim_msgs__msg__ObjectState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t get_serialized_size_key_pyrobosim_msgs__msg__ObjectState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t max_serialized_size_key_pyrobosim_msgs__msg__ObjectState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pyrobosim_msgs, msg, ObjectState)();

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
