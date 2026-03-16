// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/HallwayState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/hallway_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/hallway_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_HallwayState_is_locked
{
public:
  explicit Init_HallwayState_is_locked(::pyrobosim_msgs::msg::HallwayState & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::HallwayState is_locked(::pyrobosim_msgs::msg::HallwayState::_is_locked_type arg)
  {
    msg_.is_locked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::HallwayState msg_;
};

class Init_HallwayState_is_open
{
public:
  explicit Init_HallwayState_is_open(::pyrobosim_msgs::msg::HallwayState & msg)
  : msg_(msg)
  {}
  Init_HallwayState_is_locked is_open(::pyrobosim_msgs::msg::HallwayState::_is_open_type arg)
  {
    msg_.is_open = std::move(arg);
    return Init_HallwayState_is_locked(msg_);
  }

private:
  ::pyrobosim_msgs::msg::HallwayState msg_;
};

class Init_HallwayState_room_end
{
public:
  explicit Init_HallwayState_room_end(::pyrobosim_msgs::msg::HallwayState & msg)
  : msg_(msg)
  {}
  Init_HallwayState_is_open room_end(::pyrobosim_msgs::msg::HallwayState::_room_end_type arg)
  {
    msg_.room_end = std::move(arg);
    return Init_HallwayState_is_open(msg_);
  }

private:
  ::pyrobosim_msgs::msg::HallwayState msg_;
};

class Init_HallwayState_room_start
{
public:
  explicit Init_HallwayState_room_start(::pyrobosim_msgs::msg::HallwayState & msg)
  : msg_(msg)
  {}
  Init_HallwayState_room_end room_start(::pyrobosim_msgs::msg::HallwayState::_room_start_type arg)
  {
    msg_.room_start = std::move(arg);
    return Init_HallwayState_room_end(msg_);
  }

private:
  ::pyrobosim_msgs::msg::HallwayState msg_;
};

class Init_HallwayState_name
{
public:
  Init_HallwayState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HallwayState_room_start name(::pyrobosim_msgs::msg::HallwayState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HallwayState_room_start(msg_);
  }

private:
  ::pyrobosim_msgs::msg::HallwayState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::HallwayState>()
{
  return pyrobosim_msgs::msg::builder::Init_HallwayState_name();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__BUILDER_HPP_
