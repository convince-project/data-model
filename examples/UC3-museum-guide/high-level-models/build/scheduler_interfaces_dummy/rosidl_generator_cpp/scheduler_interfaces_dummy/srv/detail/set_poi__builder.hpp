// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from scheduler_interfaces_dummy:srv/SetPoi.idl
// generated code does not contain a copyright notice

#ifndef SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__BUILDER_HPP_
#define SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "scheduler_interfaces_dummy/srv/detail/set_poi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_SetPoi_Request_poi_number
{
public:
  Init_SetPoi_Request_poi_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scheduler_interfaces_dummy::srv::SetPoi_Request poi_number(::scheduler_interfaces_dummy::srv::SetPoi_Request::_poi_number_type arg)
  {
    msg_.poi_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::SetPoi_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scheduler_interfaces_dummy::srv::SetPoi_Request>()
{
  return scheduler_interfaces_dummy::srv::builder::Init_SetPoi_Request_poi_number();
}

}  // namespace scheduler_interfaces_dummy


namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_SetPoi_Response_is_ok
{
public:
  Init_SetPoi_Response_is_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::scheduler_interfaces_dummy::srv::SetPoi_Response is_ok(::scheduler_interfaces_dummy::srv::SetPoi_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::SetPoi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scheduler_interfaces_dummy::srv::SetPoi_Response>()
{
  return scheduler_interfaces_dummy::srv::builder::Init_SetPoi_Response_is_ok();
}

}  // namespace scheduler_interfaces_dummy


namespace scheduler_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_SetPoi_Event_response
{
public:
  explicit Init_SetPoi_Event_response(::scheduler_interfaces_dummy::srv::SetPoi_Event & msg)
  : msg_(msg)
  {}
  ::scheduler_interfaces_dummy::srv::SetPoi_Event response(::scheduler_interfaces_dummy::srv::SetPoi_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::SetPoi_Event msg_;
};

class Init_SetPoi_Event_request
{
public:
  explicit Init_SetPoi_Event_request(::scheduler_interfaces_dummy::srv::SetPoi_Event & msg)
  : msg_(msg)
  {}
  Init_SetPoi_Event_response request(::scheduler_interfaces_dummy::srv::SetPoi_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPoi_Event_response(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::SetPoi_Event msg_;
};

class Init_SetPoi_Event_info
{
public:
  Init_SetPoi_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPoi_Event_request info(::scheduler_interfaces_dummy::srv::SetPoi_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetPoi_Event_request(msg_);
  }

private:
  ::scheduler_interfaces_dummy::srv::SetPoi_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::scheduler_interfaces_dummy::srv::SetPoi_Event>()
{
  return scheduler_interfaces_dummy::srv::builder::Init_SetPoi_Event_info();
}

}  // namespace scheduler_interfaces_dummy

#endif  // SCHEDULER_INTERFACES_DUMMY__SRV__DETAIL__SET_POI__BUILDER_HPP_
