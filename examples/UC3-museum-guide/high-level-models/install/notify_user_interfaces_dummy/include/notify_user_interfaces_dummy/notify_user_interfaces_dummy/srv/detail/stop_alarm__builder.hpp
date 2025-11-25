// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from notify_user_interfaces_dummy:srv/StopAlarm.idl
// generated code does not contain a copyright notice

#ifndef NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__STOP_ALARM__BUILDER_HPP_
#define NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__STOP_ALARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "notify_user_interfaces_dummy/srv/detail/stop_alarm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace notify_user_interfaces_dummy
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::notify_user_interfaces_dummy::srv::StopAlarm_Request>()
{
  return ::notify_user_interfaces_dummy::srv::StopAlarm_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace notify_user_interfaces_dummy


namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_StopAlarm_Response_is_ok
{
public:
  Init_StopAlarm_Response_is_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::notify_user_interfaces_dummy::srv::StopAlarm_Response is_ok(::notify_user_interfaces_dummy::srv::StopAlarm_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StopAlarm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::notify_user_interfaces_dummy::srv::StopAlarm_Response>()
{
  return notify_user_interfaces_dummy::srv::builder::Init_StopAlarm_Response_is_ok();
}

}  // namespace notify_user_interfaces_dummy


namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_StopAlarm_Event_response
{
public:
  explicit Init_StopAlarm_Event_response(::notify_user_interfaces_dummy::srv::StopAlarm_Event & msg)
  : msg_(msg)
  {}
  ::notify_user_interfaces_dummy::srv::StopAlarm_Event response(::notify_user_interfaces_dummy::srv::StopAlarm_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StopAlarm_Event msg_;
};

class Init_StopAlarm_Event_request
{
public:
  explicit Init_StopAlarm_Event_request(::notify_user_interfaces_dummy::srv::StopAlarm_Event & msg)
  : msg_(msg)
  {}
  Init_StopAlarm_Event_response request(::notify_user_interfaces_dummy::srv::StopAlarm_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopAlarm_Event_response(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StopAlarm_Event msg_;
};

class Init_StopAlarm_Event_info
{
public:
  Init_StopAlarm_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopAlarm_Event_request info(::notify_user_interfaces_dummy::srv::StopAlarm_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopAlarm_Event_request(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StopAlarm_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::notify_user_interfaces_dummy::srv::StopAlarm_Event>()
{
  return notify_user_interfaces_dummy::srv::builder::Init_StopAlarm_Event_info();
}

}  // namespace notify_user_interfaces_dummy

#endif  // NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__STOP_ALARM__BUILDER_HPP_
