// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetIntBlackboard_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_Request_type_support_ids_t;

static const _GetIntBlackboard_Request_type_support_ids_t _GetIntBlackboard_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::GetIntBlackboard_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)() {
  return get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>();
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
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.hpp"
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

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetIntBlackboard_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_Response_type_support_ids_t;

static const _GetIntBlackboard_Response_type_support_ids_t _GetIntBlackboard_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::GetIntBlackboard_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)() {
  return get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>();
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
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.hpp"
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

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetIntBlackboard_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_Event_type_support_ids_t;

static const _GetIntBlackboard_Event_type_support_ids_t _GetIntBlackboard_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::GetIntBlackboard_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)() {
  return get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>();
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
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetIntBlackboard_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetIntBlackboard_type_support_ids_t;

static const _GetIntBlackboard_type_support_ids_t _GetIntBlackboard_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, GetIntBlackboard)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetIntBlackboard_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<blackboard_interfaces_dummy::srv::GetIntBlackboard>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<blackboard_interfaces_dummy::srv::GetIntBlackboard>,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<blackboard_interfaces_dummy::srv::GetIntBlackboard>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::GetIntBlackboard_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
