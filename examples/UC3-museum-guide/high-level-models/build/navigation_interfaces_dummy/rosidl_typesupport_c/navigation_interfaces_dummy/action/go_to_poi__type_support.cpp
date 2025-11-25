// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from navigation_interfaces_dummy:action/GoToPoi.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
#include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
#include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_Goal_type_support_ids_t;

static const _GoToPoi_Goal_type_support_ids_t _GoToPoi_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_Goal_type_support_symbol_names_t _GoToPoi_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_Goal)),
  }
};

typedef struct _GoToPoi_Goal_type_support_data_t
{
  void * data[2];
} _GoToPoi_Goal_type_support_data_t;

static _GoToPoi_Goal_type_support_data_t _GoToPoi_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_Goal_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_Goal__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_Goal__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_Goal)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_Result_type_support_ids_t;

static const _GoToPoi_Result_type_support_ids_t _GoToPoi_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_Result_type_support_symbol_names_t _GoToPoi_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_Result)),
  }
};

typedef struct _GoToPoi_Result_type_support_data_t
{
  void * data[2];
} _GoToPoi_Result_type_support_data_t;

static _GoToPoi_Result_type_support_data_t _GoToPoi_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_Result_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_Result__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_Result__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_Result)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_Feedback_type_support_ids_t;

static const _GoToPoi_Feedback_type_support_ids_t _GoToPoi_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_Feedback_type_support_symbol_names_t _GoToPoi_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_Feedback)),
  }
};

typedef struct _GoToPoi_Feedback_type_support_data_t
{
  void * data[2];
} _GoToPoi_Feedback_type_support_data_t;

static _GoToPoi_Feedback_type_support_data_t _GoToPoi_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_Feedback_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_Feedback__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_Feedback__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_Feedback)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_Request_type_support_ids_t;

static const _GoToPoi_SendGoal_Request_type_support_ids_t _GoToPoi_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_SendGoal_Request_type_support_symbol_names_t _GoToPoi_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Request)),
  }
};

typedef struct _GoToPoi_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GoToPoi_SendGoal_Request_type_support_data_t;

static _GoToPoi_SendGoal_Request_type_support_data_t _GoToPoi_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_SendGoal_Request_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Request__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Request__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Request)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_Response_type_support_ids_t;

static const _GoToPoi_SendGoal_Response_type_support_ids_t _GoToPoi_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_SendGoal_Response_type_support_symbol_names_t _GoToPoi_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Response)),
  }
};

typedef struct _GoToPoi_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GoToPoi_SendGoal_Response_type_support_data_t;

static _GoToPoi_SendGoal_Response_type_support_data_t _GoToPoi_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_SendGoal_Response_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Response__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Response__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Response)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_Event_type_support_ids_t;

static const _GoToPoi_SendGoal_Event_type_support_ids_t _GoToPoi_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_SendGoal_Event_type_support_symbol_names_t _GoToPoi_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Event)),
  }
};

typedef struct _GoToPoi_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _GoToPoi_SendGoal_Event_type_support_data_t;

static _GoToPoi_SendGoal_Event_type_support_data_t _GoToPoi_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_SendGoal_Event_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Event__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Event__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Event)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _GoToPoi_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_type_support_ids_t;

static const _GoToPoi_SendGoal_type_support_ids_t _GoToPoi_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_SendGoal_type_support_symbol_names_t _GoToPoi_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal)),
  }
};

typedef struct _GoToPoi_SendGoal_type_support_data_t
{
  void * data[2];
} _GoToPoi_SendGoal_type_support_data_t;

static _GoToPoi_SendGoal_type_support_data_t _GoToPoi_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_SendGoal_service_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoToPoi_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GoToPoi_SendGoal_Request_message_type_support_handle,
  &GoToPoi_SendGoal_Response_message_type_support_handle,
  &GoToPoi_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces_dummy,
    action,
    GoToPoi_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces_dummy,
    action,
    GoToPoi_SendGoal
  ),
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_Request_type_support_ids_t;

