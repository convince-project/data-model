// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from blackboard_interfaces_dummy:srv/SetIntBlackboard.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.h"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__type_support.h"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetIntBlackboard_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_Request_type_support_ids_t;

static const _SetIntBlackboard_Request_type_support_ids_t _SetIntBlackboard_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_Request_type_support_symbol_names_t _SetIntBlackboard_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)),
  }
};

typedef struct _SetIntBlackboard_Request_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_Request_type_support_data_t;

static _SetIntBlackboard_Request_type_support_data_t _SetIntBlackboard_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_Request_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIntBlackboard_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::SetIntBlackboard_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__type_support.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetIntBlackboard_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_Response_type_support_ids_t;

static const _SetIntBlackboard_Response_type_support_ids_t _SetIntBlackboard_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_Response_type_support_symbol_names_t _SetIntBlackboard_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)),
  }
};

typedef struct _SetIntBlackboard_Response_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_Response_type_support_data_t;

static _SetIntBlackboard_Response_type_support_data_t _SetIntBlackboard_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_Response_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIntBlackboard_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::SetIntBlackboard_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__type_support.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetIntBlackboard_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_Event_type_support_ids_t;

static const _SetIntBlackboard_Event_type_support_ids_t _SetIntBlackboard_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_Event_type_support_symbol_names_t _SetIntBlackboard_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)),
  }
};

typedef struct _SetIntBlackboard_Event_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_Event_type_support_data_t;

static _SetIntBlackboard_Event_type_support_data_t _SetIntBlackboard_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_Event_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIntBlackboard_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::SetIntBlackboard_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetIntBlackboard_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_type_support_ids_t;

static const _SetIntBlackboard_type_support_ids_t _SetIntBlackboard_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_type_support_symbol_names_t _SetIntBlackboard_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, SetIntBlackboard)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, SetIntBlackboard)),
  }
};

typedef struct _SetIntBlackboard_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_type_support_data_t;

static _SetIntBlackboard_type_support_data_t _SetIntBlackboard_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_service_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_service_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_service_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetIntBlackboard_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetIntBlackboard_Request_message_type_support_handle,
  &SetIntBlackboard_Response_message_type_support_handle,
  &SetIntBlackboard_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    blackboard_interfaces_dummy,
    srv,
    SetIntBlackboard
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    blackboard_interfaces_dummy,
    srv,
    SetIntBlackboard
  ),
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, SetIntBlackboard)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::SetIntBlackboard_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
