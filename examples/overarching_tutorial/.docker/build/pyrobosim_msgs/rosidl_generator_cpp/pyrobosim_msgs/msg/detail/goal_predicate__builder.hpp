// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/GoalPredicate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_predicate.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/goal_predicate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_GoalPredicate_args
{
public:
  explicit Init_GoalPredicate_args(::pyrobosim_msgs::msg::GoalPredicate & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::GoalPredicate args(::pyrobosim_msgs::msg::GoalPredicate::_args_type arg)
  {
    msg_.args = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::GoalPredicate msg_;
};

class Init_GoalPredicate_type
{
public:
  Init_GoalPredicate_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalPredicate_args type(::pyrobosim_msgs::msg::GoalPredicate::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GoalPredicate_args(msg_);
  }

private:
  ::pyrobosim_msgs::msg::GoalPredicate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::GoalPredicate>()
{
  return pyrobosim_msgs::msg::builder::Init_GoalPredicate_type();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__BUILDER_HPP_
