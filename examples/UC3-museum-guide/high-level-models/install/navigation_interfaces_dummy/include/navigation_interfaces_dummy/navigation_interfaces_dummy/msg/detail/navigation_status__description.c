// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#include "navigation_interfaces_dummy/msg/detail/navigation_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_navigation_interfaces_dummy
const rosidl_type_hash_t *
navigation_interfaces_dummy__msg__NavigationStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe6, 0xdd, 0xb3, 0x67, 0xfe, 0xcb, 0x72, 0x3b,
      0x1b, 0x70, 0x35, 0x0e, 0x5e, 0x0b, 0x6b, 0x93,
      0x4f, 0xa6, 0xa2, 0xd0, 0xcc, 0x4e, 0x0d, 0x1f,
      0x59, 0xa6, 0xc9, 0x77, 0x37, 0x89, 0x3b, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char navigation_interfaces_dummy__msg__NavigationStatus__TYPE_NAME[] = "navigation_interfaces_dummy/msg/NavigationStatus";

// Define type names, field names, and default values
static char navigation_interfaces_dummy__msg__NavigationStatus__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field navigation_interfaces_dummy__msg__NavigationStatus__FIELDS[] = {
  {
    {navigation_interfaces_dummy__msg__NavigationStatus__FIELD_NAME__status, 6, 6},
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
navigation_interfaces_dummy__msg__NavigationStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {navigation_interfaces_dummy__msg__NavigationStatus__TYPE_NAME, 48, 48},
      {navigation_interfaces_dummy__msg__NavigationStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 NAVIGATION_STATUS_IDLE=0\n"
  "int8 NAVIGATION_STATUS_PREPARING_BEFORE_MOVE=1\n"
  "int8 NAVIGATION_STATUS_MOVING=2\n"
  "int8 NAVIGATION_STATUS_WAITING_OBSTACLE=3\n"
  "int8 NAVIGATION_STATUS_GOAL_REACHED=4\n"
  "int8 NAVIGATION_STATUS_ABORTED=5\n"
  "int8 NAVIGATION_STATUS_FAILING=6\n"
  "int8 NAVIGATION_STATUS_PAUSED=7\n"
  "int8 NAVIGATION_STATUS_THINKING=8\n"
  "int8 NAVIGATION_STATUS_ERROR=9\n"
  "int8 status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
navigation_interfaces_dummy__msg__NavigationStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {navigation_interfaces_dummy__msg__NavigationStatus__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 364, 364},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
navigation_interfaces_dummy__msg__NavigationStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *navigation_interfaces_dummy__msg__NavigationStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
