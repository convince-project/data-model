// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__BUILDER_HPP_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bt_interfaces_dummy/msg/detail/action_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bt_interfaces_dummy
{

namespace msg
{

namespace builder
{

class Init_ActionResponse_status
{
public:
  Init_ActionResponse_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_interfaces_dummy::msg::ActionResponse status(::bt_interfaces_dummy::msg::ActionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_interfaces_dummy::msg::ActionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::msg::ActionResponse>()
{
  return bt_interfaces_dummy::msg::builder::Init_ActionResponse_status();
}

}  // namespace bt_interfaces_dummy

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__BUILDER_HPP_
