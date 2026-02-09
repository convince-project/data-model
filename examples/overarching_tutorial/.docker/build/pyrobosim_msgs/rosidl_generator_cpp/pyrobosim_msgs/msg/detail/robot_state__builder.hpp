// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/robot_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_last_visited_location
{
public:
  explicit Init_RobotState_last_visited_location(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::RobotState last_visited_location(::pyrobosim_msgs::msg::RobotState::_last_visited_location_type arg)
  {
    msg_.last_visited_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_manipulated_object
{
public:
  explicit Init_RobotState_manipulated_object(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_last_visited_location manipulated_object(::pyrobosim_msgs::msg::RobotState::_manipulated_object_type arg)
  {
    msg_.manipulated_object = std::move(arg);
    return Init_RobotState_last_visited_location(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_holding_object
{
public:
  explicit Init_RobotState_holding_object(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_manipulated_object holding_object(::pyrobosim_msgs::msg::RobotState::_holding_object_type arg)
  {
    msg_.holding_object = std::move(arg);
    return Init_RobotState_manipulated_object(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_executing_action
{
public:
  explicit Init_RobotState_executing_action(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_holding_object executing_action(::pyrobosim_msgs::msg::RobotState::_executing_action_type arg)
  {
    msg_.executing_action = std::move(arg);
    return Init_RobotState_holding_object(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_battery_level
{
public:
  explicit Init_RobotState_battery_level(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_executing_action battery_level(::pyrobosim_msgs::msg::RobotState::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_RobotState_executing_action(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_pose
{
public:
  explicit Init_RobotState_pose(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_battery_level pose(::pyrobosim_msgs::msg::RobotState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotState_battery_level(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_name
{
public:
  explicit Init_RobotState_name(::pyrobosim_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_pose name(::pyrobosim_msgs::msg::RobotState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RobotState_pose(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

class Init_RobotState_header
{
public:
  Init_RobotState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_name header(::pyrobosim_msgs::msg::RobotState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotState_name(msg_);
  }

private:
  ::pyrobosim_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::RobotState>()
{
  return pyrobosim_msgs::msg::builder::Init_RobotState_header();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
