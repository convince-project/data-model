// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/TaskAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/task_action.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/task_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskAction_path
{
public:
  explicit Init_TaskAction_path(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::TaskAction path(::pyrobosim_msgs::msg::TaskAction::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_pose
{
public:
  explicit Init_TaskAction_pose(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_path pose(::pyrobosim_msgs::msg::TaskAction::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TaskAction_path(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_has_pose
{
public:
  explicit Init_TaskAction_has_pose(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_pose has_pose(::pyrobosim_msgs::msg::TaskAction::_has_pose_type arg)
  {
    msg_.has_pose = std::move(arg);
    return Init_TaskAction_pose(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_cost
{
public:
  explicit Init_TaskAction_cost(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_has_pose cost(::pyrobosim_msgs::msg::TaskAction::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_TaskAction_has_pose(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_target_location
{
public:
  explicit Init_TaskAction_target_location(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_cost target_location(::pyrobosim_msgs::msg::TaskAction::_target_location_type arg)
  {
    msg_.target_location = std::move(arg);
    return Init_TaskAction_cost(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_source_location
{
public:
  explicit Init_TaskAction_source_location(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_target_location source_location(::pyrobosim_msgs::msg::TaskAction::_source_location_type arg)
  {
    msg_.source_location = std::move(arg);
    return Init_TaskAction_target_location(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_room
{
public:
  explicit Init_TaskAction_room(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_source_location room(::pyrobosim_msgs::msg::TaskAction::_room_type arg)
  {
    msg_.room = std::move(arg);
    return Init_TaskAction_source_location(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_object
{
public:
  explicit Init_TaskAction_object(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_room object(::pyrobosim_msgs::msg::TaskAction::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_TaskAction_room(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_type
{
public:
  explicit Init_TaskAction_type(::pyrobosim_msgs::msg::TaskAction & msg)
  : msg_(msg)
  {}
  Init_TaskAction_object type(::pyrobosim_msgs::msg::TaskAction::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TaskAction_object(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

class Init_TaskAction_robot
{
public:
  Init_TaskAction_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskAction_type robot(::pyrobosim_msgs::msg::TaskAction::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_TaskAction_type(msg_);
  }

private:
  ::pyrobosim_msgs::msg::TaskAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::TaskAction>()
{
  return pyrobosim_msgs::msg::builder::Init_TaskAction_robot();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_ACTION__BUILDER_HPP_
