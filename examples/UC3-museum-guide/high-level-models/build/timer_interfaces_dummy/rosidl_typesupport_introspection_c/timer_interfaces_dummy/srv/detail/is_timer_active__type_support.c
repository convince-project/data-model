// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from timer_interfaces_dummy:srv/IsTimerActive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "timer_interfaces_dummy/srv/detail/is_timer_active__rosidl_typesupport_introspection_c.h"
#include "timer_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  timer_interfaces_dummy__srv__IsTimerActive_Request__init(message_memory);
}

void timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_fini_function(void * message_memory)
{
  timer_interfaces_dummy__srv__IsTimerActive_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy__srv__IsTimerActive_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_members = {
  "timer_interfaces_dummy__srv",  // message namespace
  "IsTimerActive_Request",  // message name
  1,  // number of fields
  sizeof(timer_interfaces_dummy__srv__IsTimerActive_Request),
  timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_member_array,  // message members
  timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_type_support_handle = {
  0,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_members,
  get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_timer_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Request)() {
  if (!timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_type_support_handle.typesupport_identifier) {
    timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__rosidl_typesupport_introspection_c.h"
// already included above
// #include "timer_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  timer_interfaces_dummy__srv__IsTimerActive_Response__init(message_memory);
}

void timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_fini_function(void * message_memory)
{
  timer_interfaces_dummy__srv__IsTimerActive_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_member_array[2] = {
  {
    "is_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy__srv__IsTimerActive_Response, is_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy__srv__IsTimerActive_Response, is_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_members = {
  "timer_interfaces_dummy__srv",  // message namespace
  "IsTimerActive_Response",  // message name
  2,  // number of fields
  sizeof(timer_interfaces_dummy__srv__IsTimerActive_Response),
  timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_member_array,  // message members
  timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle = {
  0,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_members,
  get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_timer_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Response)() {
  if (!timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle.typesupport_identifier) {
    timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__rosidl_typesupport_introspection_c.h"
// already included above
// #include "timer_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "timer_interfaces_dummy/srv/is_timer_active.h"
// Member `request`
// Member `response`
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  timer_interfaces_dummy__srv__IsTimerActive_Event__init(message_memory);
}

void timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_fini_function(void * message_memory)
{
  timer_interfaces_dummy__srv__IsTimerActive_Event__fini(message_memory);
}

size_t timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__size_function__IsTimerActive_Event__request(
  const void * untyped_member)
{
  const timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence * member =
    (const timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_const_function__IsTimerActive_Event__request(
  const void * untyped_member, size_t index)
{
  const timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence * member =
    (const timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_function__IsTimerActive_Event__request(
  void * untyped_member, size_t index)
{
  timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence * member =
    (timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__fetch_function__IsTimerActive_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const timer_interfaces_dummy__srv__IsTimerActive_Request * item =
    ((const timer_interfaces_dummy__srv__IsTimerActive_Request *)
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_const_function__IsTimerActive_Event__request(untyped_member, index));
  timer_interfaces_dummy__srv__IsTimerActive_Request * value =
    (timer_interfaces_dummy__srv__IsTimerActive_Request *)(untyped_value);
  *value = *item;
}

void timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__assign_function__IsTimerActive_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  timer_interfaces_dummy__srv__IsTimerActive_Request * item =
    ((timer_interfaces_dummy__srv__IsTimerActive_Request *)
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_function__IsTimerActive_Event__request(untyped_member, index));
  const timer_interfaces_dummy__srv__IsTimerActive_Request * value =
    (const timer_interfaces_dummy__srv__IsTimerActive_Request *)(untyped_value);
  *item = *value;
}

bool timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__resize_function__IsTimerActive_Event__request(
  void * untyped_member, size_t size)
{
  timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence * member =
    (timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence *)(untyped_member);
  timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence__fini(member);
  return timer_interfaces_dummy__srv__IsTimerActive_Request__Sequence__init(member, size);
}

size_t timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__size_function__IsTimerActive_Event__response(
  const void * untyped_member)
{
  const timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence * member =
    (const timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_const_function__IsTimerActive_Event__response(
  const void * untyped_member, size_t index)
{
  const timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence * member =
    (const timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_function__IsTimerActive_Event__response(
  void * untyped_member, size_t index)
{
  timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence * member =
    (timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__fetch_function__IsTimerActive_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const timer_interfaces_dummy__srv__IsTimerActive_Response * item =
    ((const timer_interfaces_dummy__srv__IsTimerActive_Response *)
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_const_function__IsTimerActive_Event__response(untyped_member, index));
  timer_interfaces_dummy__srv__IsTimerActive_Response * value =
    (timer_interfaces_dummy__srv__IsTimerActive_Response *)(untyped_value);
  *value = *item;
}

void timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__assign_function__IsTimerActive_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  timer_interfaces_dummy__srv__IsTimerActive_Response * item =
    ((timer_interfaces_dummy__srv__IsTimerActive_Response *)
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_function__IsTimerActive_Event__response(untyped_member, index));
  const timer_interfaces_dummy__srv__IsTimerActive_Response * value =
    (const timer_interfaces_dummy__srv__IsTimerActive_Response *)(untyped_value);
  *item = *value;
}

bool timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__resize_function__IsTimerActive_Event__response(
  void * untyped_member, size_t size)
{
  timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence * member =
    (timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence *)(untyped_member);
  timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence__fini(member);
  return timer_interfaces_dummy__srv__IsTimerActive_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy__srv__IsTimerActive_Event, info),  // bytes offset in struct
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
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(timer_interfaces_dummy__srv__IsTimerActive_Event, request),  // bytes offset in struct
    NULL,  // default value
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__size_function__IsTimerActive_Event__request,  // size() function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_const_function__IsTimerActive_Event__request,  // get_const(index) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_function__IsTimerActive_Event__request,  // get(index) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__fetch_function__IsTimerActive_Event__request,  // fetch(index, &value) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__assign_function__IsTimerActive_Event__request,  // assign(index, value) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__resize_function__IsTimerActive_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(timer_interfaces_dummy__srv__IsTimerActive_Event, response),  // bytes offset in struct
    NULL,  // default value
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__size_function__IsTimerActive_Event__response,  // size() function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_const_function__IsTimerActive_Event__response,  // get_const(index) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__get_function__IsTimerActive_Event__response,  // get(index) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__fetch_function__IsTimerActive_Event__response,  // fetch(index, &value) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__assign_function__IsTimerActive_Event__response,  // assign(index, value) function pointer
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__resize_function__IsTimerActive_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_members = {
  "timer_interfaces_dummy__srv",  // message namespace
  "IsTimerActive_Event",  // message name
  3,  // number of fields
  sizeof(timer_interfaces_dummy__srv__IsTimerActive_Event),
  timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_member_array,  // message members
  timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_type_support_handle = {
  0,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_members,
  get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_timer_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Event)() {
  timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Request)();
  timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Response)();
  if (!timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_type_support_handle.typesupport_identifier) {
    timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_members = {
  "timer_interfaces_dummy__srv",  // service namespace
  "IsTimerActive",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_type_support_handle,
  NULL,  // response message
  // timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle
  NULL  // event_message
  // timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle
};


static rosidl_service_type_support_t timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_type_support_handle = {
  0,
  &timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_members,
  get_service_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__rosidl_typesupport_introspection_c__IsTimerActive_Request_message_type_support_handle,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__rosidl_typesupport_introspection_c__IsTimerActive_Response_message_type_support_handle,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__rosidl_typesupport_introspection_c__IsTimerActive_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    timer_interfaces_dummy,
    srv,
    IsTimerActive
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    timer_interfaces_dummy,
    srv,
    IsTimerActive
  ),
  &timer_interfaces_dummy__srv__IsTimerActive__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_timer_interfaces_dummy
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive)() {
  if (!timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_type_support_handle.typesupport_identifier) {
    timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, timer_interfaces_dummy, srv, IsTimerActive_Event)()->data;
  }

  return &timer_interfaces_dummy__srv__detail__is_timer_active__rosidl_typesupport_introspection_c__IsTimerActive_service_type_support_handle;
}
