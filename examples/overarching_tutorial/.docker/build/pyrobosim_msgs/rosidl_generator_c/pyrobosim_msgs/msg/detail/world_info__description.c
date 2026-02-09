// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:msg/WorldInfo.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/msg/detail/world_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__msg__WorldInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x01, 0x5f, 0x7b, 0x7d, 0x84, 0x3f, 0x2a,
      0x93, 0x0a, 0xe7, 0xd1, 0xf1, 0xef, 0xc9, 0x5e,
      0xbc, 0x10, 0x9a, 0x36, 0xd8, 0x99, 0x46, 0x0c,
      0xab, 0x97, 0x4c, 0xe9, 0x80, 0xe3, 0xc3, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pyrobosim_msgs__msg__WorldInfo__TYPE_NAME[] = "pyrobosim_msgs/msg/WorldInfo";

// Define type names, field names, and default values
static char pyrobosim_msgs__msg__WorldInfo__FIELD_NAME__name[] = "name";
static char pyrobosim_msgs__msg__WorldInfo__FIELD_NAME__location_categories[] = "location_categories";
static char pyrobosim_msgs__msg__WorldInfo__FIELD_NAME__object_categories[] = "object_categories";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__msg__WorldInfo__FIELDS[] = {
  {
    {pyrobosim_msgs__msg__WorldInfo__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__WorldInfo__FIELD_NAME__location_categories, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__WorldInfo__FIELD_NAME__object_categories, 17, 17},
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
pyrobosim_msgs__msg__WorldInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__msg__WorldInfo__TYPE_NAME, 28, 28},
      {pyrobosim_msgs__msg__WorldInfo__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# World information definition message\n"
  "\n"
  "string name\n"
  "string[] location_categories\n"
  "string[] object_categories";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__msg__WorldInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__msg__WorldInfo__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 108, 108},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__msg__WorldInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__msg__WorldInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
