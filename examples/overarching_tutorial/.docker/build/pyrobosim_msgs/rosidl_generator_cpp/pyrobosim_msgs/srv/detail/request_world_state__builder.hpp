// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:srv/RequestWorldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/request_world_state.hpp"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/srv/detail/request_world_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestWorldState_Request_robot
{
public:
  Init_RequestWorldState_Request_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::srv::RequestWorldState_Request robot(::pyrobosim_msgs::srv::RequestWorldState_Request::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::RequestWorldState_Request>()
{
  return pyrobosim_msgs::srv::builder::Init_RequestWorldState_Request_robot();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestWorldState_Response_state
{
public:
  Init_RequestWorldState_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::srv::RequestWorldState_Response state(::pyrobosim_msgs::srv::RequestWorldState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::RequestWorldState_Response>()
{
  return pyrobosim_msgs::srv::builder::Init_RequestWorldState_Response_state();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestWorldState_Event_response
{
public:
  explicit Init_RequestWorldState_Event_response(::pyrobosim_msgs::srv::RequestWorldState_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::srv::RequestWorldState_Event response(::pyrobosim_msgs::srv::RequestWorldState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldState_Event msg_;
};

class Init_RequestWorldState_Event_request
{
public:
  explicit Init_RequestWorldState_Event_request(::pyrobosim_msgs::srv::RequestWorldState_Event & msg)
  : msg_(msg)
  {}
  Init_RequestWorldState_Event_response request(::pyrobosim_msgs::srv::RequestWorldState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RequestWorldState_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldState_Event msg_;
};

class Init_RequestWorldState_Event_info
{
public:
  Init_RequestWorldState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestWorldState_Event_request info(::pyrobosim_msgs::srv::RequestWorldState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RequestWorldState_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::RequestWorldState_Event>()
{
  return pyrobosim_msgs::srv::builder::Init_RequestWorldState_Event_info();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_STATE__BUILDER_HPP_
