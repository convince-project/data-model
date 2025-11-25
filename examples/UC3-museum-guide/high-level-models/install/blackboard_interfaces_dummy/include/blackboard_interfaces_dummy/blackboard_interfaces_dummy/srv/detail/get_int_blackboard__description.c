// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x95, 0x66, 0x4d, 0x5b, 0xd4, 0xd6, 0xda,
      0xd4, 0x93, 0xaf, 0x23, 0x48, 0xfa, 0xa2, 0xab,
      0x57, 0x75, 0x77, 0xc0, 0x17, 0xa8, 0x5d, 0x40,
      0x5c, 0x6c, 0x88, 0xe2, 0x26, 0x0a, 0x5e, 0x2d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0xc6, 0x21, 0x0b, 0xa3, 0x1a, 0x0e, 0x42,
      0xe2, 0x60, 0x42, 0x1c, 0x66, 0x1a, 0xc1, 0xf9,
      0xf1, 0xb5, 0x4d, 0x4e, 0x37, 0x37, 0xe8, 0x11,
      0xd8, 0xe0, 0x76, 0xb6, 0x55, 0x56, 0xea, 0xf2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0x66, 0x6a, 0x97, 0x83, 0x50, 0xa7, 0xa6,
      0x93, 0x48, 0x52, 0x5a, 0x20, 0x16, 0xcc, 0x9f,
      0xbb, 0xf3, 0xf2, 0x3c, 0x7c, 0x1e, 0xd0, 0xbe,
      0xe9, 0x06, 0x05, 0x78, 0xf8, 0xce, 0xda, 0xf1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_blackboard_interfaces_dummy
const rosidl_type_hash_t *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0xa0, 0x8b, 0xc0, 0x33, 0x65, 0x7d, 0xb4,
      0x9d, 0xbc, 0xd0, 0x34, 0x62, 0x62, 0xf2, 0xd2,
      0x13, 0xea, 0x39, 0xff, 0xfd, 0x07, 0x1d, 0x6b,
      0x34, 0x5c, 0x6f, 0x4c, 0x78, 0xb9, 0x81, 0x83,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char blackboard_interfaces_dummy__srv__GetIntBlackboard__TYPE_NAME[] = "blackboard_interfaces_dummy/srv/GetIntBlackboard";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__TYPE_NAME[] = "blackboard_interfaces_dummy/srv/GetIntBlackboard_Event";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME[] = "blackboard_interfaces_dummy/srv/GetIntBlackboard_Request";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME[] = "blackboard_interfaces_dummy/srv/GetIntBlackboard_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELD_NAME__request_message[] = "request_message";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELD_NAME__response_message[] = "response_message";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELDS[] = {
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription blackboard_interfaces_dummy__srv__GetIntBlackboard__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {blackboard_interfaces_dummy__srv__GetIntBlackboard__TYPE_NAME, 48, 48},
      {blackboard_interfaces_dummy__srv__GetIntBlackboard__FIELDS, 3, 3},
    },
    {blackboard_interfaces_dummy__srv__GetIntBlackboard__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__FIELD_NAME__field_name[] = "field_name";

static rosidl_runtime_c__type_description__Field blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__FIELDS[] = {
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__FIELD_NAME__field_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME, 56, 56},
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__FIELD_NAME__value[] = "value";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__FIELD_NAME__is_ok[] = "is_ok";

static rosidl_runtime_c__type_description__Field blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__FIELDS[] = {
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__FIELD_NAME__is_ok, 5, 5},
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
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME, 57, 57},
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELD_NAME__info[] = "info";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELD_NAME__request[] = "request";
static char blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELDS[] = {
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__TYPE_NAME, 54, 54},
      {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__FIELDS, 3, 3},
    },
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 field_name\n"
  "---\n"
  "int32 value\n"
  "bool is_ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *blackboard_interfaces_dummy__srv__GetIntBlackboard__get_individual_type_description_source(NULL),
    sources[1] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_individual_type_description_source(NULL);
    sources[2] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_individual_type_description_source(NULL);
    sources[3] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_individual_type_description_source(NULL),
    sources[1] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_individual_type_description_source(NULL);
    sources[2] = *blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
