// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from blackboard_interfaces_dummy:srv/SetIntBlackboard.idl
// generated code does not contain a copyright notice
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__rosidl_typesupport_fastrtps_cpp.hpp"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__functions.h"
#include "blackboard_interfaces_dummy/srv/detail/set_int_blackboard__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
cdr_serialize(
  const blackboard_interfaces_dummy::srv::SetIntBlackboard_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: field_name
  cdr << ros_message.field_name;
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  blackboard_interfaces_dummy::srv::SetIntBlackboard_Request & ros_message)
{
  // Member: field_name
  cdr >> ros_message.field_name;

  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
get_serialized_size(
  const blackboard_interfaces_dummy::srv::SetIntBlackboard_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: field_name
  {
    size_t item_size = sizeof(ros_message.field_name);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
max_serialized_size_SetIntBlackboard_Request(
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


  // Member: field_name
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: value
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
    using DataType = blackboard_interfaces_dummy::srv::SetIntBlackboard_Request;
    is_plain =
      (
      offsetof(DataType, value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetIntBlackboard_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const blackboard_interfaces_dummy::srv::SetIntBlackboard_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetIntBlackboard_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<blackboard_interfaces_dummy::srv::SetIntBlackboard_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetIntBlackboard_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const blackboard_interfaces_dummy::srv::SetIntBlackboard_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetIntBlackboard_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetIntBlackboard_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetIntBlackboard_Request__callbacks = {
  "blackboard_interfaces_dummy::srv",
  "SetIntBlackboard_Request",
  _SetIntBlackboard_Request__cdr_serialize,
  _SetIntBlackboard_Request__cdr_deserialize,
  _SetIntBlackboard_Request__get_serialized_size,
  _SetIntBlackboard_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetIntBlackboard_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetIntBlackboard_Request__callbacks,
  get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Request>()
{
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)() {
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
cdr_serialize(
  const blackboard_interfaces_dummy::srv::SetIntBlackboard_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_ok
  cdr << (ros_message.is_ok ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  blackboard_interfaces_dummy::srv::SetIntBlackboard_Response & ros_message)
{
  // Member: is_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ok = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
get_serialized_size(
  const blackboard_interfaces_dummy::srv::SetIntBlackboard_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_ok
  {
    size_t item_size = sizeof(ros_message.is_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
max_serialized_size_SetIntBlackboard_Response(
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


  // Member: is_ok
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
    using DataType = blackboard_interfaces_dummy::srv::SetIntBlackboard_Response;
    is_plain =
      (
      offsetof(DataType, is_ok) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetIntBlackboard_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const blackboard_interfaces_dummy::srv::SetIntBlackboard_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetIntBlackboard_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<blackboard_interfaces_dummy::srv::SetIntBlackboard_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetIntBlackboard_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const blackboard_interfaces_dummy::srv::SetIntBlackboard_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetIntBlackboard_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetIntBlackboard_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetIntBlackboard_Response__callbacks = {
  "blackboard_interfaces_dummy::srv",
  "SetIntBlackboard_Response",
  _SetIntBlackboard_Response__cdr_serialize,
  _SetIntBlackboard_Response__cdr_deserialize,
  _SetIntBlackboard_Response__get_serialized_size,
  _SetIntBlackboard_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetIntBlackboard_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetIntBlackboard_Response__callbacks,
  get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Response>()
{
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)() {
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for blackboard_interfaces_dummy::srv::SetIntBlackboard_Request already declared above

// functions for blackboard_interfaces_dummy::srv::SetIntBlackboard_Response already declared above


namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
cdr_serialize(
  const blackboard_interfaces_dummy::srv::SetIntBlackboard_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }
  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  blackboard_interfaces_dummy::srv::SetIntBlackboard_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
get_serialized_size(
  const blackboard_interfaces_dummy::srv::SetIntBlackboard_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info

  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }
  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blackboard_interfaces_dummy
max_serialized_size_SetIntBlackboard_Event(
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


  // Member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::max_serialized_size_SetIntBlackboard_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::max_serialized_size_SetIntBlackboard_Response(
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
    using DataType = blackboard_interfaces_dummy::srv::SetIntBlackboard_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetIntBlackboard_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const blackboard_interfaces_dummy::srv::SetIntBlackboard_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetIntBlackboard_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<blackboard_interfaces_dummy::srv::SetIntBlackboard_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetIntBlackboard_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const blackboard_interfaces_dummy::srv::SetIntBlackboard_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetIntBlackboard_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetIntBlackboard_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetIntBlackboard_Event__callbacks = {
  "blackboard_interfaces_dummy::srv",
  "SetIntBlackboard_Event",
  _SetIntBlackboard_Event__cdr_serialize,
  _SetIntBlackboard_Event__cdr_deserialize,
  _SetIntBlackboard_Event__get_serialized_size,
  _SetIntBlackboard_Event__max_serialized_size
};

static rosidl_message_type_support_t _SetIntBlackboard_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetIntBlackboard_Event__callbacks,
  get_message_typesupport_handle_function,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blackboard_interfaces_dummy
const rosidl_message_type_support_t *
get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Event>()
{
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Event)() {
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetIntBlackboard__callbacks = {
  "blackboard_interfaces_dummy::srv",
  "SetIntBlackboard",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _SetIntBlackboard__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetIntBlackboard__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<blackboard_interfaces_dummy::srv::SetIntBlackboard>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<blackboard_interfaces_dummy::srv::SetIntBlackboard>,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_hash,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_description,
  &blackboard_interfaces_dummy__srv__SetIntBlackboard__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blackboard_interfaces_dummy
const rosidl_service_type_support_t *
get_service_type_support_handle<blackboard_interfaces_dummy::srv::SetIntBlackboard>()
{
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blackboard_interfaces_dummy, srv, SetIntBlackboard)() {
  return &blackboard_interfaces_dummy::srv::typesupport_fastrtps_cpp::_SetIntBlackboard__handle;
}

#ifdef __cplusplus
}
#endif
