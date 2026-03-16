// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/robot_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: executing_action
  {
    out << "executing_action: ";
    rosidl_generator_traits::value_to_yaml(msg.executing_action, out);
    out << ", ";
  }

  // member: holding_object
  {
    out << "holding_object: ";
    rosidl_generator_traits::value_to_yaml(msg.holding_object, out);
    out << ", ";
  }

  // member: manipulated_object
  {
    out << "manipulated_object: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulated_object, out);
    out << ", ";
  }

  // member: last_visited_location
  {
    out << "last_visited_location: ";
    rosidl_generator_traits::value_to_yaml(msg.last_visited_location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
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

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: executing_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executing_action: ";
    rosidl_generator_traits::value_to_yaml(msg.executing_action, out);
    out << "\n";
  }

  // member: holding_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "holding_object: ";
    rosidl_generator_traits::value_to_yaml(msg.holding_object, out);
    out << "\n";
  }

  // member: manipulated_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulated_object: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulated_object, out);
    out << "\n";
  }

  // member: last_visited_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_visited_location: ";
    rosidl_generator_traits::value_to_yaml(msg.last_visited_location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::RobotState & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::RobotState>()
{
  return "pyrobosim_msgs::msg::RobotState";
}

template<>
inline const char * name<pyrobosim_msgs::msg::RobotState>()
{
  return "pyrobosim_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
