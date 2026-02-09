// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from overarching_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#include "overarching_msgs/msg/detail/location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_overarching_msgs
const rosidl_type_hash_t *
overarching_msgs__msg__Location__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0x1c, 0x7c, 0x17, 0xa9, 0xe3, 0x53, 0x6a,
      0xbd, 0xa2, 0x65, 0xd4, 0x9f, 0x55, 0x4e, 0xcd,
      0xaa, 0xea, 0xf0, 0xe0, 0xc7, 0x10, 0x3a, 0xdd,
      0x10, 0x4c, 0x54, 0xf5, 0x5f, 0x70, 0x55, 0x22,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char overarching_msgs__msg__Location__TYPE_NAME[] = "overarching_msgs/msg/Location";

// Define type names, field names, and default values
static char overarching_msgs__msg__Location__FIELD_NAME__x[] = "x";
static char overarching_msgs__msg__Location__FIELD_NAME__y[] = "y";
static char overarching_msgs__msg__Location__FIELD_NAME__parent[] = "parent";

static rosidl_runtime_c__type_description__Field overarching_msgs__msg__Location__FIELDS[] = {
  {
    {overarching_msgs__msg__Location__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {overarching_msgs__msg__Location__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {overarching_msgs__msg__Location__FIELD_NAME__parent, 6, 6},
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
overarching_msgs__msg__Location__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {overarching_msgs__msg__Location__TYPE_NAME, 29, 29},
      {overarching_msgs__msg__Location__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x\n"
  "int32 y\n"
  "string parent";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
overarching_msgs__msg__Location__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {overarching_msgs__msg__Location__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
overarching_msgs__msg__Location__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *overarching_msgs__msg__Location__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
