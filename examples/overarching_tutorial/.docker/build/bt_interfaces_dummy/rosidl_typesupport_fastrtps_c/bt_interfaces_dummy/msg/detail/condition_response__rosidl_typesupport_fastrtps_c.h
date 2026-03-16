// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from bt_interfaces_dummy:msg/ConditionResponse.idl
// generated code does not contain a copyright notice
#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bt_interfaces_dummy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "bt_interfaces_dummy/msg/detail/condition_response__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
bool cdr_serialize_bt_interfaces_dummy__msg__ConditionResponse(
  const bt_interfaces_dummy__msg__ConditionResponse * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
bool cdr_deserialize_bt_interfaces_dummy__msg__ConditionResponse(
  eprosima::fastcdr::Cdr &,
  bt_interfaces_dummy__msg__ConditionResponse * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
size_t get_serialized_size_bt_interfaces_dummy__msg__ConditionResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
size_t max_serialized_size_bt_interfaces_dummy__msg__ConditionResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
bool cdr_serialize_key_bt_interfaces_dummy__msg__ConditionResponse(
  const bt_interfaces_dummy__msg__ConditionResponse * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
size_t get_serialized_size_key_bt_interfaces_dummy__msg__ConditionResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
size_t max_serialized_size_key_bt_interfaces_dummy__msg__ConditionResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_bt_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_interfaces_dummy, msg, ConditionResponse)();

#ifdef __cplusplus
}
#endif

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
