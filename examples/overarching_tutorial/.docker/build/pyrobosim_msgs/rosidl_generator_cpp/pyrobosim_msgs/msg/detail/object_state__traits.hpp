// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/ObjectState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/object_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/object_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << ", ";
  }

  // member: parent
  {
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectState & msg, bool use_flow_style = false)
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

}  // namespace pyrobosim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pyrobosim_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pyrobosim_msgs::msg::ObjectState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::ObjectState & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::ObjectState>()
{
  return "pyrobosim_msgs::msg::ObjectState";
}

template<>
inline const char * name<pyrobosim_msgs::msg::ObjectState>()
{
  return "pyrobosim_msgs/msg/ObjectState";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::ObjectState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::ObjectState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::ObjectState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__TRAITS_HPP_
