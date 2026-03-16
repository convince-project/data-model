// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from overarching_msgs:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "overarching_msgs/msg/location.hpp"


#ifndef OVERARCHING_MSGS__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define OVERARCHING_MSGS__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "overarching_msgs/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace overarching_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Location & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: parent
  {
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: parent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Location & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace overarching_msgs

namespace rosidl_generator_traits
{

[[deprecated("use overarching_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const overarching_msgs::msg::Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  overarching_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use overarching_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const overarching_msgs::msg::Location & msg)
{
  return overarching_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<overarching_msgs::msg::Location>()
{
  return "overarching_msgs::msg::Location";
}

template<>
inline const char * name<overarching_msgs::msg::Location>()
{
  return "overarching_msgs/msg/Location";
}

template<>
struct has_fixed_size<overarching_msgs::msg::Location>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<overarching_msgs::msg::Location>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<overarching_msgs::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OVERARCHING_MSGS__MSG__DETAIL__LOCATION__TRAITS_HPP_
