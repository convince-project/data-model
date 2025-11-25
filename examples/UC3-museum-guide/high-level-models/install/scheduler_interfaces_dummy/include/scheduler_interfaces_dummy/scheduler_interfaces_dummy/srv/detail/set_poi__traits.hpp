// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from scheduler_interfaces_dummy:srv/SetPoi.idl
// generated code does not contain a copyright notice

#ifndef SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__TRAITS_HPP_
#define SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "scheduler_interfaces_dummy/srv/detail/set_poi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace scheduler_interfaces_dummy
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPoi_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: poi_number
  {
    out << "poi_number: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPoi_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poi_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poi_number: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPoi_Request & msg, bool use_flow_style = false)
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

}  // namespace scheduler_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use scheduler_interfaces_dummy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scheduler_interfaces_dummy::srv::SetPoi_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  scheduler_interfaces_dummy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scheduler_interfaces_dummy::srv::to_yaml() instead")]]
inline std::string to_yaml(const scheduler_interfaces_dummy::srv::SetPoi_Request & msg)
{
  return scheduler_interfaces_dummy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scheduler_interfaces_dummy::srv::SetPoi_Request>()
{
  return "scheduler_interfaces_dummy::srv::SetPoi_Request";
}

template<>
inline const char * name<scheduler_interfaces_dummy::srv::SetPoi_Request>()
{
  return "scheduler_interfaces_dummy/srv/SetPoi_Request";
}

template<>
struct has_fixed_size<scheduler_interfaces_dummy::srv::SetPoi_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scheduler_interfaces_dummy::srv::SetPoi_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace scheduler_interfaces_dummy
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPoi_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_ok
  {
    out << "is_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPoi_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const SetPoi_Response & msg, bool use_flow_style = false)
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

}  // namespace scheduler_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use scheduler_interfaces_dummy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scheduler_interfaces_dummy::srv::SetPoi_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  scheduler_interfaces_dummy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scheduler_interfaces_dummy::srv::to_yaml() instead")]]
inline std::string to_yaml(const scheduler_interfaces_dummy::srv::SetPoi_Response & msg)
{
  return scheduler_interfaces_dummy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scheduler_interfaces_dummy::srv::SetPoi_Response>()
{
  return "scheduler_interfaces_dummy::srv::SetPoi_Response";
}

template<>
inline const char * name<scheduler_interfaces_dummy::srv::SetPoi_Response>()
{
  return "scheduler_interfaces_dummy/srv/SetPoi_Response";
}

template<>
struct has_fixed_size<scheduler_interfaces_dummy::srv::SetPoi_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<scheduler_interfaces_dummy::srv::SetPoi_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace scheduler_interfaces_dummy
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPoi_Event & msg,
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
  const SetPoi_Event & msg,
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

inline std::string to_yaml(const SetPoi_Event & msg, bool use_flow_style = false)
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

}  // namespace scheduler_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use scheduler_interfaces_dummy::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const scheduler_interfaces_dummy::srv::SetPoi_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  scheduler_interfaces_dummy::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use scheduler_interfaces_dummy::srv::to_yaml() instead")]]
inline std::string to_yaml(const scheduler_interfaces_dummy::srv::SetPoi_Event & msg)
{
  return scheduler_interfaces_dummy::srv::to_yaml(msg);
}

template<>
inline const char * data_type<scheduler_interfaces_dummy::srv::SetPoi_Event>()
{
  return "scheduler_interfaces_dummy::srv::SetPoi_Event";
}

template<>
inline const char * name<scheduler_interfaces_dummy::srv::SetPoi_Event>()
{
  return "scheduler_interfaces_dummy/srv/SetPoi_Event";
}

template<>
struct has_fixed_size<scheduler_interfaces_dummy::srv::SetPoi_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Event>
  : std::integral_constant<bool, has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Request>::value && has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<scheduler_interfaces_dummy::srv::SetPoi_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<scheduler_interfaces_dummy::srv::SetPoi>()
{
  return "scheduler_interfaces_dummy::srv::SetPoi";
}

template<>
inline const char * name<scheduler_interfaces_dummy::srv::SetPoi>()
{
  return "scheduler_interfaces_dummy/srv/SetPoi";
}

template<>
struct has_fixed_size<scheduler_interfaces_dummy::srv::SetPoi>
  : std::integral_constant<
    bool,
    has_fixed_size<scheduler_interfaces_dummy::srv::SetPoi_Request>::value &&
    has_fixed_size<scheduler_interfaces_dummy::srv::SetPoi_Response>::value
  >
{
};

template<>
struct has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi>
  : std::integral_constant<
    bool,
    has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Request>::value &&
    has_bounded_size<scheduler_interfaces_dummy::srv::SetPoi_Response>::value
  >
{
};

template<>
struct is_service<scheduler_interfaces_dummy::srv::SetPoi>
  : std::true_type
{
};

template<>
struct is_service_request<scheduler_interfaces_dummy::srv::SetPoi_Request>
  : std::true_type
{
};

template<>
struct is_service_response<scheduler_interfaces_dummy::srv::SetPoi_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__TRAITS_HPP_
