// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__TRAITS_HPP_
#define PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace people_detector_filter_interfaces_dummy
{

namespace msg
{

inline void to_flow_style_yaml(
  const IsFollowed & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_followed
  {
    out << "is_followed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_followed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsFollowed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_followed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_followed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_followed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsFollowed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace people_detector_filter_interfaces_dummy

namespace rosidl_generator_traits
{

[[deprecated("use people_detector_filter_interfaces_dummy::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const people_detector_filter_interfaces_dummy::msg::IsFollowed & msg,
  std::ostream & out, size_t indentation = 0)
{
  people_detector_filter_interfaces_dummy::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use people_detector_filter_interfaces_dummy::msg::to_yaml() instead")]]
inline std::string to_yaml(const people_detector_filter_interfaces_dummy::msg::IsFollowed & msg)
{
  return people_detector_filter_interfaces_dummy::msg::to_yaml(msg);
}

template<>
inline const char * data_type<people_detector_filter_interfaces_dummy::msg::IsFollowed>()
{
  return "people_detector_filter_interfaces_dummy::msg::IsFollowed";
}

template<>
inline const char * name<people_detector_filter_interfaces_dummy::msg::IsFollowed>()
{
  return "people_detector_filter_interfaces_dummy/msg/IsFollowed";
}

template<>
struct has_fixed_size<people_detector_filter_interfaces_dummy::msg::IsFollowed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<people_detector_filter_interfaces_dummy::msg::IsFollowed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<people_detector_filter_interfaces_dummy::msg::IsFollowed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__TRAITS_HPP_
