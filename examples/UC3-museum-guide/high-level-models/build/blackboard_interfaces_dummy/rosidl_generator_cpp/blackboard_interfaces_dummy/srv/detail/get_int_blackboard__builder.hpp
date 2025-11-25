// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__BUILDER_HPP_
#define BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_GetIntBlackboard_Request_field_name
{
public:
  Init_GetIntBlackboard_Request_field_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Request field_name(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Request::_field_name_type arg)
  {
    msg_.field_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blackboard_interfaces_dummy::srv::GetIntBlackboard_Request>()
{
  return blackboard_interfaces_dummy::srv::builder::Init_GetIntBlackboard_Request_field_name();
}

}  // namespace blackboard_interfaces_dummy


namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_GetIntBlackboard_Response_is_ok
{
public:
  explicit Init_GetIntBlackboard_Response_is_ok(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response & msg)
  : msg_(msg)
  {}
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response is_ok(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response msg_;
};

class Init_GetIntBlackboard_Response_value
{
public:
  Init_GetIntBlackboard_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIntBlackboard_Response_is_ok value(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_GetIntBlackboard_Response_is_ok(msg_);
  }

private:
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blackboard_interfaces_dummy::srv::GetIntBlackboard_Response>()
{
  return blackboard_interfaces_dummy::srv::builder::Init_GetIntBlackboard_Response_value();
}

}  // namespace blackboard_interfaces_dummy


namespace blackboard_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_GetIntBlackboard_Event_response
{
public:
  explicit Init_GetIntBlackboard_Event_response(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event & msg)
  : msg_(msg)
  {}
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event response(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event msg_;
};

class Init_GetIntBlackboard_Event_request
{
public:
  explicit Init_GetIntBlackboard_Event_request(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event & msg)
  : msg_(msg)
  {}
  Init_GetIntBlackboard_Event_response request(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetIntBlackboard_Event_response(msg_);
  }

private:
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event msg_;
};

class Init_GetIntBlackboard_Event_info
{
public:
  Init_GetIntBlackboard_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetIntBlackboard_Event_request info(::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetIntBlackboard_Event_request(msg_);
  }

private:
  ::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blackboard_interfaces_dummy::srv::GetIntBlackboard_Event>()
{
  return blackboard_interfaces_dummy::srv::builder::Init_GetIntBlackboard_Event_info();
}

}  // namespace blackboard_interfaces_dummy

#endif  // BLACKBOARD_INTERFACES_DUMMY__SRV__DETAIL__GET_INT_BLACKBOARD__BUILDER_HPP_
