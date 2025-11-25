// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_HPP_
#define NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navigation_interfaces_dummy__msg__NavigationStatus __attribute__((deprecated))
#else
# define DEPRECATED__navigation_interfaces_dummy__msg__NavigationStatus __declspec(deprecated)
#endif

namespace navigation_interfaces_dummy
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationStatus_
{
  using Type = NavigationStatus_<ContainerAllocator>;

  explicit NavigationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit NavigationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NAVIGATION_STATUS_IDLE =
    0;
  static constexpr int8_t NAVIGATION_STATUS_PREPARING_BEFORE_MOVE =
    1;
  static constexpr int8_t NAVIGATION_STATUS_MOVING =
    2;
  static constexpr int8_t NAVIGATION_STATUS_WAITING_OBSTACLE =
    3;
  static constexpr int8_t NAVIGATION_STATUS_GOAL_REACHED =
    4;
  static constexpr int8_t NAVIGATION_STATUS_ABORTED =
    5;
  static constexpr int8_t NAVIGATION_STATUS_FAILING =
    6;
  static constexpr int8_t NAVIGATION_STATUS_PAUSED =
    7;
  static constexpr int8_t NAVIGATION_STATUS_THINKING =
    8;
  static constexpr int8_t NAVIGATION_STATUS_ERROR =
    9;

  // pointer types
  using RawPtr =
    navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigation_interfaces_dummy__msg__NavigationStatus
    std::shared_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigation_interfaces_dummy__msg__NavigationStatus
    std::shared_ptr<navigation_interfaces_dummy::msg::NavigationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationStatus_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationStatus_

// alias to use template instance with default allocator
using NavigationStatus =
  navigation_interfaces_dummy::msg::NavigationStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_PREPARING_BEFORE_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_WAITING_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_GOAL_REACHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_FAILING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_THINKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NavigationStatus_<ContainerAllocator>::NAVIGATION_STATUS_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace navigation_interfaces_dummy

#endif  // NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_HPP_
