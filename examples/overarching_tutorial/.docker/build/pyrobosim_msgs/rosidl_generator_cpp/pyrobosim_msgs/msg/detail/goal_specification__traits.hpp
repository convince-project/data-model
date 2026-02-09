// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_specification.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__TRAITS_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pyrobosim_msgs/msg/detail/goal_specification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'predicates'
#include "pyrobosim_msgs/msg/detail/goal_predicate__traits.hpp"

namespace pyrobosim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GoalSpecification & msg,
  std::ostream & out)
{
  out << "{";
  // member: predicates
  {
    if (msg.predicates.size() == 0) {
      out << "predicates: []";
    } else {
      out << "predicates: [";
      size_t pending_items = msg.predicates.size();
      for (auto item : msg.predicates) {
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
  const GoalSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: predicates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicates.size() == 0) {
      out << "predicates: []\n";
    } else {
      out << "predicates:\n";
      for (auto item : msg.predicates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoalSpecification & msg, bool use_flow_style = false)
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
  const pyrobosim_msgs::msg::GoalSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  pyrobosim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pyrobosim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pyrobosim_msgs::msg::GoalSpecification & msg)
{
  return pyrobosim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pyrobosim_msgs::msg::GoalSpecification>()
{
  return "pyrobosim_msgs::msg::GoalSpecification";
}

template<>
inline const char * name<pyrobosim_msgs::msg::GoalSpecification>()
{
  return "pyrobosim_msgs/msg/GoalSpecification";
}

template<>
struct has_fixed_size<pyrobosim_msgs::msg::GoalSpecification>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pyrobosim_msgs::msg::GoalSpecification>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pyrobosim_msgs::msg::GoalSpecification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__TRAITS_HPP_
