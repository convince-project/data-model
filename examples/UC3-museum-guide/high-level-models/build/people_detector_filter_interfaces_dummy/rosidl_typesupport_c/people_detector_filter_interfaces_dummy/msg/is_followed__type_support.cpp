// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__struct.h"
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__type_support.h"
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace people_detector_filter_interfaces_dummy
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _IsFollowed_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _IsFollowed_type_support_ids_t;

static const _IsFollowed_type_support_ids_t _IsFollowed_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _IsFollowed_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _IsFollowed_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _IsFollowed_type_support_symbol_names_t _IsFollowed_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, people_detector_filter_interfaces_dummy, msg, IsFollowed)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, people_detector_filter_interfaces_dummy, msg, IsFollowed)),
  }
};

typedef struct _IsFollowed_type_support_data_t
{
  void * data[2];
} _IsFollowed_type_support_data_t;

static _IsFollowed_type_support_data_t _IsFollowed_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _IsFollowed_message_typesupport_map = {
  2,
  "people_detector_filter_interfaces_dummy",
  &_IsFollowed_message_typesupport_ids.typesupport_identifier[0],
  &_IsFollowed_message_typesupport_symbol_names.symbol_name[0],
  &_IsFollowed_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t IsFollowed_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_IsFollowed_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_hash,
  &people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description,
  &people_detector_filter_interfaces_dummy__msg__IsFollowed__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace people_detector_filter_interfaces_dummy

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, people_detector_filter_interfaces_dummy, msg, IsFollowed)() {
  return &::people_detector_filter_interfaces_dummy::msg::rosidl_typesupport_c::IsFollowed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
