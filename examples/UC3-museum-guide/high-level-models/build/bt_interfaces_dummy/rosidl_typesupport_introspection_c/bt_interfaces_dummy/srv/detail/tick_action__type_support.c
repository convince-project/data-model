// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bt_interfaces_dummy:srv/TickAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bt_interfaces_dummy/srv/detail/tick_action__rosidl_typesupport_introspection_c.h"
#include "bt_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"
#include "bt_interfaces_dummy/srv/detail/tick_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_interfaces_dummy__srv__TickAction_Request__init(message_memory);
}

void bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_fini_function(void * message_memory)
{
  bt_interfaces_dummy__srv__TickAction_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_interfaces_dummy__srv__TickAction_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_members = {
  "bt_interfaces_dummy__srv",  // message namespace
  "TickAction_Request",  // message name
  1,  // number of fields
  sizeof(bt_interfaces_dummy__srv__TickAction_Request),
  bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_member_array,  // message members
  bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_type_support_handle = {
  0,
  &bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_members,
  get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Request__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction_Request__get_type_description,
  &bt_interfaces_dummy__srv__TickAction_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Request)() {
  if (!bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_type_support_handle.typesupport_identifier) {
    bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_interfaces_dummy__srv__TickAction_Response__init(message_memory);
}

void bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_fini_function(void * message_memory)
{
  bt_interfaces_dummy__srv__TickAction_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_interfaces_dummy__srv__TickAction_Response, status),  // bytes offset in struct
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
    offsetof(bt_interfaces_dummy__srv__TickAction_Response, is_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_members = {
  "bt_interfaces_dummy__srv",  // message namespace
  "TickAction_Response",  // message name
  2,  // number of fields
  sizeof(bt_interfaces_dummy__srv__TickAction_Response),
  bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_member_array,  // message members
  bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle = {
  0,
  &bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_members,
  get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Response__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction_Response__get_type_description,
  &bt_interfaces_dummy__srv__TickAction_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Response)() {
  if (!bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle.typesupport_identifier) {
    bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "bt_interfaces_dummy/srv/tick_action.h"
// Member `request`
// Member `response`
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_interfaces_dummy__srv__TickAction_Event__init(message_memory);
}

void bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_fini_function(void * message_memory)
{
  bt_interfaces_dummy__srv__TickAction_Event__fini(message_memory);
}

size_t bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__size_function__TickAction_Event__request(
  const void * untyped_member)
{
  const bt_interfaces_dummy__srv__TickAction_Request__Sequence * member =
    (const bt_interfaces_dummy__srv__TickAction_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_const_function__TickAction_Event__request(
  const void * untyped_member, size_t index)
{
  const bt_interfaces_dummy__srv__TickAction_Request__Sequence * member =
    (const bt_interfaces_dummy__srv__TickAction_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_function__TickAction_Event__request(
  void * untyped_member, size_t index)
{
  bt_interfaces_dummy__srv__TickAction_Request__Sequence * member =
    (bt_interfaces_dummy__srv__TickAction_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__fetch_function__TickAction_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bt_interfaces_dummy__srv__TickAction_Request * item =
    ((const bt_interfaces_dummy__srv__TickAction_Request *)
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_const_function__TickAction_Event__request(untyped_member, index));
  bt_interfaces_dummy__srv__TickAction_Request * value =
    (bt_interfaces_dummy__srv__TickAction_Request *)(untyped_value);
  *value = *item;
}

void bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__assign_function__TickAction_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bt_interfaces_dummy__srv__TickAction_Request * item =
    ((bt_interfaces_dummy__srv__TickAction_Request *)
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_function__TickAction_Event__request(untyped_member, index));
  const bt_interfaces_dummy__srv__TickAction_Request * value =
    (const bt_interfaces_dummy__srv__TickAction_Request *)(untyped_value);
  *item = *value;
}

bool bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__resize_function__TickAction_Event__request(
  void * untyped_member, size_t size)
{
  bt_interfaces_dummy__srv__TickAction_Request__Sequence * member =
    (bt_interfaces_dummy__srv__TickAction_Request__Sequence *)(untyped_member);
  bt_interfaces_dummy__srv__TickAction_Request__Sequence__fini(member);
  return bt_interfaces_dummy__srv__TickAction_Request__Sequence__init(member, size);
}

size_t bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__size_function__TickAction_Event__response(
  const void * untyped_member)
{
  const bt_interfaces_dummy__srv__TickAction_Response__Sequence * member =
    (const bt_interfaces_dummy__srv__TickAction_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_const_function__TickAction_Event__response(
  const void * untyped_member, size_t index)
{
  const bt_interfaces_dummy__srv__TickAction_Response__Sequence * member =
    (const bt_interfaces_dummy__srv__TickAction_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_function__TickAction_Event__response(
  void * untyped_member, size_t index)
{
  bt_interfaces_dummy__srv__TickAction_Response__Sequence * member =
    (bt_interfaces_dummy__srv__TickAction_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__fetch_function__TickAction_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bt_interfaces_dummy__srv__TickAction_Response * item =
    ((const bt_interfaces_dummy__srv__TickAction_Response *)
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_const_function__TickAction_Event__response(untyped_member, index));
  bt_interfaces_dummy__srv__TickAction_Response * value =
    (bt_interfaces_dummy__srv__TickAction_Response *)(untyped_value);
  *value = *item;
}

void bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__assign_function__TickAction_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bt_interfaces_dummy__srv__TickAction_Response * item =
    ((bt_interfaces_dummy__srv__TickAction_Response *)
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_function__TickAction_Event__response(untyped_member, index));
  const bt_interfaces_dummy__srv__TickAction_Response * value =
    (const bt_interfaces_dummy__srv__TickAction_Response *)(untyped_value);
  *item = *value;
}

bool bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__resize_function__TickAction_Event__response(
  void * untyped_member, size_t size)
{
  bt_interfaces_dummy__srv__TickAction_Response__Sequence * member =
    (bt_interfaces_dummy__srv__TickAction_Response__Sequence *)(untyped_member);
  bt_interfaces_dummy__srv__TickAction_Response__Sequence__fini(member);
  return bt_interfaces_dummy__srv__TickAction_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_interfaces_dummy__srv__TickAction_Event, info),  // bytes offset in struct
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
    offsetof(bt_interfaces_dummy__srv__TickAction_Event, request),  // bytes offset in struct
    NULL,  // default value
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__size_function__TickAction_Event__request,  // size() function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_const_function__TickAction_Event__request,  // get_const(index) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_function__TickAction_Event__request,  // get(index) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__fetch_function__TickAction_Event__request,  // fetch(index, &value) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__assign_function__TickAction_Event__request,  // assign(index, value) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__resize_function__TickAction_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bt_interfaces_dummy__srv__TickAction_Event, response),  // bytes offset in struct
    NULL,  // default value
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__size_function__TickAction_Event__response,  // size() function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_const_function__TickAction_Event__response,  // get_const(index) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__get_function__TickAction_Event__response,  // get(index) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__fetch_function__TickAction_Event__response,  // fetch(index, &value) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__assign_function__TickAction_Event__response,  // assign(index, value) function pointer
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__resize_function__TickAction_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_members = {
  "bt_interfaces_dummy__srv",  // message namespace
  "TickAction_Event",  // message name
  3,  // number of fields
  sizeof(bt_interfaces_dummy__srv__TickAction_Event),
  bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_member_array,  // message members
  bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_type_support_handle = {
  0,
  &bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_members,
  get_message_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Event__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction_Event__get_type_description,
  &bt_interfaces_dummy__srv__TickAction_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Event)() {
  bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Request)();
  bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Response)();
  if (!bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_type_support_handle.typesupport_identifier) {
    bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bt_interfaces_dummy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bt_interfaces_dummy/srv/detail/tick_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_members = {
  "bt_interfaces_dummy__srv",  // service namespace
  "TickAction",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_Request_message_type_support_handle,
  NULL,  // response message
  // bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle
  NULL  // event_message
  // bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle
};


static rosidl_service_type_support_t bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_type_support_handle = {
  0,
  &bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_members,
  get_service_typesupport_handle_function,
  &bt_interfaces_dummy__srv__TickAction_Request__rosidl_typesupport_introspection_c__TickAction_Request_message_type_support_handle,
  &bt_interfaces_dummy__srv__TickAction_Response__rosidl_typesupport_introspection_c__TickAction_Response_message_type_support_handle,
  &bt_interfaces_dummy__srv__TickAction_Event__rosidl_typesupport_introspection_c__TickAction_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bt_interfaces_dummy,
    srv,
    TickAction
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    bt_interfaces_dummy,
    srv,
    TickAction
  ),
  &bt_interfaces_dummy__srv__TickAction__get_type_hash,
  &bt_interfaces_dummy__srv__TickAction__get_type_description,
  &bt_interfaces_dummy__srv__TickAction__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_interfaces_dummy
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction)() {
  if (!bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_type_support_handle.typesupport_identifier) {
    bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_interfaces_dummy, srv, TickAction_Event)()->data;
  }

  return &bt_interfaces_dummy__srv__detail__tick_action__rosidl_typesupport_introspection_c__TickAction_service_type_support_handle;
}
