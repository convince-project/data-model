// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_specification.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/goal_specification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalSpecification_predicates
{
public:
  Init_GoalSpecification_predicates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::msg::GoalSpecification predicates(::pyrobosim_msgs::msg::GoalSpecification::_predicates_type arg)
  {
    msg_.predicates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::GoalSpecification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::GoalSpecification>()
{
  return pyrobosim_msgs::msg::builder::Init_GoalSpecification_predicates();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__BUILDER_HPP_
