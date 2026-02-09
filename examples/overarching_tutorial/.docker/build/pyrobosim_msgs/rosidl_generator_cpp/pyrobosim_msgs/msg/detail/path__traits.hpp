// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/path.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Path & msg,
  std::ostream & out)
{
  out << "{";
  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Path & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::Path & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::Path & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::Path>()
{
  return "pyrobosim_msgs::msg::Path";
}

template<>
inline const char * name<pyrobosim_msgs::msg::Path>()
{
  return "pyrobosim_msgs/msg/Path";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::Path>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::Path>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::Path>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_
