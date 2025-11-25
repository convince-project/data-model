// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__BUILDER_HPP_
#define PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace people_detector_filter_interfaces_dummy
{

namespace msg
{

namespace builder
{

class Init_IsFollowed_is_followed
{
public:
  Init_IsFollowed_is_followed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::people_detector_filter_interfaces_dummy::msg::IsFollowed is_followed(::people_detector_filter_interfaces_dummy::msg::IsFollowed::_is_followed_type arg)
  {
    msg_.is_followed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::people_detector_filter_interfaces_dummy::msg::IsFollowed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::people_detector_filter_interfaces_dummy::msg::IsFollowed>()
{
  return people_detector_filter_interfaces_dummy::msg::builder::Init_IsFollowed_is_followed();
}

}  // namespace people_detector_filter_interfaces_dummy

#endif  // PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__BUILDER_HPP_
