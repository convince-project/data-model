// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/LocationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/location_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__LOCATION_STATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__LOCATION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/location_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocationState & msg,
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

  // member: spawns
  {
    if (msg.spawns.size() == 0) {
      out << "spawns: []";
    } else {
      out << "spawns: [";
      size_t pending_items = msg.spawns.size();
      for (auto item : msg.spawns) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const LocationState & msg,
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

  // member: spawns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spawns.size() == 0) {
      out << "spawns: []\n";
    } else {
      out << "spawns:\n";
      for (auto item : msg.spawns) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const LocationState & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::LocationState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::LocationState & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::LocationState>()
{
  return "pyrobosim_msgs::msg::LocationState";
}

template<>
inline const char * name<pyrobosim_msgs::msg::LocationState>()
{
  return "pyrobosim_msgs/msg/LocationState";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::LocationState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::LocationState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::LocationState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__LOCATION_STATE__TRAITS_HPP_
