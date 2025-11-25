// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from scheduler_interfaces_dummy:srv/GetCurrentPoi.idl
// generated code does not contain a copyright notice

#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_scheduler_interfaces_dummy
const rosidl_type_hash_t *
scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x6b, 0x05, 0x53, 0x34, 0xb3, 0x66, 0x63,
      0x54, 0xfc, 0xf7, 0x32, 0x31, 0x8d, 0xfe, 0x04,
      0xff, 0xaa, 0xa4, 0xf8, 0x05, 0x8a, 0xeb, 0xd4,
      0x8b, 0xac, 0xe8, 0x64, 0x9f, 0x6c, 0xb8, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_scheduler_interfaces_dummy
const rosidl_type_hash_t *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0xb7, 0xc6, 0xdd, 0xec, 0x27, 0xc5, 0xd3,
      0x65, 0xae, 0x1c, 0xee, 0x3a, 0xb0, 0x3b, 0x6b,
      0x1b, 0xc2, 0xa6, 0xf7, 0x8a, 0x2d, 0x6a, 0xb4,
      0x3c, 0xe4, 0x6d, 0xec, 0xa0, 0x9d, 0x31, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_scheduler_interfaces_dummy
const rosidl_type_hash_t *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x3d, 0xc3, 0xf0, 0x29, 0x3d, 0x35, 0x9c,
      0x41, 0xe9, 0xc6, 0xf6, 0x9e, 0xe7, 0x58, 0x78,
      0xd7, 0xd3, 0x43, 0xb1, 0x3e, 0xb7, 0x60, 0x7f,
      0x08, 0xaf, 0x6d, 0x2d, 0x0a, 0x16, 0xa6, 0x66,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_scheduler_interfaces_dummy
const rosidl_type_hash_t *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x8c, 0xa0, 0x04, 0xbf, 0x42, 0x66, 0x55,
      0x3c, 0xdc, 0x33, 0xe1, 0xee, 0x03, 0x0a, 0x01,
      0x9f, 0x7e, 0x0b, 0x4a, 0x15, 0xc7, 0x69, 0x42,
      0x06, 0xf8, 0xb4, 0x36, 0x47, 0x11, 0x88, 0x8b,
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

static char scheduler_interfaces_dummy__srv__GetCurrentPoi__TYPE_NAME[] = "scheduler_interfaces_dummy/srv/GetCurrentPoi";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__TYPE_NAME[] = "scheduler_interfaces_dummy/srv/GetCurrentPoi_Event";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME[] = "scheduler_interfaces_dummy/srv/GetCurrentPoi_Request";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME[] = "scheduler_interfaces_dummy/srv/GetCurrentPoi_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELD_NAME__request_message[] = "request_message";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELD_NAME__response_message[] = "response_message";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELDS[] = {
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription scheduler_interfaces_dummy__srv__GetCurrentPoi__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {scheduler_interfaces_dummy__srv__GetCurrentPoi__TYPE_NAME, 44, 44},
      {scheduler_interfaces_dummy__srv__GetCurrentPoi__FIELDS, 3, 3},
    },
    {scheduler_interfaces_dummy__srv__GetCurrentPoi__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__FIELDS[] = {
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME, 52, 52},
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__FIELD_NAME__poi_number[] = "poi_number";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__FIELD_NAME__is_ok[] = "is_ok";

static rosidl_runtime_c__type_description__Field scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__FIELDS[] = {
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__FIELD_NAME__poi_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__FIELD_NAME__is_ok, 5, 5},
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
scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME, 53, 53},
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELD_NAME__info[] = "info";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELD_NAME__request[] = "request";
static char scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELDS[] = {
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__TYPE_NAME, 50, 50},
      {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__FIELDS, 3, 3},
    },
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "int32 poi_number\n"
  "bool is_ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
scheduler_interfaces_dummy__srv__GetCurrentPoi__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *scheduler_interfaces_dummy__srv__GetCurrentPoi__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_individual_type_description_source(NULL);
    sources[3] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_individual_type_description_source(NULL);
    sources[4] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_individual_type_description_source(NULL);
    sources[3] = *scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
