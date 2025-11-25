// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from notify_user_interfaces_dummy:srv/StartAlarm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.h"
#include "notify_user_interfaces_dummy/srv/detail/start_alarm__type_support.h"
#include "notify_user_interfaces_dummy/srv/detail/start_alarm__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _StartAlarm_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_Request_type_support_ids_t;

static const _StartAlarm_Request_type_support_ids_t _StartAlarm_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartAlarm_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartAlarm_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartAlarm_Request_type_support_symbol_names_t _StartAlarm_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StartAlarm_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StartAlarm_Request)),
  }
};

typedef struct _StartAlarm_Request_type_support_data_t
{
  void * data[2];
} _StartAlarm_Request_type_support_data_t;

static _StartAlarm_Request_type_support_data_t _StartAlarm_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartAlarm_Request_message_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StartAlarm_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StartAlarm_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StartAlarm_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartAlarm_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StartAlarm_Request__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm_Request__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StartAlarm_Request)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StartAlarm_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__type_support.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__functions.h"
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

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _StartAlarm_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_Response_type_support_ids_t;

static const _StartAlarm_Response_type_support_ids_t _StartAlarm_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartAlarm_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartAlarm_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartAlarm_Response_type_support_symbol_names_t _StartAlarm_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StartAlarm_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StartAlarm_Response)),
  }
};

typedef struct _StartAlarm_Response_type_support_data_t
{
  void * data[2];
} _StartAlarm_Response_type_support_data_t;

static _StartAlarm_Response_type_support_data_t _StartAlarm_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartAlarm_Response_message_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StartAlarm_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StartAlarm_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StartAlarm_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartAlarm_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StartAlarm_Response__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm_Response__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StartAlarm_Response)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StartAlarm_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__type_support.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__functions.h"
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

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _StartAlarm_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_Event_type_support_ids_t;

static const _StartAlarm_Event_type_support_ids_t _StartAlarm_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartAlarm_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartAlarm_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartAlarm_Event_type_support_symbol_names_t _StartAlarm_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StartAlarm_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StartAlarm_Event)),
  }
};

typedef struct _StartAlarm_Event_type_support_data_t
{
  void * data[2];
} _StartAlarm_Event_type_support_data_t;

static _StartAlarm_Event_type_support_data_t _StartAlarm_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartAlarm_Event_message_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StartAlarm_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StartAlarm_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StartAlarm_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartAlarm_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StartAlarm_Event__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm_Event__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StartAlarm_Event)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StartAlarm_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _StartAlarm_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_type_support_ids_t;

static const _StartAlarm_type_support_ids_t _StartAlarm_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartAlarm_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartAlarm_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartAlarm_type_support_symbol_names_t _StartAlarm_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StartAlarm)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StartAlarm)),
  }
};

typedef struct _StartAlarm_type_support_data_t
{
  void * data[2];
} _StartAlarm_type_support_data_t;

static _StartAlarm_type_support_data_t _StartAlarm_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartAlarm_service_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StartAlarm_service_typesupport_ids.typesupport_identifier[0],
  &_StartAlarm_service_typesupport_symbol_names.symbol_name[0],
  &_StartAlarm_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StartAlarm_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &StartAlarm_Request_message_type_support_handle,
  &StartAlarm_Response_message_type_support_handle,
  &StartAlarm_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    notify_user_interfaces_dummy,
    srv,
    StartAlarm
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    notify_user_interfaces_dummy,
    srv,
    StartAlarm
  ),
  &notify_user_interfaces_dummy__srv__StartAlarm__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StartAlarm)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StartAlarm_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
