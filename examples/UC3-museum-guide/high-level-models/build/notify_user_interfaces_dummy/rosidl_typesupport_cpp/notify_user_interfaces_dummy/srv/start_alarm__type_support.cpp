// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from notify_user_interfaces_dummy:srv/StartAlarm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "notify_user_interfaces_dummy/srv/detail/start_alarm__functions.h"
#include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartAlarm_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_Request_type_support_ids_t;

static const _StartAlarm_Request_type_support_ids_t _StartAlarm_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StartAlarm_Request__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm_Request__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Request>()
{
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_cpp::StartAlarm_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Request)() {
  return get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__functions.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartAlarm_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_Response_type_support_ids_t;

static const _StartAlarm_Response_type_support_ids_t _StartAlarm_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StartAlarm_Response__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm_Response__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Response>()
{
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_cpp::StartAlarm_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Response)() {
  return get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__functions.h"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartAlarm_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_Event_type_support_ids_t;

static const _StartAlarm_Event_type_support_ids_t _StartAlarm_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &notify_user_interfaces_dummy__srv__StartAlarm_Event__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm_Event__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Event>()
{
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_cpp::StartAlarm_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, notify_user_interfaces_dummy, srv, StartAlarm_Event)() {
  return get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartAlarm_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartAlarm_type_support_ids_t;

static const _StartAlarm_type_support_ids_t _StartAlarm_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, notify_user_interfaces_dummy, srv, StartAlarm)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, notify_user_interfaces_dummy, srv, StartAlarm)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartAlarm_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<notify_user_interfaces_dummy::srv::StartAlarm>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<notify_user_interfaces_dummy::srv::StartAlarm>,
  &notify_user_interfaces_dummy__srv__StartAlarm__get_type_hash,
  &notify_user_interfaces_dummy__srv__StartAlarm__get_type_description,
  &notify_user_interfaces_dummy__srv__StartAlarm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<notify_user_interfaces_dummy::srv::StartAlarm>()
{
  return &::notify_user_interfaces_dummy::srv::rosidl_typesupport_cpp::StartAlarm_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
