// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from timer_interfaces_dummy:srv/StartTimer.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "timer_interfaces_dummy/srv/detail/start_timer__struct.h"
#include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
#include "timer_interfaces_dummy/srv/detail/start_timer__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _StartTimer_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartTimer_Request_type_support_ids_t;

static const _StartTimer_Request_type_support_ids_t _StartTimer_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartTimer_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartTimer_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartTimer_Request_type_support_symbol_names_t _StartTimer_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, timer_interfaces_dummy, srv, StartTimer_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, StartTimer_Request)),
  }
};

typedef struct _StartTimer_Request_type_support_data_t
{
  void * data[2];
} _StartTimer_Request_type_support_data_t;

static _StartTimer_Request_type_support_data_t _StartTimer_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartTimer_Request_message_typesupport_map = {
  2,
  "timer_interfaces_dummy",
  &_StartTimer_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StartTimer_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StartTimer_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartTimer_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartTimer_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__StartTimer_Request__get_type_hash,
  &timer_interfaces_dummy__srv__StartTimer_Request__get_type_description,
  &timer_interfaces_dummy__srv__StartTimer_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace timer_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, StartTimer_Request)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_c::StartTimer_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__functions.h"
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

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _StartTimer_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartTimer_Response_type_support_ids_t;

static const _StartTimer_Response_type_support_ids_t _StartTimer_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartTimer_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartTimer_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartTimer_Response_type_support_symbol_names_t _StartTimer_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, timer_interfaces_dummy, srv, StartTimer_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, StartTimer_Response)),
  }
};

typedef struct _StartTimer_Response_type_support_data_t
{
  void * data[2];
} _StartTimer_Response_type_support_data_t;

static _StartTimer_Response_type_support_data_t _StartTimer_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartTimer_Response_message_typesupport_map = {
  2,
  "timer_interfaces_dummy",
  &_StartTimer_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StartTimer_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StartTimer_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartTimer_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartTimer_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__StartTimer_Response__get_type_hash,
  &timer_interfaces_dummy__srv__StartTimer_Response__get_type_description,
  &timer_interfaces_dummy__srv__StartTimer_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace timer_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, StartTimer_Response)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_c::StartTimer_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__functions.h"
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

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _StartTimer_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartTimer_Event_type_support_ids_t;

static const _StartTimer_Event_type_support_ids_t _StartTimer_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartTimer_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartTimer_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartTimer_Event_type_support_symbol_names_t _StartTimer_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, timer_interfaces_dummy, srv, StartTimer_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, StartTimer_Event)),
  }
};

typedef struct _StartTimer_Event_type_support_data_t
{
  void * data[2];
} _StartTimer_Event_type_support_data_t;

static _StartTimer_Event_type_support_data_t _StartTimer_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartTimer_Event_message_typesupport_map = {
  2,
  "timer_interfaces_dummy",
  &_StartTimer_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StartTimer_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StartTimer_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartTimer_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartTimer_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__StartTimer_Event__get_type_hash,
  &timer_interfaces_dummy__srv__StartTimer_Event__get_type_description,
  &timer_interfaces_dummy__srv__StartTimer_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace timer_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, StartTimer_Event)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_c::StartTimer_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _StartTimer_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartTimer_type_support_ids_t;

static const _StartTimer_type_support_ids_t _StartTimer_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _StartTimer_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartTimer_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartTimer_type_support_symbol_names_t _StartTimer_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, timer_interfaces_dummy, srv, StartTimer)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, StartTimer)),
  }
};

typedef struct _StartTimer_type_support_data_t
{
  void * data[2];
} _StartTimer_type_support_data_t;

static _StartTimer_type_support_data_t _StartTimer_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartTimer_service_typesupport_map = {
  2,
  "timer_interfaces_dummy",
  &_StartTimer_service_typesupport_ids.typesupport_identifier[0],
  &_StartTimer_service_typesupport_symbol_names.symbol_name[0],
  &_StartTimer_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StartTimer_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartTimer_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &StartTimer_Request_message_type_support_handle,
  &StartTimer_Response_message_type_support_handle,
  &StartTimer_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    timer_interfaces_dummy,
    srv,
    StartTimer
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    timer_interfaces_dummy,
    srv,
    StartTimer
  ),
  &timer_interfaces_dummy__srv__StartTimer__get_type_hash,
  &timer_interfaces_dummy__srv__StartTimer__get_type_description,
  &timer_interfaces_dummy__srv__StartTimer__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace timer_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, StartTimer)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_c::StartTimer_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
