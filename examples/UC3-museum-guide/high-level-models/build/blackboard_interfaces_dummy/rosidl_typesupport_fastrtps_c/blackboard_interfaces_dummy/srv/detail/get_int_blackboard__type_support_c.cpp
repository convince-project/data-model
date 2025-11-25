// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "blackboard_interfaces_dummy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetIntBlackboard_Request__ros_msg_type = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request;

static bool _GetIntBlackboard_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetIntBlackboard_Request__ros_msg_type * ros_message = static_cast<const _GetIntBlackboard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: field_name
  {
    cdr << ros_message->field_name;
  }

  return true;
}

static bool _GetIntBlackboard_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetIntBlackboard_Request__ros_msg_type * ros_message = static_cast<_GetIntBlackboard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: field_name
  {
    cdr >> ros_message->field_name;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blackboard_interfaces_dummy
size_t get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetIntBlackboard_Request__ros_msg_type * ros_message = static_cast<const _GetIntBlackboard_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field_name
  {
    size_t item_size = sizeof(ros_message->field_name);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetIntBlackboard_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blackboard_interfaces_dummy
size_t max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: field_name
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request;
    is_plain =
      (
      offsetof(DataType, field_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetIntBlackboard_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetIntBlackboard_Request = {
  "blackboard_interfaces_dummy::srv",
  "GetIntBlackboard_Request",
  _GetIntBlackboard_Request__cdr_serialize,
  _GetIntBlackboard_Request__cdr_deserialize,
  _GetIntBlackboard_Request__get_serialized_size,
  _GetIntBlackboard_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetIntBlackboard_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetIntBlackboard_Request,
  get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)() {
  return &_GetIntBlackboard_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "blackboard_interfaces_dummy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetIntBlackboard_Response__ros_msg_type = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response;

static bool _GetIntBlackboard_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetIntBlackboard_Response__ros_msg_type * ros_message = static_cast<const _GetIntBlackboard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    cdr << ros_message->value;
  }

  // Field name: is_ok
  {
    cdr << (ros_message->is_ok ? true : false);
  }

  return true;
}

static bool _GetIntBlackboard_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetIntBlackboard_Response__ros_msg_type * ros_message = static_cast<_GetIntBlackboard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    cdr >> ros_message->value;
  }

  // Field name: is_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_ok = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blackboard_interfaces_dummy
size_t get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetIntBlackboard_Response__ros_msg_type * ros_message = static_cast<const _GetIntBlackboard_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_ok
  {
    size_t item_size = sizeof(ros_message->is_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetIntBlackboard_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blackboard_interfaces_dummy
size_t max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response;
    is_plain =
      (
      offsetof(DataType, is_ok) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetIntBlackboard_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetIntBlackboard_Response = {
  "blackboard_interfaces_dummy::srv",
  "GetIntBlackboard_Response",
  _GetIntBlackboard_Response__cdr_serialize,
  _GetIntBlackboard_Response__cdr_deserialize,
  _GetIntBlackboard_Response__get_serialized_size,
  _GetIntBlackboard_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetIntBlackboard_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetIntBlackboard_Response,
  get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)() {
  return &_GetIntBlackboard_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "blackboard_interfaces_dummy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.h"
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)();
size_t get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_blackboard_interfaces_dummy
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_blackboard_interfaces_dummy
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _GetIntBlackboard_Event__ros_msg_type = blackboard_interfaces_dummy__srv__GetIntBlackboard_Event;

static bool _GetIntBlackboard_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetIntBlackboard_Event__ros_msg_type * ros_message = static_cast<const _GetIntBlackboard_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetIntBlackboard_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetIntBlackboard_Event__ros_msg_type * ros_message = static_cast<_GetIntBlackboard_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__fini(&ros_message->request);
    }
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__fini(&ros_message->response);
    }
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blackboard_interfaces_dummy
size_t get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetIntBlackboard_Event__ros_msg_type * ros_message = static_cast<const _GetIntBlackboard_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetIntBlackboard_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blackboard_interfaces_dummy
size_t max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = blackboard_interfaces_dummy__srv__GetIntBlackboard_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetIntBlackboard_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_blackboard_interfaces_dummy__srv__GetIntBlackboard_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetIntBlackboard_Event = {
  "blackboard_interfaces_dummy::srv",
  "GetIntBlackboard_Event",
  _GetIntBlackboard_Event__cdr_serialize,
  _GetIntBlackboard_Event__cdr_deserialize,
  _GetIntBlackboard_Event__get_serialized_size,
  _GetIntBlackboard_Event__max_serialized_size
};

static rosidl_message_type_support_t _GetIntBlackboard_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetIntBlackboard_Event,
  get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Event)() {
  return &_GetIntBlackboard_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "blackboard_interfaces_dummy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "blackboard_interfaces_dummy/srv/get_int_blackboard.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetIntBlackboard__callbacks = {
  "blackboard_interfaces_dummy::srv",
  "GetIntBlackboard",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard_Response)(),
};

static rosidl_service_type_support_t GetIntBlackboard__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetIntBlackboard__callbacks,
  get_service_typesupport_handle_function,
  &_GetIntBlackboard_Request__type_support,
  &_GetIntBlackboard_Response__type_support,
  &_GetIntBlackboard_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    blackboard_interfaces_dummy,
    srv,
    GetIntBlackboard
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    blackboard_interfaces_dummy,
    srv,
    GetIntBlackboard
  ),
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_hash,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description,
  &blackboard_interfaces_dummy__srv__GetIntBlackboard__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blackboard_interfaces_dummy, srv, GetIntBlackboard)() {
  return &GetIntBlackboard__handle;
}

#if defined(__cplusplus)
}
#endif
