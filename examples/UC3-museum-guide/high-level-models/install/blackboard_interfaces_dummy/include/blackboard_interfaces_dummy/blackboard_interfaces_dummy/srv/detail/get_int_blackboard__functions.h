// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__FUNCTIONS_H_
#define BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__FUNCTIONS_H_

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
#include "blackboard_interfaces_dummy/msg/rosidl_generator_c__visibility_control.h"

#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GetIntBlackboard message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request
 * )) before or use
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg);

/// Finalize srv/GetIntBlackboard message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg);

/// Create srv/GetIntBlackboard message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__create();

/// Destroy srv/GetIntBlackboard message.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg);

/// Check for srv/GetIntBlackboard message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * rhs);

/// Copy a srv/GetIntBlackboard message.
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
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetIntBlackboard messages.
/**
 * It allocates the memory for the number of elements and calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetIntBlackboard messages.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array);

/// Create array of srv/GetIntBlackboard messages.
/**
 * It allocates the memory for the array and calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetIntBlackboard messages.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array);

/// Check for srv/GetIntBlackboard message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * rhs);

/// Copy an array of srv/GetIntBlackboard messages.
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
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * output);

/// Initialize srv/GetIntBlackboard message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response
 * )) before or use
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg);

/// Finalize srv/GetIntBlackboard message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg);

/// Create srv/GetIntBlackboard message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__create();

/// Destroy srv/GetIntBlackboard message.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg);

/// Check for srv/GetIntBlackboard message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * rhs);

/// Copy a srv/GetIntBlackboard message.
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
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetIntBlackboard messages.
/**
 * It allocates the memory for the number of elements and calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetIntBlackboard messages.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array);

/// Create array of srv/GetIntBlackboard messages.
/**
 * It allocates the memory for the array and calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetIntBlackboard messages.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array);

/// Check for srv/GetIntBlackboard message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * rhs);

/// Copy an array of srv/GetIntBlackboard messages.
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
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * output);

/// Initialize srv/GetIntBlackboard message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event
 * )) before or use
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg);

/// Finalize srv/GetIntBlackboard message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg);

/// Create srv/GetIntBlackboard message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__create();

/// Destroy srv/GetIntBlackboard message.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg);

/// Check for srv/GetIntBlackboard message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * rhs);

/// Copy a srv/GetIntBlackboard message.
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
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetIntBlackboard messages.
/**
 * It allocates the memory for the number of elements and calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array, size_t size);

/// Finalize array of srv/GetIntBlackboard messages.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array);

/// Create array of srv/GetIntBlackboard messages.
/**
 * It allocates the memory for the array and calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__create(size_t size);

/// Destroy array of srv/GetIntBlackboard messages.
/**
 * It calls
 * blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array);

/// Check for srv/GetIntBlackboard message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * rhs);

/// Copy an array of srv/GetIntBlackboard messages.
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
ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__FUNCTIONS_H_
