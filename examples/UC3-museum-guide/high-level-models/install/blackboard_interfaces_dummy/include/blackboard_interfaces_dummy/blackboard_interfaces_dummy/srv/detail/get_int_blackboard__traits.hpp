// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__TRAITS_HPP_
#define BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace blackboard_interfaces_dummy
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIntBlackboard_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: field_name
  {
    out << "field_name: ";
    rosidl_generator_traits::value_to_yaml(msg.field_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIntBlackboard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: field_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field_name: ";
    rosidl_generator_traits::value_to_yaml(msg.field_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIntBlackboard_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use blackboard_interfaces_dummy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const blackboard_interfaces_dummy::srv::GetIntBlackboard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  blackboard_interfaces_dummy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use blackboard_interfaces_dummy::srv::to_yaml() instead")]]
inline std::string to_yaml(const blackboard_interfaces_dummy::srv::GetIntBlackboard_Request & msg)
{
  return blackboard_interfaces_dummy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>()
{
  return "blackboard_interfaces_dummy::srv::GetIntBlackboard_Request";
}

template<>
inline const char * name<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>()
{
  return "blackboard_interfaces_dummy/srv/GetIntBlackboard_Request";
}

template<>
struct has_fixed_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace blackboard_interfaces_dummy
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIntBlackboard_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: is_ok
  {
    out << "is_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIntBlackboard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: is_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIntBlackboard_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use blackboard_interfaces_dummy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const blackboard_interfaces_dummy::srv::GetIntBlackboard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  blackboard_interfaces_dummy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use blackboard_interfaces_dummy::srv::to_yaml() instead")]]
inline std::string to_yaml(const blackboard_interfaces_dummy::srv::GetIntBlackboard_Response & msg)
{
  return blackboard_interfaces_dummy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>()
{
  return "blackboard_interfaces_dummy::srv::GetIntBlackboard_Response";
}

template<>
inline const char * name<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>()
{
  return "blackboard_interfaces_dummy/srv/GetIntBlackboard_Response";
}

template<>
struct has_fixed_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace blackboard_interfaces_dummy
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetIntBlackboard_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetIntBlackboard_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetIntBlackboard_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace blackboard_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use blackboard_interfaces_dummy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const blackboard_interfaces_dummy::srv::GetIntBlackboard_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  blackboard_interfaces_dummy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use blackboard_interfaces_dummy::srv::to_yaml() instead")]]
inline std::string to_yaml(const blackboard_interfaces_dummy::srv::GetIntBlackboard_Event & msg)
{
  return blackboard_interfaces_dummy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>()
{
  return "blackboard_interfaces_dummy::srv::GetIntBlackboard_Event";
}

template<>
inline const char * name<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>()
{
  return "blackboard_interfaces_dummy/srv/GetIntBlackboard_Event";
}

template<>
struct has_fixed_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>
  : std::integral_constant<bool, has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>::value && has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blackboard_interfaces_dummy::srv::GetIntBlackboard>()
{
  return "blackboard_interfaces_dummy::srv::GetIntBlackboard";
}

template<>
inline const char * name<blackboard_interfaces_dummy::srv::GetIntBlackboard>()
{
  return "blackboard_interfaces_dummy/srv/GetIntBlackboard";
}

template<>
struct has_fixed_size<blackboard_interfaces_dummy::srv::GetIntBlackboard>
  : std::integral_constant<
    bool,
    has_fixed_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>::value &&
    has_fixed_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>::value
  >
{
};

template<>
struct has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard>
  : std::integral_constant<
    bool,
    has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>::value &&
    has_bounded_size<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>::value
  >
{
};

template<>
struct is_service<blackboard_interfaces_dummy::srv::GetIntBlackboard>
  : std::true_type
{
};

template<>
struct is_service_request<blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>
  : std::true_type
{
};

template<>
struct is_service_response<blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__TRAITS_HPP_
