// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from bt_interfaces_dummy:srv/ReloadTree.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bt_interfaces_dummy/srv/detail/reload_tree__functions.h"
#include "bt_interfaces_dummy/srv/detail/reload_tree__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReloadTree_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReloadTree_Request_type_support_ids_t;

static const _ReloadTree_Request_type_support_ids_t _ReloadTree_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReloadTree_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReloadTree_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReloadTree_Request_type_support_symbol_names_t _ReloadTree_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, ReloadTree_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, ReloadTree_Request)),
  }
};

typedef struct _ReloadTree_Request_type_support_data_t
{
  void * data[2];
} _ReloadTree_Request_type_support_data_t;

static _ReloadTree_Request_type_support_data_t _ReloadTree_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReloadTree_Request_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_ReloadTree_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReloadTree_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReloadTree_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReloadTree_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReloadTree_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__ReloadTree_Request__get_type_hash,
  &bt_interfaces_dummy__srv__ReloadTree_Request__get_type_description,
  &bt_interfaces_dummy__srv__ReloadTree_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Request>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::ReloadTree_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, ReloadTree_Request)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Request>();
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
// #include "bt_interfaces_dummy/srv/detail/reload_tree__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/reload_tree__struct.hpp"
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

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReloadTree_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReloadTree_Response_type_support_ids_t;

static const _ReloadTree_Response_type_support_ids_t _ReloadTree_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReloadTree_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReloadTree_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReloadTree_Response_type_support_symbol_names_t _ReloadTree_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, ReloadTree_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, ReloadTree_Response)),
  }
};

typedef struct _ReloadTree_Response_type_support_data_t
{
  void * data[2];
} _ReloadTree_Response_type_support_data_t;

static _ReloadTree_Response_type_support_data_t _ReloadTree_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReloadTree_Response_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_ReloadTree_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReloadTree_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReloadTree_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReloadTree_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReloadTree_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__ReloadTree_Response__get_type_hash,
  &bt_interfaces_dummy__srv__ReloadTree_Response__get_type_description,
  &bt_interfaces_dummy__srv__ReloadTree_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Response>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::ReloadTree_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, ReloadTree_Response)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Response>();
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
// #include "bt_interfaces_dummy/srv/detail/reload_tree__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/reload_tree__struct.hpp"
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

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReloadTree_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReloadTree_Event_type_support_ids_t;

static const _ReloadTree_Event_type_support_ids_t _ReloadTree_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReloadTree_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReloadTree_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReloadTree_Event_type_support_symbol_names_t _ReloadTree_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, ReloadTree_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, ReloadTree_Event)),
  }
};

typedef struct _ReloadTree_Event_type_support_data_t
{
  void * data[2];
} _ReloadTree_Event_type_support_data_t;

static _ReloadTree_Event_type_support_data_t _ReloadTree_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReloadTree_Event_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_ReloadTree_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReloadTree_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReloadTree_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReloadTree_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReloadTree_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__ReloadTree_Event__get_type_hash,
  &bt_interfaces_dummy__srv__ReloadTree_Event__get_type_description,
  &bt_interfaces_dummy__srv__ReloadTree_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Event>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::ReloadTree_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, ReloadTree_Event)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Event>();
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
// #include "bt_interfaces_dummy/srv/detail/reload_tree__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReloadTree_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReloadTree_type_support_ids_t;

static const _ReloadTree_type_support_ids_t _ReloadTree_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReloadTree_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReloadTree_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReloadTree_type_support_symbol_names_t _ReloadTree_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, ReloadTree)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, ReloadTree)),
  }
};

typedef struct _ReloadTree_type_support_data_t
{
  void * data[2];
} _ReloadTree_type_support_data_t;

static _ReloadTree_type_support_data_t _ReloadTree_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReloadTree_service_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_ReloadTree_service_typesupport_ids.typesupport_identifier[0],
  &_ReloadTree_service_typesupport_symbol_names.symbol_name[0],
  &_ReloadTree_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReloadTree_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReloadTree_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::ReloadTree_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bt_interfaces_dummy::srv::ReloadTree>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bt_interfaces_dummy::srv::ReloadTree>,
  &bt_interfaces_dummy__srv__ReloadTree__get_type_hash,
  &bt_interfaces_dummy__srv__ReloadTree__get_type_description,
  &bt_interfaces_dummy__srv__ReloadTree__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bt_interfaces_dummy::srv::ReloadTree>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::ReloadTree_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, ReloadTree)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<bt_interfaces_dummy::srv::ReloadTree>();
}

#ifdef __cplusplus
}
#endif
