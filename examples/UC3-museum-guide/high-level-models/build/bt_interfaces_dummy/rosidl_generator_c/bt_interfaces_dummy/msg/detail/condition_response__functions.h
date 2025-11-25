// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bt_interfaces_dummy:msg/ConditionResponse.idl
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__FUNCTIONS_H_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "bt_interfaces_dummy/msg/rosidl_generator_c__visibility_control.h"

#include "bt_interfaces_dummy/msg/detail/condition_response__struct.h"

/// Initialize msg/ConditionResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_interfaces_dummy__msg__ConditionResponse
 * )) before or use
 * bt_interfaces_dummy__msg__ConditionResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bool
bt_interfaces_dummy__msg__ConditionResponse__init(bt_interfaces_dummy__msg__ConditionResponse * msg);

/// Finalize msg/ConditionResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
void
bt_interfaces_dummy__msg__ConditionResponse__fini(bt_interfaces_dummy__msg__ConditionResponse * msg);

/// Create msg/ConditionResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_interfaces_dummy__msg__ConditionResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bt_interfaces_dummy__msg__ConditionResponse *
bt_interfaces_dummy__msg__ConditionResponse__create();

/// Destroy msg/ConditionResponse message.
/**
 * It calls
 * bt_interfaces_dummy__msg__ConditionResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
void
bt_interfaces_dummy__msg__ConditionResponse__destroy(bt_interfaces_dummy__msg__ConditionResponse * msg);

/// Check for msg/ConditionResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bool
bt_interfaces_dummy__msg__ConditionResponse__are_equal(const bt_interfaces_dummy__msg__ConditionResponse * lhs, const bt_interfaces_dummy__msg__ConditionResponse * rhs);

/// Copy a msg/ConditionResponse message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bool
bt_interfaces_dummy__msg__ConditionResponse__copy(
  const bt_interfaces_dummy__msg__ConditionResponse * input,
  bt_interfaces_dummy__msg__ConditionResponse * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__msg__ConditionResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_runtime_c__type_description__TypeDescription *
bt_interfaces_dummy__msg__ConditionResponse__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__msg__ConditionResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__msg__ConditionResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ConditionResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_interfaces_dummy__msg__ConditionResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bool
bt_interfaces_dummy__msg__ConditionResponse__Sequence__init(bt_interfaces_dummy__msg__ConditionResponse__Sequence * array, size_t size);

/// Finalize array of msg/ConditionResponse messages.
/**
 * It calls
 * bt_interfaces_dummy__msg__ConditionResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
void
bt_interfaces_dummy__msg__ConditionResponse__Sequence__fini(bt_interfaces_dummy__msg__ConditionResponse__Sequence * array);

/// Create array of msg/ConditionResponse messages.
/**
 * It allocates the memory for the array and calls
 * bt_interfaces_dummy__msg__ConditionResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bt_interfaces_dummy__msg__ConditionResponse__Sequence *
bt_interfaces_dummy__msg__ConditionResponse__Sequence__create(size_t size);

/// Destroy array of msg/ConditionResponse messages.
/**
 * It calls
 * bt_interfaces_dummy__msg__ConditionResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
void
bt_interfaces_dummy__msg__ConditionResponse__Sequence__destroy(bt_interfaces_dummy__msg__ConditionResponse__Sequence * array);

/// Check for msg/ConditionResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bool
bt_interfaces_dummy__msg__ConditionResponse__Sequence__are_equal(const bt_interfaces_dummy__msg__ConditionResponse__Sequence * lhs, const bt_interfaces_dummy__msg__ConditionResponse__Sequence * rhs);

/// Copy an array of msg/ConditionResponse messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
bool
bt_interfaces_dummy__msg__ConditionResponse__Sequence__copy(
  const bt_interfaces_dummy__msg__ConditionResponse__Sequence * input,
  bt_interfaces_dummy__msg__ConditionResponse__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__FUNCTIONS_H_
