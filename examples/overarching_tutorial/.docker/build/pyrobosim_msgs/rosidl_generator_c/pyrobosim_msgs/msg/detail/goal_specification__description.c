// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/msg/detail/goal_specification__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__msg__GoalSpecification__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x0e, 0x32, 0xdc, 0x12, 0xaa, 0x8f, 0x6a,
      0xe5, 0xd5, 0xe8, 0xeb, 0x3f, 0x51, 0xde, 0xba,
      0x75, 0x7e, 0xf6, 0xd2, 0x84, 0x5b, 0x7a, 0xf9,
      0xb9, 0x45, 0x8c, 0xcd, 0x8e, 0xb6, 0xbd, 0xe0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "pyrobosim_msgs/msg/detail/goal_predicate__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t pyrobosim_msgs__msg__GoalPredicate__EXPECTED_HASH = {1, {
    0x30, 0x12, 0x96, 0xc1, 0x39, 0x13, 0x9e, 0x1d,
    0x9b, 0x25, 0xa4, 0x8d, 0xe7, 0x91, 0x70, 0x47,
    0x5f, 0xde, 0x8b, 0xbd, 0x78, 0xbf, 0x39, 0xf7,
    0x0d, 0xc0, 0xdd, 0xad, 0x69, 0x6c, 0x3d, 0x21,
  }};
#endif

static char pyrobosim_msgs__msg__GoalSpecification__TYPE_NAME[] = "pyrobosim_msgs/msg/GoalSpecification";
static char pyrobosim_msgs__msg__GoalPredicate__TYPE_NAME[] = "pyrobosim_msgs/msg/GoalPredicate";

// Define type names, field names, and default values
static char pyrobosim_msgs__msg__GoalSpecification__FIELD_NAME__predicates[] = "predicates";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__msg__GoalSpecification__FIELDS[] = {
  {
    {pyrobosim_msgs__msg__GoalSpecification__FIELD_NAME__predicates, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {pyrobosim_msgs__msg__GoalPredicate__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pyrobosim_msgs__msg__GoalSpecification__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {pyrobosim_msgs__msg__GoalPredicate__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__msg__GoalSpecification__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__msg__GoalSpecification__TYPE_NAME, 36, 36},
      {pyrobosim_msgs__msg__GoalSpecification__FIELDS, 1, 1},
    },
    {pyrobosim_msgs__msg__GoalSpecification__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&pyrobosim_msgs__msg__GoalPredicate__EXPECTED_HASH, pyrobosim_msgs__msg__GoalPredicate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = pyrobosim_msgs__msg__GoalPredicate__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Goal Specification ROS Message\n"
  "# A goal specification consists of a list of predicates.\n"
  "\n"
  "pyrobosim_msgs/GoalPredicate[] predicates";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__msg__GoalSpecification__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__msg__GoalSpecification__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 133, 133},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__msg__GoalSpecification__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__msg__GoalSpecification__get_individual_type_description_source(NULL),
    sources[1] = *pyrobosim_msgs__msg__GoalPredicate__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
