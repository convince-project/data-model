// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from notify_user_interfaces_dummy:srv/StopAlarm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "notify_user_interfaces_dummy/srv/detail/stop_alarm__struct.h"
#include "notify_user_interfaces_dummy/srv/detail/stop_alarm__type_support.h"
#include "notify_user_interfaces_dummy/srv/detail/stop_alarm__functions.h"
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

typedef struct _StopAlarm_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopAlarm_Request_type_support_ids_t;

static const _StopAlarm_Request_type_support_ids_t _StopAlarm_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StopAlarm_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopAlarm_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopAlarm_Request_type_support_symbol_names_t _StopAlarm_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StopAlarm_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StopAlarm_Request)),
  }
};

typedef struct _StopAlarm_Request_type_support_data_t
{
  void * data[2];
} _StopAlarm_Request_type_support_data_t;

static _StopAlarm_Request_type_support_data_t _StopAlarm_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopAlarm_Request_message_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StopAlarm_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StopAlarm_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StopAlarm_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StopAlarm_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopAlarm_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StopAlarm_Request__get_type_hash,
  &notify_user_interfaces_dummy__srv__StopAlarm_Request__get_type_description,
  &notify_user_interfaces_dummy__srv__StopAlarm_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StopAlarm_Request)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StopAlarm_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__type_support.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__functions.h"
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

typedef struct _StopAlarm_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopAlarm_Response_type_support_ids_t;

static const _StopAlarm_Response_type_support_ids_t _StopAlarm_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StopAlarm_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopAlarm_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopAlarm_Response_type_support_symbol_names_t _StopAlarm_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StopAlarm_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StopAlarm_Response)),
  }
};

typedef struct _StopAlarm_Response_type_support_data_t
{
  void * data[2];
} _StopAlarm_Response_type_support_data_t;

static _StopAlarm_Response_type_support_data_t _StopAlarm_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopAlarm_Response_message_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StopAlarm_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StopAlarm_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StopAlarm_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StopAlarm_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopAlarm_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StopAlarm_Response__get_type_hash,
  &notify_user_interfaces_dummy__srv__StopAlarm_Response__get_type_description,
  &notify_user_interfaces_dummy__srv__StopAlarm_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StopAlarm_Response)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StopAlarm_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__type_support.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__functions.h"
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

typedef struct _StopAlarm_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopAlarm_Event_type_support_ids_t;

static const _StopAlarm_Event_type_support_ids_t _StopAlarm_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StopAlarm_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopAlarm_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopAlarm_Event_type_support_symbol_names_t _StopAlarm_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StopAlarm_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StopAlarm_Event)),
  }
};

typedef struct _StopAlarm_Event_type_support_data_t
{
  void * data[2];
} _StopAlarm_Event_type_support_data_t;

static _StopAlarm_Event_type_support_data_t _StopAlarm_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopAlarm_Event_message_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StopAlarm_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StopAlarm_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StopAlarm_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StopAlarm_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopAlarm_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StopAlarm_Event__get_type_hash,
  &notify_user_interfaces_dummy__srv__StopAlarm_Event__get_type_description,
  &notify_user_interfaces_dummy__srv__StopAlarm_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StopAlarm_Event)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StopAlarm_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/stop_alarm__type_support.h"
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
typedef struct _StopAlarm_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopAlarm_type_support_ids_t;

static const _StopAlarm_type_support_ids_t _StopAlarm_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StopAlarm_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopAlarm_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopAlarm_type_support_symbol_names_t _StopAlarm_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, notify_user_interfaces_dummy, srv, StopAlarm)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, notify_user_interfaces_dummy, srv, StopAlarm)),
  }
};

typedef struct _StopAlarm_type_support_data_t
{
  void * data[2];
} _StopAlarm_type_support_data_t;

static _StopAlarm_type_support_data_t _StopAlarm_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopAlarm_service_typesupport_map = {
  2,
  "notify_user_interfaces_dummy",
  &_StopAlarm_service_typesupport_ids.typesupport_identifier[0],
  &_StopAlarm_service_typesupport_symbol_names.symbol_name[0],
  &_StopAlarm_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StopAlarm_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopAlarm_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &StopAlarm_Request_message_type_support_handle,
  &StopAlarm_Response_message_type_support_handle,
  &StopAlarm_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    notify_user_interfaces_dummy,
    srv,
    StopAlarm
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    notify_user_interfaces_dummy,
    srv,
    StopAlarm
  ),
  &notify_user_interfaces_dummy__srv__StopAlarm__get_type_hash,
  &notify_user_interfaces_dummy__srv__StopAlarm__get_type_description,
  &notify_user_interfaces_dummy__srv__StopAlarm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, notify_user_interfaces_dummy, srv, StopAlarm)() {
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_c::StopAlarm_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
