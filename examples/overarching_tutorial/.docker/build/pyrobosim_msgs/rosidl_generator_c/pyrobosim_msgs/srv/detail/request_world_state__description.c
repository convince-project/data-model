// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from pyrobosim_msgs:srv/RequestWorldState.idl
// generated code does not contain a copyright notice

#include "pyrobosim_msgs/srv/detail/request_world_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__srv__RequestWorldState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0xd5, 0x53, 0x3e, 0x73, 0xcd, 0xa7, 0x42,
      0xfb, 0xdd, 0x83, 0x59, 0x7a, 0x51, 0x22, 0x77,
      0xf5, 0x70, 0x89, 0x57, 0x7a, 0xd6, 0x0a, 0x92,
      0x8d, 0x45, 0x73, 0x4f, 0xf9, 0xad, 0xf4, 0x5f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__srv__RequestWorldState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0xe4, 0x6c, 0x5d, 0x8d, 0x64, 0xf0, 0x95,
      0x59, 0xbc, 0x05, 0xa1, 0xd5, 0xfd, 0xed, 0x6f,
      0xc3, 0x12, 0x3f, 0x1a, 0x3c, 0xc4, 0xd3, 0x3b,
      0x2f, 0x58, 0xd7, 0x23, 0xaa, 0x4e, 0x6b, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__srv__RequestWorldState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x74, 0xb0, 0xa0, 0x72, 0x11, 0x7c, 0x26,
      0x5c, 0xa0, 0xe9, 0x14, 0xff, 0x23, 0xf5, 0x21,
      0x16, 0x43, 0x22, 0xd8, 0xf3, 0xed, 0x69, 0x9a,
      0x00, 0x96, 0x06, 0x6b, 0x99, 0xa7, 0x1c, 0xa9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_pyrobosim_msgs
const rosidl_type_hash_t *
pyrobosim_msgs__srv__RequestWorldState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x02, 0x68, 0x31, 0xd6, 0xad, 0x54, 0x83,
      0xaf, 0xf0, 0xdd, 0xbf, 0x64, 0x11, 0xb3, 0xec,
      0x0c, 0xcb, 0xbc, 0x5e, 0x42, 0xaa, 0xb6, 0x29,
      0x33, 0x01, 0xc3, 0x3e, 0x5d, 0x00, 0x9d, 0x78,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "pyrobosim_msgs/msg/detail/object_state__functions.h"
#include "pyrobosim_msgs/msg/detail/world_state__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "pyrobosim_msgs/msg/detail/location_state__functions.h"
#include "pyrobosim_msgs/msg/detail/hallway_state__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "pyrobosim_msgs/msg/detail/robot_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
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
static const rosidl_type_hash_t pyrobosim_msgs__msg__HallwayState__EXPECTED_HASH = {1, {
    0x4c, 0x07, 0xa7, 0x77, 0x39, 0x3d, 0xa7, 0xa7,
    0xff, 0x08, 0xc0, 0xca, 0xb2, 0x17, 0x33, 0x08,
    0x0f, 0x6e, 0x95, 0xd8, 0x66, 0x17, 0x76, 0x4b,
    0x77, 0x5b, 0xfb, 0x6f, 0x21, 0x58, 0x71, 0x31,
  }};
static const rosidl_type_hash_t pyrobosim_msgs__msg__LocationState__EXPECTED_HASH = {1, {
    0xc5, 0x0c, 0x64, 0xf5, 0x6c, 0x45, 0x26, 0x70,
    0x5e, 0x2b, 0x24, 0x6c, 0xdb, 0x95, 0x03, 0x3d,
    0x5f, 0x36, 0x26, 0x98, 0x65, 0xe2, 0x54, 0xcd,
    0x91, 0x03, 0xba, 0x3b, 0x4b, 0x00, 0x53, 0x9d,
  }};
static const rosidl_type_hash_t pyrobosim_msgs__msg__ObjectState__EXPECTED_HASH = {1, {
    0xe9, 0xfe, 0xaa, 0x5a, 0x11, 0x57, 0xb6, 0xeb,
    0x61, 0x2f, 0x24, 0x7c, 0xa1, 0xc1, 0x2f, 0xbe,
    0x68, 0xd2, 0xfa, 0xf5, 0xc8, 0x78, 0xa6, 0x07,
    0x25, 0xf7, 0xd8, 0x66, 0x59, 0x04, 0x98, 0xcb,
  }};
static const rosidl_type_hash_t pyrobosim_msgs__msg__RobotState__EXPECTED_HASH = {1, {
    0xd0, 0x40, 0x15, 0x92, 0x45, 0xa4, 0x3c, 0xd5,
    0x43, 0x13, 0x3d, 0xc2, 0xdf, 0x70, 0xb0, 0x4e,
    0x84, 0x1b, 0x4f, 0x5b, 0x83, 0x38, 0x4b, 0xe4,
    0x65, 0xdf, 0x7b, 0x27, 0x54, 0x24, 0xb6, 0xeb,
  }};
