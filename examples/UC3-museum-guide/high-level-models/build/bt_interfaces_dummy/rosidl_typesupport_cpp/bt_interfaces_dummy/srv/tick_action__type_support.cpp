// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from bt_interfaces_dummy:srv/TickAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"
#include "bt_interfaces_dummy/srv/detail/tick_action__struct.hpp"
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

typedef struct _TickAction_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickAction_Request_type_support_ids_t;

static const _TickAction_Request_type_support_ids_t _TickAction_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickAction_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickAction_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickAction_Request_type_support_symbol_names_t _TickAction_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickAction_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickAction_Request)),
  }
};

typedef struct _TickAction_Request_type_support_data_t
{
  void * data[2];
} _TickAction_Request_type_support_data_t;

static _TickAction_Request_type_support_data_t _TickAction_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickAction_Request_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickAction_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TickAction_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TickAction_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TickAction_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickAction_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Request__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction_Request__get_type_description,
  &bt_interfaces_dummy__srv__TickAction_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Request>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickAction_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, TickAction_Request)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Request>();
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
// #include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__struct.hpp"
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

typedef struct _TickAction_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickAction_Response_type_support_ids_t;

static const _TickAction_Response_type_support_ids_t _TickAction_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickAction_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickAction_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickAction_Response_type_support_symbol_names_t _TickAction_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickAction_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickAction_Response)),
  }
};

typedef struct _TickAction_Response_type_support_data_t
{
  void * data[2];
} _TickAction_Response_type_support_data_t;

static _TickAction_Response_type_support_data_t _TickAction_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickAction_Response_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickAction_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TickAction_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TickAction_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TickAction_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickAction_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Response__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction_Response__get_type_description,
  &bt_interfaces_dummy__srv__TickAction_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Response>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickAction_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, TickAction_Response)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Response>();
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
// #include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__struct.hpp"
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

typedef struct _TickAction_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickAction_Event_type_support_ids_t;

static const _TickAction_Event_type_support_ids_t _TickAction_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickAction_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickAction_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickAction_Event_type_support_symbol_names_t _TickAction_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickAction_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickAction_Event)),
  }
};

typedef struct _TickAction_Event_type_support_data_t
{
  void * data[2];
} _TickAction_Event_type_support_data_t;

static _TickAction_Event_type_support_data_t _TickAction_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickAction_Event_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickAction_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TickAction_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TickAction_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TickAction_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickAction_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Event__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction_Event__get_type_description,
  &bt_interfaces_dummy__srv__TickAction_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Event>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickAction_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, TickAction_Event)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Event>();
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
// #include "bt_interfaces_dummy/srv/detail/tick_action__struct.hpp"
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

typedef struct _TickAction_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickAction_type_support_ids_t;

static const _TickAction_type_support_ids_t _TickAction_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickAction_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickAction_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickAction_type_support_symbol_names_t _TickAction_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickAction)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickAction)),
  }
};

typedef struct _TickAction_type_support_data_t
{
  void * data[2];
} _TickAction_type_support_data_t;

static _TickAction_type_support_data_t _TickAction_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickAction_service_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickAction_service_typesupport_ids.typesupport_identifier[0],
  &_TickAction_service_typesupport_symbol_names.symbol_name[0],
  &_TickAction_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TickAction_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickAction_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::TickAction_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bt_interfaces_dummy::srv::TickAction>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bt_interfaces_dummy::srv::TickAction>,
  &bt_interfaces_dummy__srv__TickAction__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction__get_type_description,
  &bt_interfaces_dummy__srv__TickAction__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bt_interfaces_dummy::srv::TickAction>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickAction_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