static const _GoToPoi_GetResult_Request_type_support_ids_t _GoToPoi_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_GetResult_Request_type_support_symbol_names_t _GoToPoi_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Request)),
  }
};

typedef struct _GoToPoi_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GoToPoi_GetResult_Request_type_support_data_t;

static _GoToPoi_GetResult_Request_type_support_data_t _GoToPoi_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_GetResult_Request_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Request__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Request__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Request)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_Response_type_support_ids_t;

static const _GoToPoi_GetResult_Response_type_support_ids_t _GoToPoi_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_GetResult_Response_type_support_symbol_names_t _GoToPoi_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Response)),
  }
};

typedef struct _GoToPoi_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GoToPoi_GetResult_Response_type_support_data_t;

static _GoToPoi_GetResult_Response_type_support_data_t _GoToPoi_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_GetResult_Response_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Response__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Response__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Response)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_Event_type_support_ids_t;

static const _GoToPoi_GetResult_Event_type_support_ids_t _GoToPoi_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_GetResult_Event_type_support_symbol_names_t _GoToPoi_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Event)),
  }
};

typedef struct _GoToPoi_GetResult_Event_type_support_data_t
{
  void * data[2];
} _GoToPoi_GetResult_Event_type_support_data_t;

static _GoToPoi_GetResult_Event_type_support_data_t _GoToPoi_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_GetResult_Event_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Event__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Event__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_GetResult_Event)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _GoToPoi_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_type_support_ids_t;

static const _GoToPoi_GetResult_type_support_ids_t _GoToPoi_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_GetResult_type_support_symbol_names_t _GoToPoi_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_GetResult)),
  }
};

typedef struct _GoToPoi_GetResult_type_support_data_t
{
  void * data[2];
} _GoToPoi_GetResult_type_support_data_t;

static _GoToPoi_GetResult_type_support_data_t _GoToPoi_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_GetResult_service_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GoToPoi_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GoToPoi_GetResult_Request_message_type_support_handle,
  &GoToPoi_GetResult_Response_message_type_support_handle,
  &GoToPoi_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces_dummy,
    action,
    GoToPoi_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navigation_interfaces_dummy,
    action,
    GoToPoi_GetResult
  ),
  &navigation_interfaces_dummy__action__GoToPoi_GetResult__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_GetResult)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _GoToPoi_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_FeedbackMessage_type_support_ids_t;

static const _GoToPoi_FeedbackMessage_type_support_ids_t _GoToPoi_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GoToPoi_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GoToPoi_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GoToPoi_FeedbackMessage_type_support_symbol_names_t _GoToPoi_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)),
  }
};

typedef struct _GoToPoi_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GoToPoi_FeedbackMessage_type_support_data_t;

static _GoToPoi_FeedbackMessage_type_support_data_t _GoToPoi_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GoToPoi_FeedbackMessage_message_typesupport_map = {
  2,
  "navigation_interfaces_dummy",
  &_GoToPoi_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GoToPoi_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GoToPoi_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GoToPoi_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_FeedbackMessage__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_FeedbackMessage__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigation_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)() {
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_c::GoToPoi_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "navigation_interfaces_dummy/action/go_to_poi.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__type_support.h"

static rosidl_action_type_support_t _navigation_interfaces_dummy__action__GoToPoi__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &navigation_interfaces_dummy__action__GoToPoi__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi)()
{
  // Thread-safe by always writing the same values to the static struct
  _navigation_interfaces_dummy__action__GoToPoi__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_SendGoal)();
  _navigation_interfaces_dummy__action__GoToPoi__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_GetResult)();
  _navigation_interfaces_dummy__action__GoToPoi__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _navigation_interfaces_dummy__action__GoToPoi__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)();
  _navigation_interfaces_dummy__action__GoToPoi__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_navigation_interfaces_dummy__action__GoToPoi__typesupport_c;
}

#ifdef __cplusplus
}
#endif