static const rosidl_type_hash_t pyrobosim_msgs__msg__WorldState__EXPECTED_HASH = {1, {
    0xdb, 0x7d, 0x86, 0xf3, 0x29, 0x9f, 0xf1, 0x37,
    0xff, 0x3b, 0x31, 0xf7, 0x22, 0x3d, 0x6b, 0xf3,
    0xa0, 0x2e, 0x5c, 0x5c, 0x84, 0x38, 0x23, 0xf5,
    0xb5, 0x2a, 0xc0, 0x21, 0xdd, 0x1e, 0x1e, 0x60,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char pyrobosim_msgs__srv__RequestWorldState__TYPE_NAME[] = "pyrobosim_msgs/srv/RequestWorldState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char pyrobosim_msgs__msg__HallwayState__TYPE_NAME[] = "pyrobosim_msgs/msg/HallwayState";
static char pyrobosim_msgs__msg__LocationState__TYPE_NAME[] = "pyrobosim_msgs/msg/LocationState";
static char pyrobosim_msgs__msg__ObjectState__TYPE_NAME[] = "pyrobosim_msgs/msg/ObjectState";
static char pyrobosim_msgs__msg__RobotState__TYPE_NAME[] = "pyrobosim_msgs/msg/RobotState";
static char pyrobosim_msgs__msg__WorldState__TYPE_NAME[] = "pyrobosim_msgs/msg/WorldState";
static char pyrobosim_msgs__srv__RequestWorldState_Event__TYPE_NAME[] = "pyrobosim_msgs/srv/RequestWorldState_Event";
static char pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME[] = "pyrobosim_msgs/srv/RequestWorldState_Request";
static char pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME[] = "pyrobosim_msgs/srv/RequestWorldState_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char pyrobosim_msgs__srv__RequestWorldState__FIELD_NAME__request_message[] = "request_message";
static char pyrobosim_msgs__srv__RequestWorldState__FIELD_NAME__response_message[] = "response_message";
static char pyrobosim_msgs__srv__RequestWorldState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__srv__RequestWorldState__FIELDS[] = {
  {
    {pyrobosim_msgs__srv__RequestWorldState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pyrobosim_msgs__srv__RequestWorldState_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pyrobosim_msgs__srv__RequestWorldState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
    {pyrobosim_msgs__msg__HallwayState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__LocationState__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__ObjectState__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__RobotState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__WorldState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__srv__RequestWorldState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__srv__RequestWorldState__TYPE_NAME, 36, 36},
      {pyrobosim_msgs__srv__RequestWorldState__FIELDS, 3, 3},
    },
    {pyrobosim_msgs__srv__RequestWorldState__REFERENCED_TYPE_DESCRIPTIONS, 14, 14},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__HallwayState__EXPECTED_HASH, pyrobosim_msgs__msg__HallwayState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = pyrobosim_msgs__msg__HallwayState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__LocationState__EXPECTED_HASH, pyrobosim_msgs__msg__LocationState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = pyrobosim_msgs__msg__LocationState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__ObjectState__EXPECTED_HASH, pyrobosim_msgs__msg__ObjectState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = pyrobosim_msgs__msg__ObjectState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__RobotState__EXPECTED_HASH, pyrobosim_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = pyrobosim_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__WorldState__EXPECTED_HASH, pyrobosim_msgs__msg__WorldState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = pyrobosim_msgs__msg__WorldState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = pyrobosim_msgs__srv__RequestWorldState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[10].fields = pyrobosim_msgs__srv__RequestWorldState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = pyrobosim_msgs__srv__RequestWorldState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pyrobosim_msgs__srv__RequestWorldState_Request__FIELD_NAME__robot[] = "robot";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__srv__RequestWorldState_Request__FIELDS[] = {
  {
    {pyrobosim_msgs__srv__RequestWorldState_Request__FIELD_NAME__robot, 5, 5},
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
pyrobosim_msgs__srv__RequestWorldState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME, 44, 44},
      {pyrobosim_msgs__srv__RequestWorldState_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pyrobosim_msgs__srv__RequestWorldState_Response__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__srv__RequestWorldState_Response__FIELDS[] = {
  {
    {pyrobosim_msgs__srv__RequestWorldState_Response__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {pyrobosim_msgs__msg__WorldState__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pyrobosim_msgs__srv__RequestWorldState_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
    {pyrobosim_msgs__msg__HallwayState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__LocationState__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__ObjectState__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__RobotState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__WorldState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__srv__RequestWorldState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME, 45, 45},
      {pyrobosim_msgs__srv__RequestWorldState_Response__FIELDS, 1, 1},
    },
    {pyrobosim_msgs__srv__RequestWorldState_Response__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__HallwayState__EXPECTED_HASH, pyrobosim_msgs__msg__HallwayState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = pyrobosim_msgs__msg__HallwayState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__LocationState__EXPECTED_HASH, pyrobosim_msgs__msg__LocationState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = pyrobosim_msgs__msg__LocationState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__ObjectState__EXPECTED_HASH, pyrobosim_msgs__msg__ObjectState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = pyrobosim_msgs__msg__ObjectState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__RobotState__EXPECTED_HASH, pyrobosim_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = pyrobosim_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__WorldState__EXPECTED_HASH, pyrobosim_msgs__msg__WorldState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = pyrobosim_msgs__msg__WorldState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char pyrobosim_msgs__srv__RequestWorldState_Event__FIELD_NAME__info[] = "info";
static char pyrobosim_msgs__srv__RequestWorldState_Event__FIELD_NAME__request[] = "request";
static char pyrobosim_msgs__srv__RequestWorldState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field pyrobosim_msgs__srv__RequestWorldState_Event__FIELDS[] = {
  {
    {pyrobosim_msgs__srv__RequestWorldState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription pyrobosim_msgs__srv__RequestWorldState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
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
    {pyrobosim_msgs__msg__HallwayState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__LocationState__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__ObjectState__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__RobotState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__msg__WorldState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
pyrobosim_msgs__srv__RequestWorldState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {pyrobosim_msgs__srv__RequestWorldState_Event__TYPE_NAME, 42, 42},
      {pyrobosim_msgs__srv__RequestWorldState_Event__FIELDS, 3, 3},
    },
    {pyrobosim_msgs__srv__RequestWorldState_Event__REFERENCED_TYPE_DESCRIPTIONS, 13, 13},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__HallwayState__EXPECTED_HASH, pyrobosim_msgs__msg__HallwayState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = pyrobosim_msgs__msg__HallwayState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__LocationState__EXPECTED_HASH, pyrobosim_msgs__msg__LocationState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = pyrobosim_msgs__msg__LocationState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__ObjectState__EXPECTED_HASH, pyrobosim_msgs__msg__ObjectState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = pyrobosim_msgs__msg__ObjectState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__RobotState__EXPECTED_HASH, pyrobosim_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = pyrobosim_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&pyrobosim_msgs__msg__WorldState__EXPECTED_HASH, pyrobosim_msgs__msg__WorldState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = pyrobosim_msgs__msg__WorldState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[9].fields = pyrobosim_msgs__srv__RequestWorldState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[10].fields = pyrobosim_msgs__srv__RequestWorldState_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# ROS service to request the world state\n"
  "\n"
  "# Optional robot name.\n"
  "# If specified, gets the known world state of that robot.\n"
  "# If not specified, gets the full world state.\n"
  "string robot\n"
  "\n"
  "---\n"
  "\n"
  "# The world state\n"
  "WorldState state";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__srv__RequestWorldState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__srv__RequestWorldState__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 224, 224},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__srv__RequestWorldState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__srv__RequestWorldState_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__srv__RequestWorldState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__srv__RequestWorldState_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
pyrobosim_msgs__srv__RequestWorldState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {pyrobosim_msgs__srv__RequestWorldState_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__srv__RequestWorldState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[15];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 15, 15};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__srv__RequestWorldState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *pyrobosim_msgs__msg__HallwayState__get_individual_type_description_source(NULL);
    sources[6] = *pyrobosim_msgs__msg__LocationState__get_individual_type_description_source(NULL);
    sources[7] = *pyrobosim_msgs__msg__ObjectState__get_individual_type_description_source(NULL);
    sources[8] = *pyrobosim_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    sources[9] = *pyrobosim_msgs__msg__WorldState__get_individual_type_description_source(NULL);
    sources[10] = *pyrobosim_msgs__srv__RequestWorldState_Event__get_individual_type_description_source(NULL);
    sources[11] = *pyrobosim_msgs__srv__RequestWorldState_Request__get_individual_type_description_source(NULL);
    sources[12] = *pyrobosim_msgs__srv__RequestWorldState_Response__get_individual_type_description_source(NULL);
    sources[13] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[14] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__srv__RequestWorldState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__srv__RequestWorldState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__srv__RequestWorldState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__srv__RequestWorldState_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *pyrobosim_msgs__msg__HallwayState__get_individual_type_description_source(NULL);
    sources[6] = *pyrobosim_msgs__msg__LocationState__get_individual_type_description_source(NULL);
    sources[7] = *pyrobosim_msgs__msg__ObjectState__get_individual_type_description_source(NULL);
    sources[8] = *pyrobosim_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    sources[9] = *pyrobosim_msgs__msg__WorldState__get_individual_type_description_source(NULL);
    sources[10] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
pyrobosim_msgs__srv__RequestWorldState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[14];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 14, 14};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *pyrobosim_msgs__srv__RequestWorldState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *pyrobosim_msgs__msg__HallwayState__get_individual_type_description_source(NULL);
    sources[6] = *pyrobosim_msgs__msg__LocationState__get_individual_type_description_source(NULL);
    sources[7] = *pyrobosim_msgs__msg__ObjectState__get_individual_type_description_source(NULL);
    sources[8] = *pyrobosim_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    sources[9] = *pyrobosim_msgs__msg__WorldState__get_individual_type_description_source(NULL);
    sources[10] = *pyrobosim_msgs__srv__RequestWorldState_Request__get_individual_type_description_source(NULL);
    sources[11] = *pyrobosim_msgs__srv__RequestWorldState_Response__get_individual_type_description_source(NULL);
    sources[12] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[13] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
