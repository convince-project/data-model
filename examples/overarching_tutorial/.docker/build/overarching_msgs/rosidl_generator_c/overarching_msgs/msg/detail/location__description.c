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
      0xf2, 0x50, 0x66, 0xd7, 0xef, 0x2f, 0x7e, 0xef,
      0xa2, 0xf3, 0x94, 0x78, 0xec, 0x41, 0x5c, 0xac,
      0xde, 0xf3, 0xf4, 0xd7, 0x36, 0xa5, 0x6f, 0xba,
      0x35, 0xad, 0x5e, 0x80, 0x87, 0x7f, 0xcf, 0x80,
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
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {overarching_msgs__msg__Location__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
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
  "float32 x\n"
  "float32 y\n"
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
    {toplevel_type_raw_source, 33, 33},
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
