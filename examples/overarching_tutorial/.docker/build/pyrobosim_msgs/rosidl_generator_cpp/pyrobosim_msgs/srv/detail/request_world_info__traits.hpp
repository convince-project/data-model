// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:srv/RequestWorldInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/request_world_info.hpp"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__TRAITS_HPP_
#define PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/srv/detail/request_world_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pyrobosim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestWorldInfo_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestWorldInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestWorldInfo_Request & msg, bool use_flow_style = false)
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

}  // namespace pyrobosim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pyrobosim_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pyrobosim_msgs::srv::RequestWorldInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::srv::RequestWorldInfo_Request & msg)
{
  return pyrobosim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::srv::RequestWorldInfo_Request>()
{
  return "pyrobosim_msgs::srv::RequestWorldInfo_Request";
}

template<>
inline const char * name<pyrobosim_msgs::srv::RequestWorldInfo_Request>()
{
  return "pyrobosim_msgs/srv/RequestWorldInfo_Request";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::RequestWorldInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pyrobosim_msgs::srv::RequestWorldInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "pyrobosim_msgs/msg/detail/world_info__traits.hpp"

namespace pyrobosim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestWorldInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestWorldInfo_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestWorldInfo_Response & msg, bool use_flow_style = false)
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

}  // namespace pyrobosim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pyrobosim_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pyrobosim_msgs::srv::RequestWorldInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::srv::RequestWorldInfo_Response & msg)
{
  return pyrobosim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::srv::RequestWorldInfo_Response>()
{
  return "pyrobosim_msgs::srv::RequestWorldInfo_Response";
}

template<>
inline const char * name<pyrobosim_msgs::srv::RequestWorldInfo_Response>()
{
  return "pyrobosim_msgs/srv/RequestWorldInfo_Response";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::RequestWorldInfo_Response>
  : std::integral_constant<bool, has_fixed_size<pyrobosim_msgs::msg::WorldInfo>::value> {};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Response>
  : std::integral_constant<bool, has_bounded_size<pyrobosim_msgs::msg::WorldInfo>::value> {};

template<>
struct is_message<pyrobosim_msgs::srv::RequestWorldInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace pyrobosim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestWorldInfo_Event & msg,
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
  const RequestWorldInfo_Event & msg,
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

inline std::string to_yaml(const RequestWorldInfo_Event & msg, bool use_flow_style = false)
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

}  // namespace pyrobosim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pyrobosim_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pyrobosim_msgs::srv::RequestWorldInfo_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::srv::RequestWorldInfo_Event & msg)
{
  return pyrobosim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::srv::RequestWorldInfo_Event>()
{
  return "pyrobosim_msgs::srv::RequestWorldInfo_Event";
}

template<>
inline const char * name<pyrobosim_msgs::srv::RequestWorldInfo_Event>()
{
  return "pyrobosim_msgs/srv/RequestWorldInfo_Event";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::RequestWorldInfo_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Event>
  : std::integral_constant<bool, has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Request>::value && has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<pyrobosim_msgs::srv::RequestWorldInfo_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pyrobosim_msgs::srv::RequestWorldInfo>()
{
  return "pyrobosim_msgs::srv::RequestWorldInfo";
}

template<>
inline const char * name<pyrobosim_msgs::srv::RequestWorldInfo>()
{
  return "pyrobosim_msgs/srv/RequestWorldInfo";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::RequestWorldInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<pyrobosim_msgs::srv::RequestWorldInfo_Request>::value &&
    has_fixed_size<pyrobosim_msgs::srv::RequestWorldInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Request>::value &&
    has_bounded_size<pyrobosim_msgs::srv::RequestWorldInfo_Response>::value
  >
{
};

template<>
struct is_service<pyrobosim_msgs::srv::RequestWorldInfo>
  : std::true_type
{
};

template<>
struct is_service_request<pyrobosim_msgs::srv::RequestWorldInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pyrobosim_msgs::srv::RequestWorldInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__TRAITS_HPP_
