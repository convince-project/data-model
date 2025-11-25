// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scheduler_interfaces_dummy:srv/GetCurrentPoi.idl
// generated code does not contain a copyright notice

#ifndef SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__GET_CURRENT_POI__BUILDER_HPP_
#define SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__GET_CURRENT_POI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scheduler_interfaces_dummy/srv/detail/get_current_poi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scheduler_interfaces_dummy
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scheduler_interfaces_dummy::srv::GetCurrentPoi_Request>()
{
  return ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace scheduler_interfaces_dummy


namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_GetCurrentPoi_Response_is_ok
{
public:
  explicit Init_GetCurrentPoi_Response_is_ok(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response & msg)
  : msg_(msg)
  {}
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response is_ok(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response msg_;
};

class Init_GetCurrentPoi_Response_poi_number
{
public:
  Init_GetCurrentPoi_Response_poi_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCurrentPoi_Response_is_ok poi_number(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response::_poi_number_type arg)
  {
    msg_.poi_number = std::move(arg);
    return Init_GetCurrentPoi_Response_is_ok(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scheduler_interfaces_dummy::srv::GetCurrentPoi_Response>()
{
  return scheduler_interfaces_dummy::srv::builder::Init_GetCurrentPoi_Response_poi_number();
}

}  // namespace scheduler_interfaces_dummy


namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_GetCurrentPoi_Event_response
{
public:
  explicit Init_GetCurrentPoi_Event_response(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event & msg)
  : msg_(msg)
  {}
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event response(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event msg_;
};

class Init_GetCurrentPoi_Event_request
{
public:
  explicit Init_GetCurrentPoi_Event_request(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event & msg)
  : msg_(msg)
  {}
  Init_GetCurrentPoi_Event_response request(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetCurrentPoi_Event_response(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event msg_;
};

class Init_GetCurrentPoi_Event_info
{
public:
  Init_GetCurrentPoi_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCurrentPoi_Event_request info(::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetCurrentPoi_Event_request(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scheduler_interfaces_dummy::srv::GetCurrentPoi_Event>()
{
  return scheduler_interfaces_dummy::srv::builder::Init_GetCurrentPoi_Event_info();
}

}  // namespace scheduler_interfaces_dummy

#endif  // SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__GET_CURRENT_POI__BUILDER_HPP_
