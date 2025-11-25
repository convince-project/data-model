// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from scheduler_interfaces_dummy:srv/GetCurrentPoi.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.h"
#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__type_support.h"
#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCurrentPoi_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCurrentPoi_Request_type_support_ids_t;

static const _GetCurrentPoi_Request_type_support_ids_t _GetCurrentPoi_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCurrentPoi_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCurrentPoi_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCurrentPoi_Request_type_support_symbol_names_t _GetCurrentPoi_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)),
  }
};

typedef struct _GetCurrentPoi_Request_type_support_data_t
{
  void * data[2];
} _GetCurrentPoi_Request_type_support_data_t;

static _GetCurrentPoi_Request_type_support_data_t _GetCurrentPoi_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCurrentPoi_Request_message_typesupport_map = {
  2,
  "scheduler_interfaces_dummy",
  &_GetCurrentPoi_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCurrentPoi_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCurrentPoi_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCurrentPoi_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCurrentPoi_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace scheduler_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)() {
  return &::scheduler_interfaces_dummy::srv::rosidl_typesupport_c::GetCurrentPoi_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__type_support.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"
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

namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCurrentPoi_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCurrentPoi_Response_type_support_ids_t;

static const _GetCurrentPoi_Response_type_support_ids_t _GetCurrentPoi_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCurrentPoi_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCurrentPoi_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCurrentPoi_Response_type_support_symbol_names_t _GetCurrentPoi_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)),
  }
};

typedef struct _GetCurrentPoi_Response_type_support_data_t
{
  void * data[2];
} _GetCurrentPoi_Response_type_support_data_t;

static _GetCurrentPoi_Response_type_support_data_t _GetCurrentPoi_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCurrentPoi_Response_message_typesupport_map = {
  2,
  "scheduler_interfaces_dummy",
  &_GetCurrentPoi_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCurrentPoi_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCurrentPoi_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCurrentPoi_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCurrentPoi_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace scheduler_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)() {
  return &::scheduler_interfaces_dummy::srv::rosidl_typesupport_c::GetCurrentPoi_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__type_support.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"
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

namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetCurrentPoi_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCurrentPoi_Event_type_support_ids_t;

static const _GetCurrentPoi_Event_type_support_ids_t _GetCurrentPoi_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCurrentPoi_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCurrentPoi_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCurrentPoi_Event_type_support_symbol_names_t _GetCurrentPoi_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Event)),
  }
};

typedef struct _GetCurrentPoi_Event_type_support_data_t
{
  void * data[2];
} _GetCurrentPoi_Event_type_support_data_t;

static _GetCurrentPoi_Event_type_support_data_t _GetCurrentPoi_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCurrentPoi_Event_message_typesupport_map = {
  2,
  "scheduler_interfaces_dummy",
  &_GetCurrentPoi_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetCurrentPoi_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetCurrentPoi_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCurrentPoi_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCurrentPoi_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace scheduler_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Event)() {
  return &::scheduler_interfaces_dummy::srv::rosidl_typesupport_c::GetCurrentPoi_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetCurrentPoi_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetCurrentPoi_type_support_ids_t;

static const _GetCurrentPoi_type_support_ids_t _GetCurrentPoi_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetCurrentPoi_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetCurrentPoi_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCurrentPoi_type_support_symbol_names_t _GetCurrentPoi_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scheduler_interfaces_dummy, srv, GetCurrentPoi)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi)),
  }
};

typedef struct _GetCurrentPoi_type_support_data_t
{
  void * data[2];
} _GetCurrentPoi_type_support_data_t;

static _GetCurrentPoi_type_support_data_t _GetCurrentPoi_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCurrentPoi_service_typesupport_map = {
  2,
  "scheduler_interfaces_dummy",
  &_GetCurrentPoi_service_typesupport_ids.typesupport_identifier[0],
  &_GetCurrentPoi_service_typesupport_symbol_names.symbol_name[0],
  &_GetCurrentPoi_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCurrentPoi_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCurrentPoi_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetCurrentPoi_Request_message_type_support_handle,
  &GetCurrentPoi_Response_message_type_support_handle,
  &GetCurrentPoi_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    scheduler_interfaces_dummy,
    srv,
    GetCurrentPoi
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    scheduler_interfaces_dummy,
    srv,
    GetCurrentPoi
  ),
  &scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace scheduler_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, scheduler_interfaces_dummy, srv, GetCurrentPoi)() {
  return &::scheduler_interfaces_dummy::srv::rosidl_typesupport_c::GetCurrentPoi_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
