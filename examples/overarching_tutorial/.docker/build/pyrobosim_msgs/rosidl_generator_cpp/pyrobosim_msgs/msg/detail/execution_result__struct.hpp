// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/ExecutionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/execution_result.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__ExecutionResult __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__ExecutionResult __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExecutionResult_
{
  using Type = ExecutionResult_<ContainerAllocator>;

  explicit ExecutionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->status = -1l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->status = 0l;
      this->message = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit ExecutionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->status = -1l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->status = 0l;
      this->message = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _status_type =
    int32_t;
  _status_type status;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t UNKNOWN =
    -1;
  static constexpr int32_t SUCCESS =
    0;
  static constexpr int32_t PRECONDITION_FAILURE =
    1;
  static constexpr int32_t PLANNING_FAILURE =
    2;
  static constexpr int32_t EXECUTION_FAILURE =
    3;
  static constexpr int32_t POSTCONDITION_FAILURE =
    4;
  static constexpr int32_t INVALID_ACTION =
    5;
  static constexpr int32_t CANCELED =
    6;

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__ExecutionResult
    std::shared_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__ExecutionResult
    std::shared_ptr<pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutionResult_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutionResult_

// alias to use template instance with default allocator
using ExecutionResult =
  pyrobosim_msgs::msg::ExecutionResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::PRECONDITION_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::PLANNING_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::EXECUTION_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::POSTCONDITION_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::INVALID_ACTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ExecutionResult_<ContainerAllocator>::CANCELED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__EXECUTION_RESULT__STRUCT_HPP_
