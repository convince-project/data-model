// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:msg/ExecutionResult.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/msg/detail/execution_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__msg__ExecutionResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xb4, 0xaf, 0x3c, 0x1c, 0x42, 0x47, 0x58,
      0x57, 0x52, 0x70, 0x9a, 0x93, 0x4e, 0x75, 0x2e,
      0xf4, 0x4f, 0x81, 0xd9, 0xf9, 0x79, 0xd4, 0x60,
      0xad, 0xbe, 0x9c, 0x2b, 0x76, 0xcc, 0xf3, 0xb9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pyrobosim_msgs__msg__ExecutionResult__TYPE_NAME[] = "pyrobosim_msgs/msg/ExecutionResult";

// Define type names, field names, and default values
static char pyrobosim_msgs__msg__ExecutionResult__FIELD_NAME__status[] = "status";
static char pyrobosim_msgs__msg__ExecutionResult__DEFAULT_VALUE__status[] = "-1";
static char pyrobosim_msgs__msg__ExecutionResult__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__msg__ExecutionResult__FIELDS[] = {
  {
    {pyrobosim_msgs__msg__ExecutionResult__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {pyrobosim_msgs__msg__ExecutionResult__DEFAULT_VALUE__status, 2, 2},
  },
  {
    {pyrobosim_msgs__msg__ExecutionResult__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__msg__ExecutionResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__msg__ExecutionResult__TYPE_NAME, 34, 34},
      {pyrobosim_msgs__msg__ExecutionResult__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Execution Result ROS Message\n"
  "\n"
  "########################################\n"
  "# Constant values for the status codes #\n"
  "########################################\n"
  "int32 UNKNOWN=-1\n"
  "\n"
  "# Action executed successfully.\n"
  "int32 SUCCESS=0\n"
  "\n"
  "# Preconditions not sufficient to execute the action.\n"
  "# For example, the action was to pick an object but there was no object visible.\n"
  "int32 PRECONDITION_FAILURE=1\n"
  "\n"
  "# Planning failed, for example a path planner or grasp planner did not produce a solution.\n"
  "int32 PLANNING_FAILURE=2\n"
  "\n"
  "# Preconditions were met and planning succeeded, but execution failed.\n"
  "int32 EXECUTION_FAILURE=3\n"
  "\n"
  "# Execution succeeded, but post-execution validation failed.\n"
  "int32 POSTCONDITION_FAILURE=4\n"
  "\n"
  "# Invalid action type.\n"
  "int32 INVALID_ACTION=5\n"
  "\n"
  "# The action was canceled by a user or upstream program.\n"
  "int32 CANCELED=6\n"
  "\n"
  "##################\n"
  "# Message Fields #\n"
  "##################\n"
  "# The status code.\n"
  "int32 status -1\n"
  "\n"
  "# A message describing the result.\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__msg__ExecutionResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__msg__ExecutionResult__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 959, 959},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__msg__ExecutionResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__msg__ExecutionResult__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
