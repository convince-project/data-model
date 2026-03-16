// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/TaskPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/task_plan.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/task_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskPlan_cost
{
public:
  explicit Init_TaskPlan_cost(::pyrobosim_msgs::msg::TaskPlan & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::TaskPlan cost(::pyrobosim_msgs::msg::TaskPlan::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskPlan msg_;
};

class Init_TaskPlan_actions
{
public:
  explicit Init_TaskPlan_actions(::pyrobosim_msgs::msg::TaskPlan & msg)
  : msg_(msg)
  {}
  Init_TaskPlan_cost actions(::pyrobosim_msgs::msg::TaskPlan::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return Init_TaskPlan_cost(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskPlan msg_;
};

class Init_TaskPlan_robot
{
public:
  Init_TaskPlan_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskPlan_actions robot(::pyrobosim_msgs::msg::TaskPlan::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_TaskPlan_actions(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::TaskPlan>()
{
  return pyrobosim_msgs::msg::builder::Init_TaskPlan_robot();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__BUILDER_HPP_
