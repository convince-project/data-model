// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/GoalPredicate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_predicate.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/goal_predicate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalPredicate & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: args
  {
    if (msg.args.size() == 0) {
      out << "args: []";
    } else {
      out << "args: [";
      size_t pending_items = msg.args.size();
      for (auto item : msg.args) {
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
  const GoalPredicate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: args
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.args.size() == 0) {
      out << "args: []\n";
    } else {
      out << "args:\n";
      for (auto item : msg.args) {
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

inline std::string to_yaml(const GoalPredicate & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::GoalPredicate & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::GoalPredicate & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::GoalPredicate>()
{
  return "pyrobosim_msgs::msg::GoalPredicate";
}

template<>
inline const char * name<pyrobosim_msgs::msg::GoalPredicate>()
{
  return "pyrobosim_msgs/msg/GoalPredicate";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::GoalPredicate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::GoalPredicate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::GoalPredicate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__TRAITS_HPP_
