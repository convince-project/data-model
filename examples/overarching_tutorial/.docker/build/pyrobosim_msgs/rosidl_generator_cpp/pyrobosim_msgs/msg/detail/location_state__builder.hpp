// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/LocationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/location_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__LOCATION_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__LOCATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/location_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationState_is_locked
{
public:
  explicit Init_LocationState_is_locked(::pyrobosim_msgs::msg::LocationState & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::LocationState is_locked(::pyrobosim_msgs::msg::LocationState::_is_locked_type arg)
  {
    msg_.is_locked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

class Init_LocationState_is_open
{
public:
  explicit Init_LocationState_is_open(::pyrobosim_msgs::msg::LocationState & msg)
  : msg_(msg)
  {}
  Init_LocationState_is_locked is_open(::pyrobosim_msgs::msg::LocationState::_is_open_type arg)
  {
    msg_.is_open = std::move(arg);
    return Init_LocationState_is_locked(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

class Init_LocationState_pose
{
public:
  explicit Init_LocationState_pose(::pyrobosim_msgs::msg::LocationState & msg)
  : msg_(msg)
  {}
  Init_LocationState_is_open pose(::pyrobosim_msgs::msg::LocationState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LocationState_is_open(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

class Init_LocationState_parent
{
public:
  explicit Init_LocationState_parent(::pyrobosim_msgs::msg::LocationState & msg)
  : msg_(msg)
  {}
  Init_LocationState_pose parent(::pyrobosim_msgs::msg::LocationState::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_LocationState_pose(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

class Init_LocationState_spawns
{
public:
  explicit Init_LocationState_spawns(::pyrobosim_msgs::msg::LocationState & msg)
  : msg_(msg)
  {}
  Init_LocationState_parent spawns(::pyrobosim_msgs::msg::LocationState::_spawns_type arg)
  {
    msg_.spawns = std::move(arg);
    return Init_LocationState_parent(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

class Init_LocationState_category
{
public:
  explicit Init_LocationState_category(::pyrobosim_msgs::msg::LocationState & msg)
  : msg_(msg)
  {}
  Init_LocationState_spawns category(::pyrobosim_msgs::msg::LocationState::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_LocationState_spawns(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

class Init_LocationState_name
{
public:
  Init_LocationState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationState_category name(::pyrobosim_msgs::msg::LocationState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_LocationState_category(msg_);
  }

private:
  ::pyrobosim_msgs::msg::LocationState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::LocationState>()
{
  return pyrobosim_msgs::msg::builder::Init_LocationState_name();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__LOCATION_STATE__BUILDER_HPP_
