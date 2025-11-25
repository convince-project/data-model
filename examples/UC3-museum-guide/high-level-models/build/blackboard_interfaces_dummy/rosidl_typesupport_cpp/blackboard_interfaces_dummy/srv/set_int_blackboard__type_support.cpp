// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from blackboard_interfaces_dummy:srv/SetIntBlackboard.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.hpp"
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

typedef struct _SetIntBlackboard_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_Request_type_support_ids_t;

static const _SetIntBlackboard_Request_type_support_ids_t _SetIntBlackboard_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_Request_type_support_symbol_names_t _SetIntBlackboard_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)),
  }
};

typedef struct _SetIntBlackboard_Request_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_Request_type_support_data_t;

static _SetIntBlackboard_Request_type_support_data_t _SetIntBlackboard_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_Request_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIntBlackboard_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Request>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::SetIntBlackboard_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)() {
  return get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Request>();
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
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.hpp"
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

typedef struct _SetIntBlackboard_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_Response_type_support_ids_t;

static const _SetIntBlackboard_Response_type_support_ids_t _SetIntBlackboard_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_Response_type_support_symbol_names_t _SetIntBlackboard_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)),
  }
};

typedef struct _SetIntBlackboard_Response_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_Response_type_support_data_t;

static _SetIntBlackboard_Response_type_support_data_t _SetIntBlackboard_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_Response_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIntBlackboard_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Response>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::SetIntBlackboard_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)() {
  return get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Response>();
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
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.hpp"
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

typedef struct _SetIntBlackboard_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_Event_type_support_ids_t;

static const _SetIntBlackboard_Event_type_support_ids_t _SetIntBlackboard_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_Event_type_support_symbol_names_t _SetIntBlackboard_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)),
  }
};

typedef struct _SetIntBlackboard_Event_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_Event_type_support_data_t;

static _SetIntBlackboard_Event_type_support_data_t _SetIntBlackboard_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_Event_message_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIntBlackboard_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Event>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::SetIntBlackboard_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)() {
  return get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Event>();
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
// #include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.hpp"
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

typedef struct _SetIntBlackboard_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIntBlackboard_type_support_ids_t;

static const _SetIntBlackboard_type_support_ids_t _SetIntBlackboard_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetIntBlackboard_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIntBlackboard_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIntBlackboard_type_support_symbol_names_t _SetIntBlackboard_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard)),
  }
};

typedef struct _SetIntBlackboard_type_support_data_t
{
  void * data[2];
} _SetIntBlackboard_type_support_data_t;

static _SetIntBlackboard_type_support_data_t _SetIntBlackboard_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIntBlackboard_service_typesupport_map = {
  2,
  "blackboard_interfaces_dummy",
  &_SetIntBlackboard_service_typesupport_ids.typesupport_identifier[0],
  &_SetIntBlackboard_service_typesupport_symbol_names.symbol_name[0],
  &_SetIntBlackboard_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetIntBlackboard_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIntBlackboard_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<blackboard_interfaces_dummy::srv::SetIntBlackboard>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<blackboard_interfaces_dummy::srv::SetIntBlackboard>,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard>()
{
  return &::blackboard_interfaces_dummy::srv::rosidl_typesupport_cpp::SetIntBlackboard_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
