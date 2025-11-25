// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from timer_interfaces_dummy:srv/IsTimerActive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void IsTimerActive_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) timer_interfaces_dummy::srv::IsTimerActive_Request(_init);
}

void IsTimerActive_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<timer_interfaces_dummy::srv::IsTimerActive_Request *>(message_memory);
  typed_message->~IsTimerActive_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IsTimerActive_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy::srv::IsTimerActive_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IsTimerActive_Request_message_members = {
  "timer_interfaces_dummy::srv",  // message namespace
  "IsTimerActive_Request",  // message name
  1,  // number of fields
  sizeof(timer_interfaces_dummy::srv::IsTimerActive_Request),
  IsTimerActive_Request_message_member_array,  // message members
  IsTimerActive_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  IsTimerActive_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IsTimerActive_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IsTimerActive_Request_message_members,
  get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace timer_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Request>()
{
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_interfaces_dummy, srv, IsTimerActive_Request)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void IsTimerActive_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) timer_interfaces_dummy::srv::IsTimerActive_Response(_init);
}

void IsTimerActive_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<timer_interfaces_dummy::srv::IsTimerActive_Response *>(message_memory);
  typed_message->~IsTimerActive_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IsTimerActive_Response_message_member_array[2] = {
  {
    "is_ok",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy::srv::IsTimerActive_Response, is_ok),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy::srv::IsTimerActive_Response, is_active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IsTimerActive_Response_message_members = {
  "timer_interfaces_dummy::srv",  // message namespace
  "IsTimerActive_Response",  // message name
  2,  // number of fields
  sizeof(timer_interfaces_dummy::srv::IsTimerActive_Response),
  IsTimerActive_Response_message_member_array,  // message members
  IsTimerActive_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  IsTimerActive_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IsTimerActive_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IsTimerActive_Response_message_members,
  get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace timer_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Response>()
{
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_interfaces_dummy, srv, IsTimerActive_Response)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void IsTimerActive_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) timer_interfaces_dummy::srv::IsTimerActive_Event(_init);
}

void IsTimerActive_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<timer_interfaces_dummy::srv::IsTimerActive_Event *>(message_memory);
  typed_message->~IsTimerActive_Event();
}

size_t size_function__IsTimerActive_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<timer_interfaces_dummy::srv::IsTimerActive_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IsTimerActive_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<timer_interfaces_dummy::srv::IsTimerActive_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__IsTimerActive_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<timer_interfaces_dummy::srv::IsTimerActive_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__IsTimerActive_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const timer_interfaces_dummy::srv::IsTimerActive_Request *>(
    get_const_function__IsTimerActive_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<timer_interfaces_dummy::srv::IsTimerActive_Request *>(untyped_value);
  value = item;
}

void assign_function__IsTimerActive_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<timer_interfaces_dummy::srv::IsTimerActive_Request *>(
    get_function__IsTimerActive_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const timer_interfaces_dummy::srv::IsTimerActive_Request *>(untyped_value);
  item = value;
}

void resize_function__IsTimerActive_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<timer_interfaces_dummy::srv::IsTimerActive_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__IsTimerActive_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<timer_interfaces_dummy::srv::IsTimerActive_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IsTimerActive_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<timer_interfaces_dummy::srv::IsTimerActive_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__IsTimerActive_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<timer_interfaces_dummy::srv::IsTimerActive_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__IsTimerActive_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const timer_interfaces_dummy::srv::IsTimerActive_Response *>(
    get_const_function__IsTimerActive_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<timer_interfaces_dummy::srv::IsTimerActive_Response *>(untyped_value);
  value = item;
}

void assign_function__IsTimerActive_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<timer_interfaces_dummy::srv::IsTimerActive_Response *>(
    get_function__IsTimerActive_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const timer_interfaces_dummy::srv::IsTimerActive_Response *>(untyped_value);
  item = value;
}

void resize_function__IsTimerActive_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<timer_interfaces_dummy::srv::IsTimerActive_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IsTimerActive_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(timer_interfaces_dummy::srv::IsTimerActive_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(timer_interfaces_dummy::srv::IsTimerActive_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__IsTimerActive_Event__request,  // size() function pointer
    get_const_function__IsTimerActive_Event__request,  // get_const(index) function pointer
    get_function__IsTimerActive_Event__request,  // get(index) function pointer
    fetch_function__IsTimerActive_Event__request,  // fetch(index, &value) function pointer
    assign_function__IsTimerActive_Event__request,  // assign(index, value) function pointer
    resize_function__IsTimerActive_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(timer_interfaces_dummy::srv::IsTimerActive_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__IsTimerActive_Event__response,  // size() function pointer
    get_const_function__IsTimerActive_Event__response,  // get_const(index) function pointer
    get_function__IsTimerActive_Event__response,  // get(index) function pointer
    fetch_function__IsTimerActive_Event__response,  // fetch(index, &value) function pointer
    assign_function__IsTimerActive_Event__response,  // assign(index, value) function pointer
    resize_function__IsTimerActive_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IsTimerActive_Event_message_members = {
  "timer_interfaces_dummy::srv",  // message namespace
  "IsTimerActive_Event",  // message name
  3,  // number of fields
  sizeof(timer_interfaces_dummy::srv::IsTimerActive_Event),
  IsTimerActive_Event_message_member_array,  // message members
  IsTimerActive_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  IsTimerActive_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IsTimerActive_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IsTimerActive_Event_message_members,
  get_message_typesupport_handle_function,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace timer_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Event>()
{
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_interfaces_dummy, srv, IsTimerActive_Event)() {
  return &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace timer_interfaces_dummy
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers IsTimerActive_service_members = {
  "timer_interfaces_dummy::srv",  // service namespace
  "IsTimerActive",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t IsTimerActive_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IsTimerActive_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<timer_interfaces_dummy::srv::IsTimerActive>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<timer_interfaces_dummy::srv::IsTimerActive>,
  &timer_interfaces_dummy__srv__IsTimerActive__get_type_hash,
  &timer_interfaces_dummy__srv__IsTimerActive__get_type_description,
  &timer_interfaces_dummy__srv__IsTimerActive__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace timer_interfaces_dummy


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::timer_interfaces_dummy::srv::rosidl_typesupport_introspection_cpp::IsTimerActive_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::timer_interfaces_dummy::srv::IsTimerActive_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::timer_interfaces_dummy::srv::IsTimerActive_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::timer_interfaces_dummy::srv::IsTimerActive_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, timer_interfaces_dummy, srv, IsTimerActive)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<timer_interfaces_dummy::srv::IsTimerActive>();
}

#ifdef __cplusplus
}
#endif
