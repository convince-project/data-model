// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bt_interfaces_dummy/msg/action_response.hpp"


#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__TRAITS_HPP_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bt_interfaces_dummy/msg/detail/action_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bt_interfaces_dummy
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionResponse & msg,
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
  const ActionResponse & msg,
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

inline std::string to_yaml(const ActionResponse & msg, bool use_flow_style = false)
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

}  // namespace bt_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use bt_interfaces_dummy::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_interfaces_dummy::msg::ActionResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_interfaces_dummy::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_interfaces_dummy::msg::to_yaml() instead")]]
inline std::string to_yaml(const bt_interfaces_dummy::msg::ActionResponse & msg)
{
  return bt_interfaces_dummy::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bt_interfaces_dummy::msg::ActionResponse>()
{
  return "bt_interfaces_dummy::msg::ActionResponse";
}

template<>
inline const char * name<bt_interfaces_dummy::msg::ActionResponse>()
{
  return "bt_interfaces_dummy/msg/ActionResponse";
}

template<>
struct has_fixed_size<bt_interfaces_dummy::msg::ActionResponse>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_interfaces_dummy::msg::ActionResponse>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_interfaces_dummy::msg::ActionResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__TRAITS_HPP_
