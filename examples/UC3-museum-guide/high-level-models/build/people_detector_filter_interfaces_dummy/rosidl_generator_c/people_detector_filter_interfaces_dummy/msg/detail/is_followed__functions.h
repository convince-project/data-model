// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__FUNCTIONS_H_
#define PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__FUNCTIONS_H_

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
#include "people_detector_filter_interfaces_dummy/msg/rosidl_generator_c__visibility_control.h"

#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__struct.h"

/// Initialize msg/IsFollowed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * people_detector_filter_interfaces_dummy__msg__IsFollowed
 * )) before or use
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__init(people_detector_filter_interfaces_dummy__msg__IsFollowed * msg);

/// Finalize msg/IsFollowed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
void
people_detector_filter_interfaces_dummy__msg__IsFollowed__fini(people_detector_filter_interfaces_dummy__msg__IsFollowed * msg);

/// Create msg/IsFollowed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
people_detector_filter_interfaces_dummy__msg__IsFollowed *
people_detector_filter_interfaces_dummy__msg__IsFollowed__create();

/// Destroy msg/IsFollowed message.
/**
 * It calls
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
void
people_detector_filter_interfaces_dummy__msg__IsFollowed__destroy(people_detector_filter_interfaces_dummy__msg__IsFollowed * msg);

/// Check for msg/IsFollowed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__are_equal(const people_detector_filter_interfaces_dummy__msg__IsFollowed * lhs, const people_detector_filter_interfaces_dummy__msg__IsFollowed * rhs);

/// Copy a msg/IsFollowed message.
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
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__copy(
  const people_detector_filter_interfaces_dummy__msg__IsFollowed * input,
  people_detector_filter_interfaces_dummy__msg__IsFollowed * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
const rosidl_type_hash_t *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
const rosidl_runtime_c__type_description__TypeDescription *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource__Sequence *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/IsFollowed messages.
/**
 * It allocates the memory for the number of elements and calls
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__init(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array, size_t size);

/// Finalize array of msg/IsFollowed messages.
/**
 * It calls
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
void
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__fini(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array);

/// Create array of msg/IsFollowed messages.
/**
 * It allocates the memory for the array and calls
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence *
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__create(size_t size);

/// Destroy array of msg/IsFollowed messages.
/**
 * It calls
 * people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
void
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__destroy(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array);

/// Check for msg/IsFollowed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__are_equal(const people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * lhs, const people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * rhs);

/// Copy an array of msg/IsFollowed messages.
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
ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__copy(
  const people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * input,
  people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__FUNCTIONS_H_
