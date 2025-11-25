// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__TRAITS_HPP_
#define NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigation_interfaces_dummy/msg/detail/navigation_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigation_interfaces_dummy
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationStatus & msg, bool use_flow_style = false)
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

}  // namespace navigation_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use navigation_interfaces_dummy::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigation_interfaces_dummy::msg::NavigationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigation_interfaces_dummy::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigation_interfaces_dummy::msg::to_yaml() instead")]]
inline std::string to_yaml(const navigation_interfaces_dummy::msg::NavigationStatus & msg)
{
  return navigation_interfaces_dummy::msg::to_yaml(msg);
}

template<>
inline const char * data_type<navigation_interfaces_dummy::msg::NavigationStatus>()
{
  return "navigation_interfaces_dummy::msg::NavigationStatus";
}

template<>
inline const char * name<navigation_interfaces_dummy::msg::NavigationStatus>()
{
  return "navigation_interfaces_dummy/msg/NavigationStatus";
}

template<>
struct has_fixed_size<navigation_interfaces_dummy::msg::NavigationStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigation_interfaces_dummy::msg::NavigationStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigation_interfaces_dummy::msg::NavigationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__TRAITS_HPP_
