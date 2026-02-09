// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:srv/ResetWorld.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/reset_world.hpp"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__RESET_WORLD__BUILDER_HPP_
#define PYROBOSIM_MSGS__SRV__DETAIL__RESET_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/srv/detail/reset_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetWorld_Request_seed
{
public:
  explicit Init_ResetWorld_Request_seed(::pyrobosim_msgs::srv::ResetWorld_Request & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::srv::ResetWorld_Request seed(::pyrobosim_msgs::srv::ResetWorld_Request::_seed_type arg)
  {
    msg_.seed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::ResetWorld_Request msg_;
};

class Init_ResetWorld_Request_deterministic
{
public:
  Init_ResetWorld_Request_deterministic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetWorld_Request_seed deterministic(::pyrobosim_msgs::srv::ResetWorld_Request::_deterministic_type arg)
  {
    msg_.deterministic = std::move(arg);
    return Init_ResetWorld_Request_seed(msg_);
  }

private:
  ::pyrobosim_msgs::srv::ResetWorld_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::ResetWorld_Request>()
{
  return pyrobosim_msgs::srv::builder::Init_ResetWorld_Request_deterministic();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetWorld_Response_success
{
public:
  Init_ResetWorld_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::srv::ResetWorld_Response success(::pyrobosim_msgs::srv::ResetWorld_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::ResetWorld_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::ResetWorld_Response>()
{
  return pyrobosim_msgs::srv::builder::Init_ResetWorld_Response_success();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetWorld_Event_response
{
public:
  explicit Init_ResetWorld_Event_response(::pyrobosim_msgs::srv::ResetWorld_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::srv::ResetWorld_Event response(::pyrobosim_msgs::srv::ResetWorld_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::ResetWorld_Event msg_;
};

class Init_ResetWorld_Event_request
{
public:
  explicit Init_ResetWorld_Event_request(::pyrobosim_msgs::srv::ResetWorld_Event & msg)
  : msg_(msg)
  {}
  Init_ResetWorld_Event_response request(::pyrobosim_msgs::srv::ResetWorld_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetWorld_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::srv::ResetWorld_Event msg_;
};

class Init_ResetWorld_Event_info
{
public:
  Init_ResetWorld_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetWorld_Event_request info(::pyrobosim_msgs::srv::ResetWorld_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetWorld_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::srv::ResetWorld_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::ResetWorld_Event>()
{
  return pyrobosim_msgs::srv::builder::Init_ResetWorld_Event_info();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__RESET_WORLD__BUILDER_HPP_
