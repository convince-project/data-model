// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from notify_user_interfaces_dummy:srv/StartAlarm.idl
// generated code does not contain a copyright notice

#ifndef NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__BUILDER_HPP_
#define NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "notify_user_interfaces_dummy/srv/detail/start_alarm__struct.hpp"
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
auto build<::notify_user_interfaces_dummy::srv::StartAlarm_Request>()
{
  return ::notify_user_interfaces_dummy::srv::StartAlarm_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace notify_user_interfaces_dummy


namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_StartAlarm_Response_is_ok
{
public:
  Init_StartAlarm_Response_is_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::notify_user_interfaces_dummy::srv::StartAlarm_Response is_ok(::notify_user_interfaces_dummy::srv::StartAlarm_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StartAlarm_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::notify_user_interfaces_dummy::srv::StartAlarm_Response>()
{
  return notify_user_interfaces_dummy::srv::builder::Init_StartAlarm_Response_is_ok();
}

}  // namespace notify_user_interfaces_dummy


namespace notify_user_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_StartAlarm_Event_response
{
public:
  explicit Init_StartAlarm_Event_response(::notify_user_interfaces_dummy::srv::StartAlarm_Event & msg)
  : msg_(msg)
  {}
  ::notify_user_interfaces_dummy::srv::StartAlarm_Event response(::notify_user_interfaces_dummy::srv::StartAlarm_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StartAlarm_Event msg_;
};

class Init_StartAlarm_Event_request
{
public:
  explicit Init_StartAlarm_Event_request(::notify_user_interfaces_dummy::srv::StartAlarm_Event & msg)
  : msg_(msg)
  {}
  Init_StartAlarm_Event_response request(::notify_user_interfaces_dummy::srv::StartAlarm_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StartAlarm_Event_response(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StartAlarm_Event msg_;
};

class Init_StartAlarm_Event_info
{
public:
  Init_StartAlarm_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartAlarm_Event_request info(::notify_user_interfaces_dummy::srv::StartAlarm_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StartAlarm_Event_request(msg_);
  }

private:
  ::notify_user_interfaces_dummy::srv::StartAlarm_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::notify_user_interfaces_dummy::srv::StartAlarm_Event>()
{
  return notify_user_interfaces_dummy::srv::builder::Init_StartAlarm_Event_info();
}

}  // namespace notify_user_interfaces_dummy

#endif  // NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__BUILDER_HPP_
