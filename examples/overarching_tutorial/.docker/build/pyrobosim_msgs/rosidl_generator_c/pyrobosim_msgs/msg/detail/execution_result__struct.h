// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:msg/ExecutionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/execution_result.h"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__STRUCT_H_
#define PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * Constant values for the status codes #
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__UNKNOWN = -1l
};

/// Constant 'SUCCESS'.
/**
  * Action executed successfully.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__SUCCESS = 0l
};

/// Constant 'PRECONDITION_FAILURE'.
/**
  * Preconditions not sufficient to execute the action.
  * For example, the action was to pick an object but there was no object visible.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__PRECONDITION_FAILURE = 1l
};

/// Constant 'PLANNING_FAILURE'.
/**
  * Planning failed, for example a path planner or grasp planner did not produce a solution.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__PLANNING_FAILURE = 2l
};

/// Constant 'EXECUTION_FAILURE'.
/**
  * Preconditions were met and planning succeeded, but execution failed.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__EXECUTION_FAILURE = 3l
};

/// Constant 'POSTCONDITION_FAILURE'.
/**
  * Execution succeeded, but post-execution validation failed.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__POSTCONDITION_FAILURE = 4l
};

/// Constant 'INVALID_ACTION'.
/**
  * Invalid action type.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__INVALID_ACTION = 5l
};

/// Constant 'CANCELED'.
/**
  * The action was canceled by a user or upstream program.
 */
enum
{
  pyrobosim_msgs__msg__ExecutionResult__CANCELED = 6l
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ExecutionResult in the package pyrobosim_msgs.
/**
  * Execution Result ROS Message
 */
typedef struct pyrobosim_msgs__msg__ExecutionResult
{
  /// Message Fields #
  ///
  /// The status code.
  int32_t status;
  /// A message describing the result.
  rosidl_runtime_c__String message;
} pyrobosim_msgs__msg__ExecutionResult;

// Struct for a sequence of pyrobosim_msgs__msg__ExecutionResult.
typedef struct pyrobosim_msgs__msg__ExecutionResult__Sequence
{
  pyrobosim_msgs__msg__ExecutionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__msg__ExecutionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__STRUCT_H_
