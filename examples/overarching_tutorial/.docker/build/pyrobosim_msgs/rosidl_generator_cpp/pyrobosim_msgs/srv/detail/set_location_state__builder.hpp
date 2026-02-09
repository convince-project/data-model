// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:srv/SetLocationState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/srv/set_location_state.hpp"


#ifndef PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__BUILDER_HPP_
#define PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/srv/detail/set_location_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLocationState_Request_lock
{
public:
  explicit Init_SetLocationState_Request_lock(::pyrobosim_msgs::srv::SetLocationState_Request & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::srv::SetLocationState_Request lock(::pyrobosim_msgs::srv::SetLocationState_Request::_lock_type arg)
  {
    msg_.lock = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Request msg_;
};

class Init_SetLocationState_Request_open
{
public:
  explicit Init_SetLocationState_Request_open(::pyrobosim_msgs::srv::SetLocationState_Request & msg)
  : msg_(msg)
  {}
  Init_SetLocationState_Request_lock open(::pyrobosim_msgs::srv::SetLocationState_Request::_open_type arg)
  {
    msg_.open = std::move(arg);
    return Init_SetLocationState_Request_lock(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Request msg_;
};

class Init_SetLocationState_Request_location_name
{
public:
  Init_SetLocationState_Request_location_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocationState_Request_open location_name(::pyrobosim_msgs::srv::SetLocationState_Request::_location_name_type arg)
  {
    msg_.location_name = std::move(arg);
    return Init_SetLocationState_Request_open(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::SetLocationState_Request>()
{
  return pyrobosim_msgs::srv::builder::Init_SetLocationState_Request_location_name();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLocationState_Response_result
{
public:
  Init_SetLocationState_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::srv::SetLocationState_Response result(::pyrobosim_msgs::srv::SetLocationState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::SetLocationState_Response>()
{
  return pyrobosim_msgs::srv::builder::Init_SetLocationState_Response_result();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLocationState_Event_response
{
public:
  explicit Init_SetLocationState_Event_response(::pyrobosim_msgs::srv::SetLocationState_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::srv::SetLocationState_Event response(::pyrobosim_msgs::srv::SetLocationState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Event msg_;
};

class Init_SetLocationState_Event_request
{
public:
  explicit Init_SetLocationState_Event_request(::pyrobosim_msgs::srv::SetLocationState_Event & msg)
  : msg_(msg)
  {}
  Init_SetLocationState_Event_response request(::pyrobosim_msgs::srv::SetLocationState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLocationState_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Event msg_;
};

class Init_SetLocationState_Event_info
{
public:
  Init_SetLocationState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocationState_Event_request info(::pyrobosim_msgs::srv::SetLocationState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLocationState_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::srv::SetLocationState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::srv::SetLocationState_Event>()
{
  return pyrobosim_msgs::srv::builder::Init_SetLocationState_Event_info();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__SRV__DETAIL__SET_LOCATION_STATE__BUILDER_HPP_
