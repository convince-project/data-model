// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/WorldInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_info.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/world_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: location_categories
  {
    if (msg.location_categories.size() == 0) {
      out << "location_categories: []";
    } else {
      out << "location_categories: [";
      size_t pending_items = msg.location_categories.size();
      for (auto item : msg.location_categories) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_categories
  {
    if (msg.object_categories.size() == 0) {
      out << "object_categories: []";
    } else {
      out << "object_categories: [";
      size_t pending_items = msg.object_categories.size();
      for (auto item : msg.object_categories) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const WorldInfo & msg,
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

  // member: location_categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.location_categories.size() == 0) {
      out << "location_categories: []\n";
    } else {
      out << "location_categories:\n";
      for (auto item : msg.location_categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_categories.size() == 0) {
      out << "object_categories: []\n";
    } else {
      out << "object_categories:\n";
      for (auto item : msg.object_categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldInfo & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::WorldInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::WorldInfo & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::WorldInfo>()
{
  return "pyrobosim_msgs::msg::WorldInfo";
}

template<>
inline const char * name<pyrobosim_msgs::msg::WorldInfo>()
{
  return "pyrobosim_msgs/msg/WorldInfo";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::WorldInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::WorldInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::WorldInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__TRAITS_HPP_
