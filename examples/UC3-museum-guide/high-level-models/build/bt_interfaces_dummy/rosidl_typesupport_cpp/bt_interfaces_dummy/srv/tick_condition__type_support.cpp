// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from bt_interfaces_dummy:srv/TickCondition.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bt_interfaces_dummy/srv/detail/tick_condition__functions.h"
#include "bt_interfaces_dummy/srv/detail/tick_condition__struct.hpp"
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

typedef struct _TickCondition_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickCondition_Request_type_support_ids_t;

static const _TickCondition_Request_type_support_ids_t _TickCondition_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickCondition_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickCondition_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickCondition_Request_type_support_symbol_names_t _TickCondition_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickCondition_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickCondition_Request)),
  }
};

typedef struct _TickCondition_Request_type_support_data_t
{
  void * data[2];
} _TickCondition_Request_type_support_data_t;

static _TickCondition_Request_type_support_data_t _TickCondition_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickCondition_Request_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickCondition_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TickCondition_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TickCondition_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TickCondition_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickCondition_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickCondition_Request__get_type_hash,
  &bt_interfaces_dummy__srv__TickCondition_Request__get_type_description,
  &bt_interfaces_dummy__srv__TickCondition_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Request>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickCondition_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, TickCondition_Request)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Request>();
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
// #include "bt_interfaces_dummy/srv/detail/tick_condition__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_condition__struct.hpp"
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

typedef struct _TickCondition_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickCondition_Response_type_support_ids_t;

static const _TickCondition_Response_type_support_ids_t _TickCondition_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickCondition_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickCondition_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickCondition_Response_type_support_symbol_names_t _TickCondition_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickCondition_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickCondition_Response)),
  }
};

typedef struct _TickCondition_Response_type_support_data_t
{
  void * data[2];
} _TickCondition_Response_type_support_data_t;

static _TickCondition_Response_type_support_data_t _TickCondition_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickCondition_Response_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickCondition_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TickCondition_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TickCondition_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TickCondition_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickCondition_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickCondition_Response__get_type_hash,
  &bt_interfaces_dummy__srv__TickCondition_Response__get_type_description,
  &bt_interfaces_dummy__srv__TickCondition_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Response>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickCondition_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, TickCondition_Response)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Response>();
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
// #include "bt_interfaces_dummy/srv/detail/tick_condition__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_condition__struct.hpp"
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

typedef struct _TickCondition_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickCondition_Event_type_support_ids_t;

static const _TickCondition_Event_type_support_ids_t _TickCondition_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickCondition_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickCondition_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickCondition_Event_type_support_symbol_names_t _TickCondition_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickCondition_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickCondition_Event)),
  }
};

typedef struct _TickCondition_Event_type_support_data_t
{
  void * data[2];
} _TickCondition_Event_type_support_data_t;

static _TickCondition_Event_type_support_data_t _TickCondition_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickCondition_Event_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickCondition_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TickCondition_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TickCondition_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TickCondition_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickCondition_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickCondition_Event__get_type_hash,
  &bt_interfaces_dummy__srv__TickCondition_Event__get_type_description,
  &bt_interfaces_dummy__srv__TickCondition_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Event>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickCondition_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, bt_interfaces_dummy, srv, TickCondition_Event)() {
  return get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Event>();
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
// #include "bt_interfaces_dummy/srv/detail/tick_condition__struct.hpp"
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

typedef struct _TickCondition_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TickCondition_type_support_ids_t;

static const _TickCondition_type_support_ids_t _TickCondition_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TickCondition_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TickCondition_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TickCondition_type_support_symbol_names_t _TickCondition_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bt_interfaces_dummy, srv, TickCondition)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bt_interfaces_dummy, srv, TickCondition)),
  }
};

typedef struct _TickCondition_type_support_data_t
{
  void * data[2];
} _TickCondition_type_support_data_t;

static _TickCondition_type_support_data_t _TickCondition_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TickCondition_service_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_TickCondition_service_typesupport_ids.typesupport_identifier[0],
  &_TickCondition_service_typesupport_symbol_names.symbol_name[0],
  &_TickCondition_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TickCondition_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TickCondition_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<bt_interfaces_dummy::srv::TickCondition_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bt_interfaces_dummy::srv::TickCondition>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bt_interfaces_dummy::srv::TickCondition>,
  &bt_interfaces_dummy__srv__TickCondition__get_type_hash,
  &bt_interfaces_dummy__srv__TickCondition__get_type_description,
  &bt_interfaces_dummy__srv__TickCondition__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bt_interfaces_dummy::srv::TickCondition>()
{
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_cpp::TickCondition_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
