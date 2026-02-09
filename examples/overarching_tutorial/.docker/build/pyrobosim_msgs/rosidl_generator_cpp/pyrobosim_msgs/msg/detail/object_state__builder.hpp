// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/ObjectState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/object_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/object_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectState_pose
{
public:
  explicit Init_ObjectState_pose(::pyrobosim_msgs::msg::ObjectState & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::ObjectState pose(::pyrobosim_msgs::msg::ObjectState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::ObjectState msg_;
};

class Init_ObjectState_parent
{
public:
  explicit Init_ObjectState_parent(::pyrobosim_msgs::msg::ObjectState & msg)
  : msg_(msg)
  {}
  Init_ObjectState_pose parent(::pyrobosim_msgs::msg::ObjectState::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_ObjectState_pose(msg_);
  }

private:
  ::pyrobosim_msgs::msg::ObjectState msg_;
};

class Init_ObjectState_category
{
public:
  explicit Init_ObjectState_category(::pyrobosim_msgs::msg::ObjectState & msg)
  : msg_(msg)
  {}
  Init_ObjectState_parent category(::pyrobosim_msgs::msg::ObjectState::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_ObjectState_parent(msg_);
  }

private:
  ::pyrobosim_msgs::msg::ObjectState msg_;
};

class Init_ObjectState_name
{
public:
  Init_ObjectState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectState_category name(::pyrobosim_msgs::msg::ObjectState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObjectState_category(msg_);
  }

private:
  ::pyrobosim_msgs::msg::ObjectState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::ObjectState>()
{
  return pyrobosim_msgs::msg::builder::Init_ObjectState_name();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__BUILDER_HPP_
