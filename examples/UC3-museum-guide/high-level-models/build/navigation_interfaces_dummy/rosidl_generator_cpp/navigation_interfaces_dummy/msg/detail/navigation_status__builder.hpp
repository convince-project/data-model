// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__BUILDER_HPP_
#define NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigation_interfaces_dummy/msg/detail/navigation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigation_interfaces_dummy
{

namespace msg
{

namespace builder
{

class Init_NavigationStatus_status
{
public:
  Init_NavigationStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigation_interfaces_dummy::msg::NavigationStatus status(::navigation_interfaces_dummy::msg::NavigationStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::msg::NavigationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::msg::NavigationStatus>()
{
  return navigation_interfaces_dummy::msg::builder::Init_NavigationStatus_status();
}

}  // namespace navigation_interfaces_dummy

#endif  // NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__BUILDER_HPP_
