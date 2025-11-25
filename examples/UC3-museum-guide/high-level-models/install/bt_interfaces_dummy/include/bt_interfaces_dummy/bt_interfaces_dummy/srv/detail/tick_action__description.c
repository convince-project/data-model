// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bt_interfaces_dummy:srv/TickAction.idl
// generated code does not contain a copyright notice

#include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__TickAction__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x09, 0x75, 0xdf, 0x28, 0xbf, 0xaf, 0x36,
      0x6c, 0x84, 0x55, 0x0a, 0xc9, 0xa9, 0x91, 0x83,
      0xbf, 0x7c, 0x29, 0x3b, 0xa2, 0xe2, 0x52, 0x87,
      0x69, 0xcc, 0x38, 0xc5, 0x37, 0xb8, 0x20, 0xa4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__TickAction_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x91, 0x8a, 0x00, 0x5e, 0x2c, 0x3d, 0x07,
      0x53, 0x7c, 0x46, 0xf3, 0x55, 0x76, 0x38, 0xa8,
      0x96, 0xfe, 0xb1, 0x4c, 0xf0, 0x29, 0x8a, 0xb5,
      0xb6, 0xbc, 0x02, 0x04, 0xb4, 0xfa, 0x34, 0x86,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__TickAction_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0xa6, 0xc3, 0xc7, 0xfe, 0x2b, 0x0d, 0xb3,
      0xb5, 0x98, 0x90, 0x3a, 0x3d, 0xab, 0xab, 0x52,
      0xd7, 0x8e, 0x9f, 0xe1, 0x50, 0x51, 0x8e, 0x42,
      0x77, 0x08, 0x66, 0xc9, 0x2a, 0xe3, 0x92, 0x7d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__TickAction_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0xb1, 0x6b, 0xaf, 0x09, 0x59, 0xcb, 0x70,
      0x2a, 0xb9, 0x69, 0x20, 0x6a, 0xef, 0x39, 0x7a,
      0x60, 0x30, 0xb6, 0xd2, 0x6e, 0xbe, 0xf9, 0xdd,
      0x9c, 0x83, 0x61, 0x96, 0xab, 0xf3, 0x8f, 0x68,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char bt_interfaces_dummy__srv__TickAction__TYPE_NAME[] = "bt_interfaces_dummy/srv/TickAction";
static char bt_interfaces_dummy__srv__TickAction_Event__TYPE_NAME[] = "bt_interfaces_dummy/srv/TickAction_Event";
static char bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME[] = "bt_interfaces_dummy/srv/TickAction_Request";
static char bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME[] = "bt_interfaces_dummy/srv/TickAction_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__TickAction__FIELD_NAME__request_message[] = "request_message";
static char bt_interfaces_dummy__srv__TickAction__FIELD_NAME__response_message[] = "response_message";
static char bt_interfaces_dummy__srv__TickAction__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__TickAction__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__TickAction__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bt_interfaces_dummy__srv__TickAction_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bt_interfaces_dummy__srv__TickAction__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {bt_interfaces_dummy__srv__TickAction_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME, 43, 43},
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
bt_interfaces_dummy__srv__TickAction__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__TickAction__TYPE_NAME, 34, 34},
      {bt_interfaces_dummy__srv__TickAction__FIELDS, 3, 3},
    },
    {bt_interfaces_dummy__srv__TickAction__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = bt_interfaces_dummy__srv__TickAction_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bt_interfaces_dummy__srv__TickAction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bt_interfaces_dummy__srv__TickAction_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__TickAction_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__TickAction_Request__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__TickAction_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
bt_interfaces_dummy__srv__TickAction_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME, 42, 42},
      {bt_interfaces_dummy__srv__TickAction_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__TickAction_Response__FIELD_NAME__status[] = "status";
static char bt_interfaces_dummy__srv__TickAction_Response__FIELD_NAME__is_ok[] = "is_ok";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__TickAction_Response__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__TickAction_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction_Response__FIELD_NAME__is_ok, 5, 5},
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
bt_interfaces_dummy__srv__TickAction_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME, 43, 43},
      {bt_interfaces_dummy__srv__TickAction_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__TickAction_Event__FIELD_NAME__info[] = "info";
static char bt_interfaces_dummy__srv__TickAction_Event__FIELD_NAME__request[] = "request";
static char bt_interfaces_dummy__srv__TickAction_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__TickAction_Event__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__TickAction_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bt_interfaces_dummy__srv__TickAction_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME, 43, 43},
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
bt_interfaces_dummy__srv__TickAction_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__TickAction_Event__TYPE_NAME, 40, 40},
      {bt_interfaces_dummy__srv__TickAction_Event__FIELDS, 3, 3},
    },
    {bt_interfaces_dummy__srv__TickAction_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = bt_interfaces_dummy__srv__TickAction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bt_interfaces_dummy__srv__TickAction_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "int8 status\n"
  "bool is_ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__TickAction__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__TickAction__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__TickAction_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__TickAction_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__TickAction_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__TickAction_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__TickAction_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__TickAction_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__TickAction__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__TickAction__get_individual_type_description_source(NULL),
    sources[1] = *bt_interfaces_dummy__srv__TickAction_Event__get_individual_type_description_source(NULL);
    sources[2] = *bt_interfaces_dummy__srv__TickAction_Request__get_individual_type_description_source(NULL);
    sources[3] = *bt_interfaces_dummy__srv__TickAction_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__TickAction_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__TickAction_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__TickAction_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__TickAction_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__TickAction_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__TickAction_Event__get_individual_type_description_source(NULL),
    sources[1] = *bt_interfaces_dummy__srv__TickAction_Request__get_individual_type_description_source(NULL);
    sources[2] = *bt_interfaces_dummy__srv__TickAction_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
