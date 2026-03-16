// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_interfaces_dummy:srv/ReloadTree.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "bt_interfaces_dummy/srv/reload_tree.hpp"


#ifndef BT_INTERFACES_DUMMY__SRV__DETAIL__RELOAD_TREE__BUILDER_HPP_
#define BT_INTERFACES_DUMMY__SRV__DETAIL__RELOAD_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bt_interfaces_dummy/srv/detail/reload_tree__struct.hpp"
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
auto build<::bt_interfaces_dummy::srv::ReloadTree_Request>()
{
  return ::bt_interfaces_dummy::srv::ReloadTree_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_interfaces_dummy


namespace bt_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_ReloadTree_Response_error_msg
{
public:
  explicit Init_ReloadTree_Response_error_msg(::bt_interfaces_dummy::srv::ReloadTree_Response & msg)
  : msg_(msg)
  {}
  ::bt_interfaces_dummy::srv::ReloadTree_Response error_msg(::bt_interfaces_dummy::srv::ReloadTree_Response::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::ReloadTree_Response msg_;
};

class Init_ReloadTree_Response_is_ok
{
public:
  Init_ReloadTree_Response_is_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReloadTree_Response_error_msg is_ok(::bt_interfaces_dummy::srv::ReloadTree_Response::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return Init_ReloadTree_Response_error_msg(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::ReloadTree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::srv::ReloadTree_Response>()
{
  return bt_interfaces_dummy::srv::builder::Init_ReloadTree_Response_is_ok();
}

}  // namespace bt_interfaces_dummy


namespace bt_interfaces_dummy
{

namespace srv
{

namespace builder
{

class Init_ReloadTree_Event_response
{
public:
  explicit Init_ReloadTree_Event_response(::bt_interfaces_dummy::srv::ReloadTree_Event & msg)
  : msg_(msg)
  {}
  ::bt_interfaces_dummy::srv::ReloadTree_Event response(::bt_interfaces_dummy::srv::ReloadTree_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::ReloadTree_Event msg_;
};

class Init_ReloadTree_Event_request
{
public:
  explicit Init_ReloadTree_Event_request(::bt_interfaces_dummy::srv::ReloadTree_Event & msg)
  : msg_(msg)
  {}
  Init_ReloadTree_Event_response request(::bt_interfaces_dummy::srv::ReloadTree_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReloadTree_Event_response(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::ReloadTree_Event msg_;
};

class Init_ReloadTree_Event_info
{
public:
  Init_ReloadTree_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReloadTree_Event_request info(::bt_interfaces_dummy::srv::ReloadTree_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReloadTree_Event_request(msg_);
  }

private:
  ::bt_interfaces_dummy::srv::ReloadTree_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_interfaces_dummy::srv::ReloadTree_Event>()
{
  return bt_interfaces_dummy::srv::builder::Init_ReloadTree_Event_info();
}

}  // namespace bt_interfaces_dummy

#endif  // BT_INTERFACES_DUMMY__SRV__DETAIL__RELOAD_TREE__BUILDER_HPP_
