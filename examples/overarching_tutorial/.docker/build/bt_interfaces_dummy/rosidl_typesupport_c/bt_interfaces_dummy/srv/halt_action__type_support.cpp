// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from bt_interfaces_dummy:srv/HaltAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bt_interfaces_dummy/srv/detail/halt_action__struct.h"
#include "bt_interfaces_dummy/srv/detail/halt_action__type_support.h"
#include "bt_interfaces_dummy/srv/detail/halt_action__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _HaltAction_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HaltAction_Request_type_support_ids_t;

static const _HaltAction_Request_type_support_ids_t _HaltAction_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HaltAction_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HaltAction_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HaltAction_Request_type_support_symbol_names_t _HaltAction_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_interfaces_dummy, srv, HaltAction_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, HaltAction_Request)),
  }
};

typedef struct _HaltAction_Request_type_support_data_t
{
  void * data[2];
} _HaltAction_Request_type_support_data_t;

static _HaltAction_Request_type_support_data_t _HaltAction_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HaltAction_Request_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_HaltAction_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HaltAction_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HaltAction_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HaltAction_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HaltAction_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__HaltAction_Request__get_type_hash,
  &bt_interfaces_dummy__srv__HaltAction_Request__get_type_description,
  &bt_interfaces_dummy__srv__HaltAction_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bt_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_interfaces_dummy, srv, HaltAction_Request)() {
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_c::HaltAction_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__struct.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__type_support.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__functions.h"
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

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _HaltAction_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HaltAction_Response_type_support_ids_t;

static const _HaltAction_Response_type_support_ids_t _HaltAction_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HaltAction_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HaltAction_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HaltAction_Response_type_support_symbol_names_t _HaltAction_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_interfaces_dummy, srv, HaltAction_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, HaltAction_Response)),
  }
};

typedef struct _HaltAction_Response_type_support_data_t
{
  void * data[2];
} _HaltAction_Response_type_support_data_t;

static _HaltAction_Response_type_support_data_t _HaltAction_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HaltAction_Response_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_HaltAction_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HaltAction_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HaltAction_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HaltAction_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HaltAction_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__HaltAction_Response__get_type_hash,
  &bt_interfaces_dummy__srv__HaltAction_Response__get_type_description,
  &bt_interfaces_dummy__srv__HaltAction_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bt_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_interfaces_dummy, srv, HaltAction_Response)() {
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_c::HaltAction_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__struct.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__type_support.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__functions.h"
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

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _HaltAction_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HaltAction_Event_type_support_ids_t;

static const _HaltAction_Event_type_support_ids_t _HaltAction_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HaltAction_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HaltAction_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HaltAction_Event_type_support_symbol_names_t _HaltAction_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_interfaces_dummy, srv, HaltAction_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, HaltAction_Event)),
  }
};

typedef struct _HaltAction_Event_type_support_data_t
{
  void * data[2];
} _HaltAction_Event_type_support_data_t;

static _HaltAction_Event_type_support_data_t _HaltAction_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HaltAction_Event_message_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_HaltAction_Event_message_typesupport_ids.typesupport_identifier[0],
  &_HaltAction_Event_message_typesupport_symbol_names.symbol_name[0],
  &_HaltAction_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HaltAction_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HaltAction_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__HaltAction_Event__get_type_hash,
  &bt_interfaces_dummy__srv__HaltAction_Event__get_type_description,
  &bt_interfaces_dummy__srv__HaltAction_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bt_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_interfaces_dummy, srv, HaltAction_Event)() {
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_c::HaltAction_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/halt_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace bt_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _HaltAction_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HaltAction_type_support_ids_t;

static const _HaltAction_type_support_ids_t _HaltAction_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _HaltAction_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HaltAction_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HaltAction_type_support_symbol_names_t _HaltAction_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_interfaces_dummy, srv, HaltAction)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, HaltAction)),
  }
};

typedef struct _HaltAction_type_support_data_t
{
  void * data[2];
} _HaltAction_type_support_data_t;

static _HaltAction_type_support_data_t _HaltAction_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HaltAction_service_typesupport_map = {
  2,
  "bt_interfaces_dummy",
  &_HaltAction_service_typesupport_ids.typesupport_identifier[0],
  &_HaltAction_service_typesupport_symbol_names.symbol_name[0],
  &_HaltAction_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HaltAction_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HaltAction_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &HaltAction_Request_message_type_support_handle,
  &HaltAction_Response_message_type_support_handle,
  &HaltAction_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bt_interfaces_dummy,
    srv,
    HaltAction
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bt_interfaces_dummy,
    srv,
    HaltAction
  ),
  &bt_interfaces_dummy__srv__HaltAction__get_type_hash,
  &bt_interfaces_dummy__srv__HaltAction__get_type_description,
  &bt_interfaces_dummy__srv__HaltAction__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace bt_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, bt_interfaces_dummy, srv, HaltAction)() {
  return &::bt_interfaces_dummy::srv::rosidl_typesupport_c::HaltAction_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
