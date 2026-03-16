// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bt_interfaces_dummy/msg/action_response.h"


#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__STRUCT_H_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SKILL_SUCCESS'.
enum
{
  bt_interfaces_dummy__msg__ActionResponse__SKILL_SUCCESS = 0
};

/// Constant 'SKILL_FAILURE'.
enum
{
  bt_interfaces_dummy__msg__ActionResponse__SKILL_FAILURE = 1
};

/// Constant 'SKILL_RUNNING'.
enum
{
  bt_interfaces_dummy__msg__ActionResponse__SKILL_RUNNING = 2
};

/// Struct defined in msg/ActionResponse in the package bt_interfaces_dummy.
typedef struct bt_interfaces_dummy__msg__ActionResponse
{
  int8_t status;
} bt_interfaces_dummy__msg__ActionResponse;

// Struct for a sequence of bt_interfaces_dummy__msg__ActionResponse.
typedef struct bt_interfaces_dummy__msg__ActionResponse__Sequence
{
  bt_interfaces_dummy__msg__ActionResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_interfaces_dummy__msg__ActionResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__STRUCT_H_
