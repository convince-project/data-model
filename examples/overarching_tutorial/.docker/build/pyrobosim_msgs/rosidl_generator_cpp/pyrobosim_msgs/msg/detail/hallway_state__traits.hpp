// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/HallwayState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/hallway_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/hallway_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HallwayState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: room_start
  {
    out << "room_start: ";
    rosidl_generator_traits::value_to_yaml(msg.room_start, out);
    out << ", ";
  }

  // member: room_end
  {
    out << "room_end: ";
    rosidl_generator_traits::value_to_yaml(msg.room_end, out);
    out << ", ";
  }

  // member: is_open
  {
    out << "is_open: ";
    rosidl_generator_traits::value_to_yaml(msg.is_open, out);
    out << ", ";
  }

  // member: is_locked
  {
    out << "is_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_locked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HallwayState & msg,
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

  // member: room_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room_start: ";
    rosidl_generator_traits::value_to_yaml(msg.room_start, out);
    out << "\n";
  }

  // member: room_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room_end: ";
    rosidl_generator_traits::value_to_yaml(msg.room_end, out);
    out << "\n";
  }

  // member: is_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_open: ";
    rosidl_generator_traits::value_to_yaml(msg.is_open, out);
    out << "\n";
  }

  // member: is_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_locked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HallwayState & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::HallwayState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::HallwayState & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::HallwayState>()
{
  return "pyrobosim_msgs::msg::HallwayState";
}

template<>
inline const char * name<pyrobosim_msgs::msg::HallwayState>()
{
  return "pyrobosim_msgs/msg/HallwayState";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::HallwayState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::HallwayState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::HallwayState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__TRAITS_HPP_
