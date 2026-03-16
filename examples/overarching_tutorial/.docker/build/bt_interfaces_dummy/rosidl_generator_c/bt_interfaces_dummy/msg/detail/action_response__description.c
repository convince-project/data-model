// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

#include "bt_interfaces_dummy/msg/detail/action_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__msg__ActionResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xe7, 0x43, 0x54, 0x72, 0x40, 0x2d, 0xcb,
      0xd3, 0x27, 0xba, 0xc0, 0xcd, 0xb6, 0x44, 0x15,
      0xb0, 0x9f, 0x76, 0x4f, 0x95, 0xee, 0x36, 0x2b,
      0x7b, 0xe6, 0xef, 0x5e, 0x05, 0x34, 0x8f, 0x39,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char bt_interfaces_dummy__msg__ActionResponse__TYPE_NAME[] = "bt_interfaces_dummy/msg/ActionResponse";

// Define type names, field names, and default values
static char bt_interfaces_dummy__msg__ActionResponse__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__msg__ActionResponse__FIELDS[] = {
  {
    {bt_interfaces_dummy__msg__ActionResponse__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
bt_interfaces_dummy__msg__ActionResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__msg__ActionResponse__TYPE_NAME, 38, 38},
      {bt_interfaces_dummy__msg__ActionResponse__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 SKILL_SUCCESS=0\n"
  "int8 SKILL_FAILURE=1\n"
  "int8 SKILL_RUNNING=2\n"
  "int8 status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__msg__ActionResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__msg__ActionResponse__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__msg__ActionResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__msg__ActionResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
