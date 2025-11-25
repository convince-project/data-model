// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__type_support.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
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

typedef struct _GetIntBlackboard_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_Request_type_support_ids_t;

static const _GetIntBlackboard_Request_type_support_ids_t _GetIntBlackboard_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetIntBlackboard_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetIntBlackboard_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetIntBlackboard_Request_type_support_symbol_names_t _GetIntBlackboard_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)),
  }
};

typedef struct _GetIntBlackboard_Request_type_support_data_t
{
  void * data[2];
} _GetIntBlackboard_Request_type_support_data_t;

static _GetIntBlackboard_Request_type_support_data_t _GetIntBlackboard_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetIntBlackboard_Request_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_GetIntBlackboard_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetIntBlackboard_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetIntBlackboard_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetIntBlackboard_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::GetIntBlackboard_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__type_support.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
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

typedef struct _GetIntBlackboard_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_Response_type_support_ids_t;

static const _GetIntBlackboard_Response_type_support_ids_t _GetIntBlackboard_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetIntBlackboard_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetIntBlackboard_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetIntBlackboard_Response_type_support_symbol_names_t _GetIntBlackboard_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)),
  }
};

typedef struct _GetIntBlackboard_Response_type_support_data_t
{
  void * data[2];
} _GetIntBlackboard_Response_type_support_data_t;

static _GetIntBlackboard_Response_type_support_data_t _GetIntBlackboard_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetIntBlackboard_Response_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_GetIntBlackboard_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetIntBlackboard_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetIntBlackboard_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetIntBlackboard_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::GetIntBlackboard_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__type_support.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
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

typedef struct _GetIntBlackboard_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_Event_type_support_ids_t;

static const _GetIntBlackboard_Event_type_support_ids_t _GetIntBlackboard_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetIntBlackboard_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetIntBlackboard_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetIntBlackboard_Event_type_support_symbol_names_t _GetIntBlackboard_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)),
  }
};

typedef struct _GetIntBlackboard_Event_type_support_data_t
{
  void * data[2];
} _GetIntBlackboard_Event_type_support_data_t;

static _GetIntBlackboard_Event_type_support_data_t _GetIntBlackboard_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetIntBlackboard_Event_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_GetIntBlackboard_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetIntBlackboard_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetIntBlackboard_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetIntBlackboard_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::GetIntBlackboard_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__type_support.h"
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
typedef struct _GetIntBlackboard_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_type_support_ids_t;

static const _GetIntBlackboard_type_support_ids_t _GetIntBlackboard_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetIntBlackboard_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetIntBlackboard_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetIntBlackboard_type_support_symbol_names_t _GetIntBlackboard_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blackboard_interfaces_dummy, srv, GetIntBlackboard)),
  }
};

typedef struct _GetIntBlackboard_type_support_data_t
{
  void * data[2];
} _GetIntBlackboard_type_support_data_t;

static _GetIntBlackboard_type_support_data_t _GetIntBlackboard_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetIntBlackboard_service_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_GetIntBlackboard_service_typesupport_ids.typesupport_identifier[0],
  &_GetIntBlackboard_service_typesupport_symbol_names.symbol_name[0],
  &_GetIntBlackboard_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetIntBlackboard_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetIntBlackboard_Request_message_type_support_handle,
  &GetIntBlackboard_Response_message_type_support_handle,
  &GetIntBlackboard_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    blackboard_interfaces_dummy,
    srv,
    GetIntBlackboard
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    blackboard_interfaces_dummy,
    srv,
    GetIntBlackboard
  ),
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, blackboard_interfaces_dummy, srv, GetIntBlackboard)() {
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_c::GetIntBlackboard_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
