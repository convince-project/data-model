// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:msg/GoalPredicate.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/msg/detail/goal_predicate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__msg__GoalPredicate__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x12, 0x96, 0xc1, 0x39, 0x13, 0x9e, 0x1d,
      0x9b, 0x25, 0xa4, 0x8d, 0xe7, 0x91, 0x70, 0x47,
      0x5f, 0xde, 0x8b, 0xbd, 0x78, 0xbf, 0x39, 0xf7,
      0x0d, 0xc0, 0xdd, 0xad, 0x69, 0x6c, 0x3d, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pyrobosim_msgs__msg__GoalPredicate__TYPE_NAME[] = "pyrobosim_msgs/msg/GoalPredicate";

// Define type names, field names, and default values
static char pyrobosim_msgs__msg__GoalPredicate__FIELD_NAME__type[] = "type";
static char pyrobosim_msgs__msg__GoalPredicate__FIELD_NAME__args[] = "args";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__msg__GoalPredicate__FIELDS[] = {
  {
    {pyrobosim_msgs__msg__GoalPredicate__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__GoalPredicate__FIELD_NAME__args, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__msg__GoalPredicate__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__msg__GoalPredicate__TYPE_NAME, 32, 32},
      {pyrobosim_msgs__msg__GoalPredicate__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Goal Predicate ROS Message\n"
  "\n"
  "# Predicate type\n"
  "string type\n"
  "\n"
  "# Predicate arguments\n"
  "string[] args";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__msg__GoalPredicate__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__msg__GoalPredicate__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 96, 96},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__msg__GoalPredicate__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__msg__GoalPredicate__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
