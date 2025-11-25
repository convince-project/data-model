// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from timer_interfaces_dummy:srv/IsTimerActive.idl
// generated code does not contain a copyright notice

#ifndef TIMER_INTERFACES_DUMMY__SRV__DETAIL__IS_TIMER_ACTIVE__BUILDER_HPP_
#define TIMER_INTERFACES_DUMMY__SRV__DETAIL__IS_TIMER_ACTIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace timer_interfaces_dummy
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_interfaces_dummy::srv::IsTimerActive_Request>()
{
  return ::timer_interfaces_dummy::srv::IsTimerActive_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace timer_interfaces_dummy


namespace timer_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_IsTimerActive_Response_is_active
{
public:
  explicit Init_IsTimerActive_Response_is_active(::timer_interfaces_dummy::srv::IsTimerActive_Response & msg)
  : msg_(msg)
  {}
  ::timer_interfaces_dummy::srv::IsTimerActive_Response is_active(::timer_interfaces_dummy::srv::IsTimerActive_Response::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_interfaces_dummy::srv::IsTimerActive_Response msg_;
};

class Init_IsTimerActive_Response_is_ok
{
public:
  Init_IsTimerActive_Response_is_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsTimerActive_Response_is_active is_ok(::timer_interfaces_dummy::srv::IsTimerActive_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return Init_IsTimerActive_Response_is_active(msg_);
  }

private:
  ::timer_interfaces_dummy::srv::IsTimerActive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_interfaces_dummy::srv::IsTimerActive_Response>()
{
  return timer_interfaces_dummy::srv::builder::Init_IsTimerActive_Response_is_ok();
}

}  // namespace timer_interfaces_dummy


namespace timer_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_IsTimerActive_Event_response
{
public:
  explicit Init_IsTimerActive_Event_response(::timer_interfaces_dummy::srv::IsTimerActive_Event & msg)
  : msg_(msg)
  {}
  ::timer_interfaces_dummy::srv::IsTimerActive_Event response(::timer_interfaces_dummy::srv::IsTimerActive_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::timer_interfaces_dummy::srv::IsTimerActive_Event msg_;
};

class Init_IsTimerActive_Event_request
{
public:
  explicit Init_IsTimerActive_Event_request(::timer_interfaces_dummy::srv::IsTimerActive_Event & msg)
  : msg_(msg)
  {}
  Init_IsTimerActive_Event_response request(::timer_interfaces_dummy::srv::IsTimerActive_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IsTimerActive_Event_response(msg_);
  }

private:
  ::timer_interfaces_dummy::srv::IsTimerActive_Event msg_;
};

class Init_IsTimerActive_Event_info
{
public:
  Init_IsTimerActive_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsTimerActive_Event_request info(::timer_interfaces_dummy::srv::IsTimerActive_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IsTimerActive_Event_request(msg_);
  }

private:
  ::timer_interfaces_dummy::srv::IsTimerActive_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::timer_interfaces_dummy::srv::IsTimerActive_Event>()
{
  return timer_interfaces_dummy::srv::builder::Init_IsTimerActive_Event_info();
}

}  // namespace timer_interfaces_dummy

#endif  // TIMER_INTERFACES_DUMMY__SRV__DETAIL__IS_TIMER_ACTIVE__BUILDER_HPP_
