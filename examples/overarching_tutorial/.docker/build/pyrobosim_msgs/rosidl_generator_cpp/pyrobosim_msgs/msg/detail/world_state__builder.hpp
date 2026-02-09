// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/world_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldState_objects
{
public:
  explicit Init_WorldState_objects(::pyrobosim_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::WorldState objects(::pyrobosim_msgs::msg::WorldState::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldState msg_;
};

class Init_WorldState_hallways
{
public:
  explicit Init_WorldState_hallways(::pyrobosim_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_objects hallways(::pyrobosim_msgs::msg::WorldState::_hallways_type arg)
  {
    msg_.hallways = std::move(arg);
    return Init_WorldState_objects(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldState msg_;
};

class Init_WorldState_locations
{
public:
  explicit Init_WorldState_locations(::pyrobosim_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_hallways locations(::pyrobosim_msgs::msg::WorldState::_locations_type arg)
  {
    msg_.locations = std::move(arg);
    return Init_WorldState_hallways(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldState msg_;
};

class Init_WorldState_robots
{
public:
  Init_WorldState_robots()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldState_locations robots(::pyrobosim_msgs::msg::WorldState::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_WorldState_locations(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::WorldState>()
{
  return pyrobosim_msgs::msg::builder::Init_WorldState_robots();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_
