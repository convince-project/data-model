// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:msg/HallwayState.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/msg/detail/hallway_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__msg__HallwayState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x07, 0xa7, 0x77, 0x39, 0x3d, 0xa7, 0xa7,
      0xff, 0x08, 0xc0, 0xca, 0xb2, 0x17, 0x33, 0x08,
      0x0f, 0x6e, 0x95, 0xd8, 0x66, 0x17, 0x76, 0x4b,
      0x77, 0x5b, 0xfb, 0x6f, 0x21, 0x58, 0x71, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char pyrobosim_msgs__msg__HallwayState__TYPE_NAME[] = "pyrobosim_msgs/msg/HallwayState";

// Define type names, field names, and default values
static char pyrobosim_msgs__msg__HallwayState__FIELD_NAME__name[] = "name";
static char pyrobosim_msgs__msg__HallwayState__FIELD_NAME__room_start[] = "room_start";
static char pyrobosim_msgs__msg__HallwayState__FIELD_NAME__room_end[] = "room_end";
static char pyrobosim_msgs__msg__HallwayState__FIELD_NAME__is_open[] = "is_open";
static char pyrobosim_msgs__msg__HallwayState__FIELD_NAME__is_locked[] = "is_locked";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__msg__HallwayState__FIELDS[] = {
  {
    {pyrobosim_msgs__msg__HallwayState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__HallwayState__FIELD_NAME__room_start, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__HallwayState__FIELD_NAME__room_end, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__HallwayState__FIELD_NAME__is_open, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__HallwayState__FIELD_NAME__is_locked, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__msg__HallwayState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__msg__HallwayState__TYPE_NAME, 31, 31},
      {pyrobosim_msgs__msg__HallwayState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Hallway state definition message\n"
  "\n"
  "# Fixed data\n"
  "string name\n"
  "string room_start\n"
  "string room_end\n"
  "\n"
  "# Dynamic data\n"
  "bool is_open\n"
  "bool is_locked";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__msg__HallwayState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__msg__HallwayState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 139, 139},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__msg__HallwayState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__msg__HallwayState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
