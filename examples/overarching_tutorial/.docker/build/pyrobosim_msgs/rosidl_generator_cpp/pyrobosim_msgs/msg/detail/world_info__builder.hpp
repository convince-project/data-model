// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/WorldInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_info.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/world_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldInfo_object_categories
{
public:
  explicit Init_WorldInfo_object_categories(::pyrobosim_msgs::msg::WorldInfo & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::WorldInfo object_categories(::pyrobosim_msgs::msg::WorldInfo::_object_categories_type arg)
  {
    msg_.object_categories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldInfo msg_;
};

class Init_WorldInfo_location_categories
{
public:
  explicit Init_WorldInfo_location_categories(::pyrobosim_msgs::msg::WorldInfo & msg)
  : msg_(msg)
  {}
  Init_WorldInfo_object_categories location_categories(::pyrobosim_msgs::msg::WorldInfo::_location_categories_type arg)
  {
    msg_.location_categories = std::move(arg);
    return Init_WorldInfo_object_categories(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldInfo msg_;
};

class Init_WorldInfo_name
{
public:
  Init_WorldInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldInfo_location_categories name(::pyrobosim_msgs::msg::WorldInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WorldInfo_location_categories(msg_);
  }

private:
  ::pyrobosim_msgs::msg::WorldInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::WorldInfo>()
{
  return pyrobosim_msgs::msg::builder::Init_WorldInfo_name();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_INFO__BUILDER_HPP_
