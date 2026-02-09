// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pyrobosim_msgs:srv/RequestWorldInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pyrobosim_msgs/srv/detail/request_world_info__rosidl_typesupport_introspection_c.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pyrobosim_msgs/srv/detail/request_world_info__functions.h"
#include "pyrobosim_msgs/srv/detail/request_world_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyrobosim_msgs__srv__RequestWorldInfo_Request__init(message_memory);
}

void pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_fini_function(void * message_memory)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__srv__RequestWorldInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_members = {
  "pyrobosim_msgs__srv",  // message namespace
  "RequestWorldInfo_Request",  // message name
  1,  // number of fields
  sizeof(pyrobosim_msgs__srv__RequestWorldInfo_Request),
  false,  // has_any_key_member_
  pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_member_array,  // message members
  pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_type_support_handle = {
  0,
  &pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__srv__RequestWorldInfo_Request__get_type_hash,
  &pyrobosim_msgs__srv__RequestWorldInfo_Request__get_type_description,
  &pyrobosim_msgs__srv__RequestWorldInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Request)() {
  if (!pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__functions.h"
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__struct.h"


// Include directives for member types
// Member `info`
#include "pyrobosim_msgs/msg/world_info.h"
// Member `info`
#include "pyrobosim_msgs/msg/detail/world_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyrobosim_msgs__srv__RequestWorldInfo_Response__init(message_memory);
}

void pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_fini_function(void * message_memory)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_member_array[1] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__srv__RequestWorldInfo_Response, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_members = {
  "pyrobosim_msgs__srv",  // message namespace
  "RequestWorldInfo_Response",  // message name
  1,  // number of fields
  sizeof(pyrobosim_msgs__srv__RequestWorldInfo_Response),
  false,  // has_any_key_member_
  pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_member_array,  // message members
  pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle = {
  0,
  &pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__srv__RequestWorldInfo_Response__get_type_hash,
  &pyrobosim_msgs__srv__RequestWorldInfo_Response__get_type_description,
  &pyrobosim_msgs__srv__RequestWorldInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Response)() {
  pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, WorldInfo)();
  if (!pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__functions.h"
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "pyrobosim_msgs/srv/request_world_info.h"
// Member `request`
// Member `response`
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyrobosim_msgs__srv__RequestWorldInfo_Event__init(message_memory);
}

void pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_fini_function(void * message_memory)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Event__fini(message_memory);
}

size_t pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__size_function__RequestWorldInfo_Event__request(
  const void * untyped_member)
{
  const pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence * member =
    (const pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_const_function__RequestWorldInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence * member =
    (const pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_function__RequestWorldInfo_Event__request(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence * member =
    (pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__fetch_function__RequestWorldInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__srv__RequestWorldInfo_Request * item =
    ((const pyrobosim_msgs__srv__RequestWorldInfo_Request *)
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_const_function__RequestWorldInfo_Event__request(untyped_member, index));
  pyrobosim_msgs__srv__RequestWorldInfo_Request * value =
    (pyrobosim_msgs__srv__RequestWorldInfo_Request *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__assign_function__RequestWorldInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Request * item =
    ((pyrobosim_msgs__srv__RequestWorldInfo_Request *)
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_function__RequestWorldInfo_Event__request(untyped_member, index));
  const pyrobosim_msgs__srv__RequestWorldInfo_Request * value =
    (const pyrobosim_msgs__srv__RequestWorldInfo_Request *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__resize_function__RequestWorldInfo_Event__request(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence * member =
    (pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence *)(untyped_member);
  pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence__fini(member);
  return pyrobosim_msgs__srv__RequestWorldInfo_Request__Sequence__init(member, size);
}

size_t pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__size_function__RequestWorldInfo_Event__response(
  const void * untyped_member)
{
  const pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence * member =
    (const pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_const_function__RequestWorldInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence * member =
    (const pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_function__RequestWorldInfo_Event__response(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence * member =
    (pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__fetch_function__RequestWorldInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__srv__RequestWorldInfo_Response * item =
    ((const pyrobosim_msgs__srv__RequestWorldInfo_Response *)
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_const_function__RequestWorldInfo_Event__response(untyped_member, index));
  pyrobosim_msgs__srv__RequestWorldInfo_Response * value =
    (pyrobosim_msgs__srv__RequestWorldInfo_Response *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__assign_function__RequestWorldInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Response * item =
    ((pyrobosim_msgs__srv__RequestWorldInfo_Response *)
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_function__RequestWorldInfo_Event__response(untyped_member, index));
  const pyrobosim_msgs__srv__RequestWorldInfo_Response * value =
    (const pyrobosim_msgs__srv__RequestWorldInfo_Response *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__resize_function__RequestWorldInfo_Event__response(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence * member =
    (pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence *)(untyped_member);
  pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence__fini(member);
  return pyrobosim_msgs__srv__RequestWorldInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__srv__RequestWorldInfo_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pyrobosim_msgs__srv__RequestWorldInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__size_function__RequestWorldInfo_Event__request,  // size() function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_const_function__RequestWorldInfo_Event__request,  // get_const(index) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_function__RequestWorldInfo_Event__request,  // get(index) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__fetch_function__RequestWorldInfo_Event__request,  // fetch(index, &value) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__assign_function__RequestWorldInfo_Event__request,  // assign(index, value) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__resize_function__RequestWorldInfo_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pyrobosim_msgs__srv__RequestWorldInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__size_function__RequestWorldInfo_Event__response,  // size() function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_const_function__RequestWorldInfo_Event__response,  // get_const(index) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__get_function__RequestWorldInfo_Event__response,  // get(index) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__fetch_function__RequestWorldInfo_Event__response,  // fetch(index, &value) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__assign_function__RequestWorldInfo_Event__response,  // assign(index, value) function pointer
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__resize_function__RequestWorldInfo_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_members = {
  "pyrobosim_msgs__srv",  // message namespace
  "RequestWorldInfo_Event",  // message name
  3,  // number of fields
  sizeof(pyrobosim_msgs__srv__RequestWorldInfo_Event),
  false,  // has_any_key_member_
  pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_member_array,  // message members
  pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_type_support_handle = {
  0,
  &pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__srv__RequestWorldInfo_Event__get_type_hash,
  &pyrobosim_msgs__srv__RequestWorldInfo_Event__get_type_description,
  &pyrobosim_msgs__srv__RequestWorldInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Event)() {
  pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Request)();
  pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Response)();
  if (!pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pyrobosim_msgs/srv/detail/request_world_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_members = {
  "pyrobosim_msgs__srv",  // service namespace
  "RequestWorldInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_type_support_handle,
  NULL,  // response message
  // pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle
  NULL  // event_message
  // pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_type_support_handle = {
  0,
  &pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_members,
  get_service_typesupport_handle_function,
  &pyrobosim_msgs__srv__RequestWorldInfo_Request__rosidl_typesupport_introspection_c__RequestWorldInfo_Request_message_type_support_handle,
  &pyrobosim_msgs__srv__RequestWorldInfo_Response__rosidl_typesupport_introspection_c__RequestWorldInfo_Response_message_type_support_handle,
  &pyrobosim_msgs__srv__RequestWorldInfo_Event__rosidl_typesupport_introspection_c__RequestWorldInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pyrobosim_msgs,
    srv,
    RequestWorldInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pyrobosim_msgs,
    srv,
    RequestWorldInfo
  ),
  &pyrobosim_msgs__srv__RequestWorldInfo__get_type_hash,
  &pyrobosim_msgs__srv__RequestWorldInfo__get_type_description,
  &pyrobosim_msgs__srv__RequestWorldInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo)(void) {
  if (!pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, srv, RequestWorldInfo_Event)()->data;
  }

  return &pyrobosim_msgs__srv__detail__request_world_info__rosidl_typesupport_introspection_c__RequestWorldInfo_service_type_support_handle;
}
