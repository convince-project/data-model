// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from overarching_msgs:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "overarching_msgs/msg/location.hpp"


#ifndef OVERARCHING_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define OVERARCHING_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "overarching_msgs/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace overarching_msgs
{

namespace msg
{

namespace builder
{

class Init_Location_parent
{
public:
  explicit Init_Location_parent(::overarching_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::msg::Location parent(::overarching_msgs::msg::Location::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::msg::Location msg_;
};

class Init_Location_y
{
public:
  explicit Init_Location_y(::overarching_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_parent y(::overarching_msgs::msg::Location::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Location_parent(msg_);
  }

private:
  ::overarching_msgs::msg::Location msg_;
};

class Init_Location_x
{
public:
  Init_Location_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_y x(::overarching_msgs::msg::Location::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Location_y(msg_);
  }

private:
  ::overarching_msgs::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::msg::Location>()
{
  return overarching_msgs::msg::builder::Init_Location_x();
}

}  // namespace overarching_msgs

#endif  // OVERARCHING_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
