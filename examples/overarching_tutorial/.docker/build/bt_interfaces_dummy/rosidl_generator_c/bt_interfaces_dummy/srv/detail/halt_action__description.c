// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from bt_interfaces_dummy:srv/HaltAction.idl
// generated code does not contain a copyright notice

#include "bt_interfaces_dummy/srv/detail/halt_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__HaltAction__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x96, 0x55, 0x95, 0x4b, 0x2b, 0x13, 0xa7,
      0xbb, 0x21, 0xac, 0x39, 0x2a, 0x29, 0xa2, 0xb3,
      0x95, 0x17, 0x02, 0x1f, 0x04, 0x06, 0xa7, 0x39,
      0xd0, 0x57, 0x42, 0xdf, 0x6b, 0x5e, 0x83, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__HaltAction_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x39, 0x98, 0xdf, 0x8b, 0x65, 0xfd, 0xf4,
      0x8a, 0xa5, 0x4c, 0x8a, 0x04, 0x11, 0x14, 0x8e,
      0xb4, 0xbe, 0xdb, 0xe8, 0x22, 0xa8, 0xb3, 0x69,
      0x0d, 0xf7, 0xb7, 0x47, 0x59, 0x65, 0x3d, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__HaltAction_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0xcd, 0xe3, 0x7f, 0x5e, 0x5c, 0x75, 0xfc,
      0xd6, 0x53, 0x95, 0x62, 0xd2, 0x79, 0x88, 0x0e,
      0x0b, 0x36, 0x1e, 0xcb, 0x9c, 0x85, 0xbe, 0xc3,
      0x99, 0xdb, 0xbd, 0x8f, 0xc1, 0xa8, 0x62, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_bt_interfaces_dummy
const rosidl_type_hash_t *
bt_interfaces_dummy__srv__HaltAction_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x4f, 0x4f, 0xc4, 0xc8, 0x88, 0xad, 0x1a,
      0x8c, 0x41, 0x8b, 0x16, 0xbd, 0x6c, 0xae, 0x4c,
      0x9d, 0x26, 0xac, 0x94, 0xf8, 0xff, 0x79, 0x10,
      0x73, 0xf8, 0xe5, 0xa0, 0x98, 0x3b, 0x59, 0x11,
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

static char bt_interfaces_dummy__srv__HaltAction__TYPE_NAME[] = "bt_interfaces_dummy/srv/HaltAction";
static char bt_interfaces_dummy__srv__HaltAction_Event__TYPE_NAME[] = "bt_interfaces_dummy/srv/HaltAction_Event";
static char bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME[] = "bt_interfaces_dummy/srv/HaltAction_Request";
static char bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME[] = "bt_interfaces_dummy/srv/HaltAction_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__HaltAction__FIELD_NAME__request_message[] = "request_message";
static char bt_interfaces_dummy__srv__HaltAction__FIELD_NAME__response_message[] = "response_message";
static char bt_interfaces_dummy__srv__HaltAction__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__HaltAction__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__HaltAction__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {bt_interfaces_dummy__srv__HaltAction_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bt_interfaces_dummy__srv__HaltAction__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {bt_interfaces_dummy__srv__HaltAction_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME, 43, 43},
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
bt_interfaces_dummy__srv__HaltAction__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__HaltAction__TYPE_NAME, 34, 34},
      {bt_interfaces_dummy__srv__HaltAction__FIELDS, 3, 3},
    },
    {bt_interfaces_dummy__srv__HaltAction__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = bt_interfaces_dummy__srv__HaltAction_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bt_interfaces_dummy__srv__HaltAction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = bt_interfaces_dummy__srv__HaltAction_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__HaltAction_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__HaltAction_Request__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__HaltAction_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
bt_interfaces_dummy__srv__HaltAction_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME, 42, 42},
      {bt_interfaces_dummy__srv__HaltAction_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__HaltAction_Response__FIELD_NAME__is_ok[] = "is_ok";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__HaltAction_Response__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__HaltAction_Response__FIELD_NAME__is_ok, 5, 5},
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
bt_interfaces_dummy__srv__HaltAction_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME, 43, 43},
      {bt_interfaces_dummy__srv__HaltAction_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char bt_interfaces_dummy__srv__HaltAction_Event__FIELD_NAME__info[] = "info";
static char bt_interfaces_dummy__srv__HaltAction_Event__FIELD_NAME__request[] = "request";
static char bt_interfaces_dummy__srv__HaltAction_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field bt_interfaces_dummy__srv__HaltAction_Event__FIELDS[] = {
  {
    {bt_interfaces_dummy__srv__HaltAction_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription bt_interfaces_dummy__srv__HaltAction_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME, 43, 43},
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
bt_interfaces_dummy__srv__HaltAction_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {bt_interfaces_dummy__srv__HaltAction_Event__TYPE_NAME, 40, 40},
      {bt_interfaces_dummy__srv__HaltAction_Event__FIELDS, 3, 3},
    },
    {bt_interfaces_dummy__srv__HaltAction_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = bt_interfaces_dummy__srv__HaltAction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = bt_interfaces_dummy__srv__HaltAction_Response__get_type_description(NULL)->type_description.fields;
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
  "bool is_ok";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__HaltAction__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__HaltAction__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__HaltAction_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__HaltAction_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__HaltAction_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__HaltAction_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
bt_interfaces_dummy__srv__HaltAction_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {bt_interfaces_dummy__srv__HaltAction_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__HaltAction__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__HaltAction__get_individual_type_description_source(NULL),
    sources[1] = *bt_interfaces_dummy__srv__HaltAction_Event__get_individual_type_description_source(NULL);
    sources[2] = *bt_interfaces_dummy__srv__HaltAction_Request__get_individual_type_description_source(NULL);
    sources[3] = *bt_interfaces_dummy__srv__HaltAction_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__HaltAction_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__HaltAction_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__HaltAction_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__HaltAction_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
bt_interfaces_dummy__srv__HaltAction_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *bt_interfaces_dummy__srv__HaltAction_Event__get_individual_type_description_source(NULL),
    sources[1] = *bt_interfaces_dummy__srv__HaltAction_Request__get_individual_type_description_source(NULL);
    sources[2] = *bt_interfaces_dummy__srv__HaltAction_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
