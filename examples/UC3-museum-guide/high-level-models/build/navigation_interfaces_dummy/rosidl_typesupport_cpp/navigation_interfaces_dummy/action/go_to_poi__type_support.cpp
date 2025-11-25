// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from navigation_interfaces_dummy:action/GoToPoi.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
#include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_Goal_type_support_ids_t;

static const _GoToPoi_Goal_type_support_ids_t _GoToPoi_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_Goal__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_Goal__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_Goal>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_Goal)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_Goal>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_Result_type_support_ids_t;

static const _GoToPoi_Result_type_support_ids_t _GoToPoi_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_Result__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_Result__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_Result>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_Result)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_Result>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_Feedback_type_support_ids_t;

static const _GoToPoi_Feedback_type_support_ids_t _GoToPoi_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_Feedback__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_Feedback__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_Feedback>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_Feedback)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_Feedback>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_Request_type_support_ids_t;

static const _GoToPoi_SendGoal_Request_type_support_ids_t _GoToPoi_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Request__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Request__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Request)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_Response_type_support_ids_t;

static const _GoToPoi_SendGoal_Response_type_support_ids_t _GoToPoi_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Response__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Response__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Response)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_Event_type_support_ids_t;

static const _GoToPoi_SendGoal_Event_type_support_ids_t _GoToPoi_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Event__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Event__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal_Event)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_SendGoal_type_support_ids_t;

static const _GoToPoi_SendGoal_type_support_ids_t _GoToPoi_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<navigation_interfaces_dummy::action::GoToPoi_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<navigation_interfaces_dummy::action::GoToPoi_SendGoal>,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_SendGoal>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_Request_type_support_ids_t;

static const _GoToPoi_GetResult_Request_type_support_ids_t _GoToPoi_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Request__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Request__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Request>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Request)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Request>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_Response_type_support_ids_t;

static const _GoToPoi_GetResult_Response_type_support_ids_t _GoToPoi_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Response__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Response__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Response>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Response)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Response>();
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
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_Event_type_support_ids_t;

static const _GoToPoi_GetResult_Event_type_support_ids_t _GoToPoi_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Event__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Event__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Event>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult_Event)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_GetResult_type_support_ids_t;

static const _GoToPoi_GetResult_type_support_ids_t _GoToPoi_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<navigation_interfaces_dummy::action::GoToPoi_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<navigation_interfaces_dummy::action::GoToPoi_GetResult>,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_GetResult>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__functions.h"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
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

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GoToPoi_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GoToPoi_FeedbackMessage_type_support_ids_t;

static const _GoToPoi_FeedbackMessage_type_support_ids_t _GoToPoi_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GoToPoi_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &navigation_interfaces_dummy__action__GoToPoi_FeedbackMessage__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi_FeedbackMessage__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage>()
{
  return &::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, navigation_interfaces_dummy, action, GoToPoi_FeedbackMessage)() {
  return get_message_type_support_handle<navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace navigation_interfaces_dummy
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GoToPoi_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &navigation_interfaces_dummy__action__GoToPoi__get_type_hash,
  &navigation_interfaces_dummy__action__GoToPoi__get_type_description,
  &navigation_interfaces_dummy__action__GoToPoi__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace navigation_interfaces_dummy

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<navigation_interfaces_dummy::action::GoToPoi>()
{
  using ::navigation_interfaces_dummy::action::rosidl_typesupport_cpp::GoToPoi_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GoToPoi_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::navigation_interfaces_dummy::action::GoToPoi::Impl::SendGoalService>();
  GoToPoi_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::navigation_interfaces_dummy::action::GoToPoi::Impl::GetResultService>();
  GoToPoi_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::navigation_interfaces_dummy::action::GoToPoi::Impl::CancelGoalService>();
  GoToPoi_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::navigation_interfaces_dummy::action::GoToPoi::Impl::FeedbackMessage>();
  GoToPoi_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::navigation_interfaces_dummy::action::GoToPoi::Impl::GoalStatusMessage>();
  return &GoToPoi_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
