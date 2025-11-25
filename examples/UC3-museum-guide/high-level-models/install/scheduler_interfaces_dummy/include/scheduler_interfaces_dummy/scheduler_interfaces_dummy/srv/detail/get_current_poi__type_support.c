// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from scheduler_interfaces_dummy:srv/GetCurrentPoi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__rosidl_typesupport_introspection_c.h"
#include "scheduler_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"
#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__init(message_memory);
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_fini_function(void * message_memory)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_members = {
  "scheduler_interfaces_dummy__srv",  // message namespace
  "GetCurrentPoi_Request",  // message name
  1,  // number of fields
  sizeof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Request),
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_member_array,  // message members
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_type_support_handle = {
  0,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_members,
  get_message_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scheduler_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)() {
  if (!scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_type_support_handle.typesupport_identifier) {
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "scheduler_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__init(message_memory);
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_fini_function(void * message_memory)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_member_array[2] = {
  {
    "poi_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Response, poi_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Response, is_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_members = {
  "scheduler_interfaces_dummy__srv",  // message namespace
  "GetCurrentPoi_Response",  // message name
  2,  // number of fields
  sizeof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Response),
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_member_array,  // message members
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle = {
  0,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_members,
  get_message_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scheduler_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)() {
  if (!scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle.typesupport_identifier) {
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "scheduler_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__functions.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "scheduler_interfaces_dummy/srv/get_current_poi.h"
// Member `request`
// Member `response`
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__init(message_memory);
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_fini_function(void * message_memory)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__fini(message_memory);
}

size_t scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__size_function__GetCurrentPoi_Event__request(
  const void * untyped_member)
{
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence * member =
    (const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_const_function__GetCurrentPoi_Event__request(
  const void * untyped_member, size_t index)
{
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence * member =
    (const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_function__GetCurrentPoi_Event__request(
  void * untyped_member, size_t index)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence * member =
    (scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__fetch_function__GetCurrentPoi_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request * item =
    ((const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request *)
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_const_function__GetCurrentPoi_Event__request(untyped_member, index));
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request * value =
    (scheduler_interfaces_dummy__srv__GetCurrentPoi_Request *)(untyped_value);
  *value = *item;
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__assign_function__GetCurrentPoi_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request * item =
    ((scheduler_interfaces_dummy__srv__GetCurrentPoi_Request *)
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_function__GetCurrentPoi_Event__request(untyped_member, index));
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request * value =
    (const scheduler_interfaces_dummy__srv__GetCurrentPoi_Request *)(untyped_value);
  *item = *value;
}

bool scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__resize_function__GetCurrentPoi_Event__request(
  void * untyped_member, size_t size)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence * member =
    (scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence *)(untyped_member);
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence__fini(member);
  return scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__Sequence__init(member, size);
}

size_t scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__size_function__GetCurrentPoi_Event__response(
  const void * untyped_member)
{
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence * member =
    (const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_const_function__GetCurrentPoi_Event__response(
  const void * untyped_member, size_t index)
{
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence * member =
    (const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_function__GetCurrentPoi_Event__response(
  void * untyped_member, size_t index)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence * member =
    (scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__fetch_function__GetCurrentPoi_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response * item =
    ((const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response *)
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_const_function__GetCurrentPoi_Event__response(untyped_member, index));
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response * value =
    (scheduler_interfaces_dummy__srv__GetCurrentPoi_Response *)(untyped_value);
  *value = *item;
}

void scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__assign_function__GetCurrentPoi_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response * item =
    ((scheduler_interfaces_dummy__srv__GetCurrentPoi_Response *)
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_function__GetCurrentPoi_Event__response(untyped_member, index));
  const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response * value =
    (const scheduler_interfaces_dummy__srv__GetCurrentPoi_Response *)(untyped_value);
  *item = *value;
}

bool scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__resize_function__GetCurrentPoi_Event__response(
  void * untyped_member, size_t size)
{
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence * member =
    (scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence *)(untyped_member);
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence__fini(member);
  return scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Event, info),  // bytes offset in struct
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
    offsetof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Event, request),  // bytes offset in struct
    NULL,  // default value
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__size_function__GetCurrentPoi_Event__request,  // size() function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_const_function__GetCurrentPoi_Event__request,  // get_const(index) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_function__GetCurrentPoi_Event__request,  // get(index) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__fetch_function__GetCurrentPoi_Event__request,  // fetch(index, &value) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__assign_function__GetCurrentPoi_Event__request,  // assign(index, value) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__resize_function__GetCurrentPoi_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Event, response),  // bytes offset in struct
    NULL,  // default value
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__size_function__GetCurrentPoi_Event__response,  // size() function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_const_function__GetCurrentPoi_Event__response,  // get_const(index) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__get_function__GetCurrentPoi_Event__response,  // get(index) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__fetch_function__GetCurrentPoi_Event__response,  // fetch(index, &value) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__assign_function__GetCurrentPoi_Event__response,  // assign(index, value) function pointer
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__resize_function__GetCurrentPoi_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_members = {
  "scheduler_interfaces_dummy__srv",  // message namespace
  "GetCurrentPoi_Event",  // message name
  3,  // number of fields
  sizeof(scheduler_interfaces_dummy__srv__GetCurrentPoi_Event),
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_member_array,  // message members
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_type_support_handle = {
  0,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_members,
  get_message_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scheduler_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Event)() {
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)();
  scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)();
  if (!scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_type_support_handle.typesupport_identifier) {
    scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "scheduler_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "scheduler_interfaces_dummy/srv/detail/get_current_poi__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_members = {
  "scheduler_interfaces_dummy__srv",  // service namespace
  "GetCurrentPoi",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_type_support_handle,
  NULL,  // response message
  // scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle
  NULL  // event_message
  // scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle
};


static rosidl_service_type_support_t scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_type_support_handle = {
  0,
  &scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_members,
  get_service_typesupport_handle_function,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Request__rosidl_typesupport_introspection_c__GetCurrentPoi_Request_message_type_support_handle,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Response__rosidl_typesupport_introspection_c__GetCurrentPoi_Response_message_type_support_handle,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi_Event__rosidl_typesupport_introspection_c__GetCurrentPoi_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    scheduler_interfaces_dummy,
    srv,
    GetCurrentPoi
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    scheduler_interfaces_dummy,
    srv,
    GetCurrentPoi
  ),
  &scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_hash,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_description,
  &scheduler_interfaces_dummy__srv__GetCurrentPoi__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_scheduler_interfaces_dummy
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi)() {
  if (!scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_type_support_handle.typesupport_identifier) {
    scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scheduler_interfaces_dummy, srv, GetCurrentPoi_Event)()->data;
  }

  return &scheduler_interfaces_dummy__srv__detail__get_current_poi__rosidl_typesupport_introspection_c__GetCurrentPoi_service_type_support_handle;
}
