// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/world_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robots'
#include "pyrobosim_msgs/msg/detail/robot_state__traits.hpp"
// Member 'locations'
#include "pyrobosim_msgs/msg/detail/location_state__traits.hpp"
// Member 'hallways'
#include "pyrobosim_msgs/msg/detail/hallway_state__traits.hpp"
// Member 'objects'
#include "pyrobosim_msgs/msg/detail/object_state__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldState & msg,
  std::ostream & out)
{
  out << "{";
  // member: robots
  {
    if (msg.robots.size() == 0) {
      out << "robots: []";
    } else {
      out << "robots: [";
      size_t pending_items = msg.robots.size();
      for (auto item : msg.robots) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: locations
  {
    if (msg.locations.size() == 0) {
      out << "locations: []";
    } else {
      out << "locations: [";
      size_t pending_items = msg.locations.size();
      for (auto item : msg.locations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hallways
  {
    if (msg.hallways.size() == 0) {
      out << "hallways: []";
    } else {
      out << "hallways: [";
      size_t pending_items = msg.hallways.size();
      for (auto item : msg.hallways) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
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
  const WorldState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robots.size() == 0) {
      out << "robots: []\n";
    } else {
      out << "robots:\n";
      for (auto item : msg.robots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: locations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.locations.size() == 0) {
      out << "locations: []\n";
    } else {
      out << "locations:\n";
      for (auto item : msg.locations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: hallways
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hallways.size() == 0) {
      out << "hallways: []\n";
    } else {
      out << "hallways:\n";
      for (auto item : msg.hallways) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldState & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::WorldState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::WorldState & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::WorldState>()
{
  return "pyrobosim_msgs::msg::WorldState";
}

template<>
inline const char * name<pyrobosim_msgs::msg::WorldState>()
{
  return "pyrobosim_msgs/msg/WorldState";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::WorldState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::WorldState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::WorldState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_
