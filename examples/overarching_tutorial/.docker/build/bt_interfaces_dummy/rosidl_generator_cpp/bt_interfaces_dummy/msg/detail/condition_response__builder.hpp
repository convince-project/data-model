// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_interfaces_dummy:msg/ConditionResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bt_interfaces_dummy/msg/condition_response.hpp"


#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__BUILDER_HPP_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bt_interfaces_dummy/msg/detail/condition_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bt_interfaces_dummy
{

namespace msg
{

namespace builder
{

class Init_ConditionResponse_status
{
public:
  Init_ConditionResponse_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_interfaces_dummy::msg::ConditionResponse status(::bt_interfaces_dummy::msg::ConditionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_interfaces_dummy::msg::ConditionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::msg::ConditionResponse>()
{
  return bt_interfaces_dummy::msg::builder::Init_ConditionResponse_status();
}

}  // namespace bt_interfaces_dummy

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__CONDITION_RESPONSE__BUILDER_HPP_
