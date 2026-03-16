// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:msg/TaskAction.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/msg/detail/task_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__msg__TaskAction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0x9b, 0x64, 0xd3, 0x7d, 0xde, 0x61, 0x49,
      0x9a, 0x76, 0x55, 0xd6, 0x6b, 0x68, 0xe5, 0xa9,
      0xc2, 0x9d, 0x25, 0xa4, 0x05, 0xd0, 0x2e, 0x7a,
      0x7c, 0x40, 0xe1, 0xe9, 0x31, 0x27, 0x54, 0xb7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "pyrobosim_msgs/msg/detail/path__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t pyrobosim_msgs__msg__Path__EXPECTED_HASH = {1, {
    0xca, 0x36, 0x87, 0xa8, 0x2f, 0x8a, 0xe6, 0xd5,
    0x5a, 0xa2, 0x53, 0xab, 0x6d, 0x03, 0x71, 0x2d,
    0x03, 0x38, 0x25, 0xac, 0x51, 0xa4, 0xa5, 0x03,
    0x80, 0xa7, 0x95, 0xc1, 0xef, 0x88, 0x88, 0x34,
  }};
#endif

static char pyrobosim_msgs__msg__TaskAction__TYPE_NAME[] = "pyrobosim_msgs/msg/TaskAction";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char pyrobosim_msgs__msg__Path__TYPE_NAME[] = "pyrobosim_msgs/msg/Path";

// Define type names, field names, and default values
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__robot[] = "robot";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__type[] = "type";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__object[] = "object";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__room[] = "room";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__source_location[] = "source_location";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__target_location[] = "target_location";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__cost[] = "cost";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__has_pose[] = "has_pose";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__pose[] = "pose";
static char pyrobosim_msgs__msg__TaskAction__FIELD_NAME__path[] = "path";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__msg__TaskAction__FIELDS[] = {
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__robot, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__object, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__room, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__source_location, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__target_location, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__cost, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__has_pose, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__TaskAction__FIELD_NAME__path, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pyrobosim_msgs__msg__Path__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pyrobosim_msgs__msg__TaskAction__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__Path__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__msg__TaskAction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__msg__TaskAction__TYPE_NAME, 29, 29},
      {pyrobosim_msgs__msg__TaskAction__FIELDS, 10, 10},
    },
    {pyrobosim_msgs__msg__TaskAction__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__Path__EXPECTED_HASH, pyrobosim_msgs__msg__Path__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = pyrobosim_msgs__msg__Path__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Task Action ROS Message\n"
  "\n"
  "# Main action information\n"
  "string robot\n"
  "string type\n"
  "string object\n"
  "string room\n"
  "string source_location\n"
  "string target_location\n"
  "\n"
  "# Action cost (from the output of a planner)\n"
  "float32 cost\n"
  "\n"
  "# Other parameters\n"
  "bool has_pose\n"
  "geometry_msgs/Pose pose\n"
  "pyrobosim_msgs/Path path";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__msg__TaskAction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__msg__TaskAction__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 292, 292},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__msg__TaskAction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__msg__TaskAction__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *pyrobosim_msgs__msg__Path__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
