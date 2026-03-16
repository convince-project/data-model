// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:msg/ExecutionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/execution_result.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__BUILDER_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/msg/detail/execution_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace msg
{

namespace builder
{

class Init_ExecutionResult_message
{
public:
  explicit Init_ExecutionResult_message(::pyrobosim_msgs::msg::ExecutionResult & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::msg::ExecutionResult message(::pyrobosim_msgs::msg::ExecutionResult::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::msg::ExecutionResult msg_;
};

class Init_ExecutionResult_status
{
public:
  Init_ExecutionResult_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutionResult_message status(::pyrobosim_msgs::msg::ExecutionResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecutionResult_message(msg_);
  }

private:
  ::pyrobosim_msgs::msg::ExecutionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::msg::ExecutionResult>()
{
  return pyrobosim_msgs::msg::builder::Init_ExecutionResult_status();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__BUILDER_HPP_
