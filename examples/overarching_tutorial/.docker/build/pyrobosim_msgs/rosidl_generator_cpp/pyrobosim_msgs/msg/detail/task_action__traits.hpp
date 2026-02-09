// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/TaskAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/task_action.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/task_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'path'
#include "pyrobosim_msgs/msg/detail/path__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot
  {
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: object
  {
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << ", ";
  }

  // member: room
  {
    out << "room: ";
    rosidl_generator_traits::value_to_yaml(msg.room, out);
    out << ", ";
  }

  // member: source_location
  {
    out << "source_location: ";
    rosidl_generator_traits::value_to_yaml(msg.source_location, out);
    out << ", ";
  }

  // member: target_location
  {
    out << "target_location: ";
    rosidl_generator_traits::value_to_yaml(msg.target_location, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: has_pose
  {
    out << "has_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.has_pose, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << "\n";
  }

  // member: room
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "room: ";
    rosidl_generator_traits::value_to_yaml(msg.room, out);
    out << "\n";
  }

  // member: source_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_location: ";
    rosidl_generator_traits::value_to_yaml(msg.source_location, out);
    out << "\n";
  }

  // member: target_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_location: ";
    rosidl_generator_traits::value_to_yaml(msg.target_location, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }

  // member: has_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.has_pose, out);
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

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskAction & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::TaskAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::TaskAction & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::TaskAction>()
{
  return "pyrobosim_msgs::msg::TaskAction";
}

template<>
inline const char * name<pyrobosim_msgs::msg::TaskAction>()
{
  return "pyrobosim_msgs/msg/TaskAction";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::TaskAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::TaskAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::TaskAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__TRAITS_HPP_
