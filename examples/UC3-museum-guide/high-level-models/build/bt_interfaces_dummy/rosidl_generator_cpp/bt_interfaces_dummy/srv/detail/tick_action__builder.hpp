// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_interfaces_dummy:srv/TickAction.idl
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__SRV__DETAIL__TICK_ACTION__BUILDER_HPP_
#define BT_INTERFACES_DUMMY__SRV__DETAIL__TICK_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bt_interfaces_dummy/srv/detail/tick_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bt_interfaces_dummy
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::srv::TickAction_Request>()
{
  return ::bt_interfaces_dummy::srv::TickAction_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_interfaces_dummy


namespace bt_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_TickAction_Response_is_ok
{
public:
  explicit Init_TickAction_Response_is_ok(::bt_interfaces_dummy::srv::TickAction_Response & msg)
  : msg_(msg)
  {}
  ::bt_interfaces_dummy::srv::TickAction_Response is_ok(::bt_interfaces_dummy::srv::TickAction_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::TickAction_Response msg_;
};

class Init_TickAction_Response_status
{
public:
  Init_TickAction_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TickAction_Response_is_ok status(::bt_interfaces_dummy::srv::TickAction_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TickAction_Response_is_ok(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::TickAction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::srv::TickAction_Response>()
{
  return bt_interfaces_dummy::srv::builder::Init_TickAction_Response_status();
}

}  // namespace bt_interfaces_dummy


namespace bt_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_TickAction_Event_response
{
public:
  explicit Init_TickAction_Event_response(::bt_interfaces_dummy::srv::TickAction_Event & msg)
  : msg_(msg)
  {}
  ::bt_interfaces_dummy::srv::TickAction_Event response(::bt_interfaces_dummy::srv::TickAction_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::TickAction_Event msg_;
};

class Init_TickAction_Event_request
{
public:
  explicit Init_TickAction_Event_request(::bt_interfaces_dummy::srv::TickAction_Event & msg)
  : msg_(msg)
  {}
  Init_TickAction_Event_response request(::bt_interfaces_dummy::srv::TickAction_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TickAction_Event_response(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::TickAction_Event msg_;
};

class Init_TickAction_Event_info
{
public:
  Init_TickAction_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TickAction_Event_request info(::bt_interfaces_dummy::srv::TickAction_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TickAction_Event_request(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::TickAction_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::srv::TickAction_Event>()
{
  return bt_interfaces_dummy::srv::builder::Init_TickAction_Event_info();
}

}  // namespace bt_interfaces_dummy

#endif  // BT_INTERFACES_DUMMY__SRV__DETAIL__TICK_ACTION__BUILDER_HPP_
