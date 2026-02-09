// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:srv/RequestWorldInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/request_world_info.hpp"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__BUILDER_HPP_
#define PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/srv/detail/request_world_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::RequestWorldInfo_Request>()
{
  return ::pyrobosim_msgs::srv::RequestWorldInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestWorldInfo_Response_info
{
public:
  Init_RequestWorldInfo_Response_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::srv::RequestWorldInfo_Response info(::pyrobosim_msgs::srv::RequestWorldInfo_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::RequestWorldInfo_Response>()
{
  return pyrobosim_msgs::srv::builder::Init_RequestWorldInfo_Response_info();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestWorldInfo_Event_response
{
public:
  explicit Init_RequestWorldInfo_Event_response(::pyrobosim_msgs::srv::RequestWorldInfo_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::srv::RequestWorldInfo_Event response(::pyrobosim_msgs::srv::RequestWorldInfo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldInfo_Event msg_;
};

class Init_RequestWorldInfo_Event_request
{
public:
  explicit Init_RequestWorldInfo_Event_request(::pyrobosim_msgs::srv::RequestWorldInfo_Event & msg)
  : msg_(msg)
  {}
  Init_RequestWorldInfo_Event_response request(::pyrobosim_msgs::srv::RequestWorldInfo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RequestWorldInfo_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldInfo_Event msg_;
};

class Init_RequestWorldInfo_Event_info
{
public:
  Init_RequestWorldInfo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestWorldInfo_Event_request info(::pyrobosim_msgs::srv::RequestWorldInfo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RequestWorldInfo_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::srv::RequestWorldInfo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::RequestWorldInfo_Event>()
{
  return pyrobosim_msgs::srv::builder::Init_RequestWorldInfo_Event_info();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__REQUEST_WORLD_INFO__BUILDER_HPP_
