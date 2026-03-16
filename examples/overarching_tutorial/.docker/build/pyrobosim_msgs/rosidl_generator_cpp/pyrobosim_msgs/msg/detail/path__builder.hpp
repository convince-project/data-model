// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/Path.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/path.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_length
{
public:
  explicit Init_Path_length(::pyrobosim_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::Path length(::pyrobosim_msgs::msg::Path::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::Path msg_;
};

class Init_Path_poses
{
public:
  Init_Path_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_length poses(::pyrobosim_msgs::msg::Path::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_Path_length(msg_);
  }

private:
  ::pyrobosim_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::Path>()
{
  return pyrobosim_msgs::msg::builder::Init_Path_poses();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
