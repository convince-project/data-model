// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:srv/SetLocationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/set_location_state.hpp"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/srv/detail/set_location_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pyrobosim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLocationState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: location_name
  {
    out << "location_name: ";
    rosidl_generator_traits::value_to_yaml(msg.location_name, out);
    out << ", ";
  }

  // member: open
  {
    out << "open: ";
    rosidl_generator_traits::value_to_yaml(msg.open, out);
    out << ", ";
  }

  // member: lock
  {
    out << "lock: ";
    rosidl_generator_traits::value_to_yaml(msg.lock, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLocationState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_name: ";
    rosidl_generator_traits::value_to_yaml(msg.location_name, out);
    out << "\n";
  }

  // member: open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open: ";
    rosidl_generator_traits::value_to_yaml(msg.open, out);
    out << "\n";
  }

  // member: lock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lock: ";
    rosidl_generator_traits::value_to_yaml(msg.lock, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLocationState_Request & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::srv::SetLocationState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::srv::SetLocationState_Request & msg)
{
  return pyrobosim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::srv::SetLocationState_Request>()
{
  return "pyrobosim_msgs::srv::SetLocationState_Request";
}

template<>
inline const char * name<pyrobosim_msgs::srv::SetLocationState_Request>()
{
  return "pyrobosim_msgs/srv/SetLocationState_Request";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::SetLocationState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::srv::SetLocationState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "pyrobosim_msgs/msg/detail/execution_result__traits.hpp"

namespace pyrobosim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLocationState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLocationState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLocationState_Response & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::srv::SetLocationState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::srv::SetLocationState_Response & msg)
{
  return pyrobosim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::srv::SetLocationState_Response>()
{
  return "pyrobosim_msgs::srv::SetLocationState_Response";
}

template<>
inline const char * name<pyrobosim_msgs::srv::SetLocationState_Response>()
{
  return "pyrobosim_msgs/srv/SetLocationState_Response";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::SetLocationState_Response>
  : std::integral_constant<bool, has_fixed_size<pyrobosim_msgs::msg::ExecutionResult>::value> {};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Response>
  : std::integral_constant<bool, has_bounded_size<pyrobosim_msgs::msg::ExecutionResult>::value> {};

template<>
struct is_message<pyrobosim_msgs::srv::SetLocationState_Response>
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
  const SetLocationState_Event & msg,
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
  const SetLocationState_Event & msg,
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

inline std::string to_yaml(const SetLocationState_Event & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::srv::SetLocationState_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::srv::SetLocationState_Event & msg)
{
  return pyrobosim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::srv::SetLocationState_Event>()
{
  return "pyrobosim_msgs::srv::SetLocationState_Event";
}

template<>
inline const char * name<pyrobosim_msgs::srv::SetLocationState_Event>()
{
  return "pyrobosim_msgs/srv/SetLocationState_Event";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::SetLocationState_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Event>
  : std::integral_constant<bool, has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Request>::value && has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<pyrobosim_msgs::srv::SetLocationState_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pyrobosim_msgs::srv::SetLocationState>()
{
  return "pyrobosim_msgs::srv::SetLocationState";
}

template<>
inline const char * name<pyrobosim_msgs::srv::SetLocationState>()
{
  return "pyrobosim_msgs/srv/SetLocationState";
}

template<>
struct has_fixed_size<pyrobosim_msgs::srv::SetLocationState>
  : std::integral_constant<
    bool,
    has_fixed_size<pyrobosim_msgs::srv::SetLocationState_Request>::value &&
    has_fixed_size<pyrobosim_msgs::srv::SetLocationState_Response>::value
  >
{
};

template<>
struct has_bounded_size<pyrobosim_msgs::srv::SetLocationState>
  : std::integral_constant<
    bool,
    has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Request>::value &&
    has_bounded_size<pyrobosim_msgs::srv::SetLocationState_Response>::value
  >
{
};

template<>
struct is_service<pyrobosim_msgs::srv::SetLocationState>
  : std::true_type
{
};

template<>
struct is_service_request<pyrobosim_msgs::srv::SetLocationState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pyrobosim_msgs::srv::SetLocationState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__TRAITS_HPP_
