// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_people_detector_filter_interfaces_dummy
const rosidl_type_hash_t *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0xfb, 0x45, 0xf4, 0x3a, 0x95, 0x8b, 0xbd,
      0x8e, 0x93, 0x45, 0x99, 0x63, 0x1a, 0x22, 0x35,
      0xd5, 0x8b, 0x0b, 0x71, 0x5b, 0xc4, 0xab, 0xdf,
      0x70, 0x48, 0x30, 0x03, 0xa0, 0xc0, 0xd0, 0xc3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char people_detector_filter_interfaces_dummy__msg__IsFollowed__TYPE_NAME[] = "people_detector_filter_interfaces_dummy/msg/IsFollowed";

// Define type names, field names, and default values
static char people_detector_filter_interfaces_dummy__msg__IsFollowed__FIELD_NAME__is_followed[] = "is_followed";

static rosidl_runtime_c__type_description__Field people_detector_filter_interfaces_dummy__msg__IsFollowed__FIELDS[] = {
  {
    {people_detector_filter_interfaces_dummy__msg__IsFollowed__FIELD_NAME__is_followed, 11, 11},
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
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {people_detector_filter_interfaces_dummy__msg__IsFollowed__TYPE_NAME, 54, 54},
      {people_detector_filter_interfaces_dummy__msg__IsFollowed__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_followed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {people_detector_filter_interfaces_dummy__msg__IsFollowed__TYPE_NAME, 54, 54},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *people_detector_filter_interfaces_dummy__msg__IsFollowed__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
