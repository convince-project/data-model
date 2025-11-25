// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bt_interfaces_dummy:msg/ActionResponse.idl
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__STRUCT_HPP_
#define BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bt_interfaces_dummy__msg__ActionResponse __attribute__((deprecated))
#else
# define DEPRECATED__bt_interfaces_dummy__msg__ActionResponse __declspec(deprecated)
#endif

namespace bt_interfaces_dummy
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionResponse_
{
  using Type = ActionResponse_<ContainerAllocator>;

  explicit ActionResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActionResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr int8_t SKILL_SUCCESS =
    0;
  static constexpr int8_t SKILL_FAILURE =
    1;
  static constexpr int8_t SKILL_RUNNING =
    2;

  // pointer types
  using RawPtr =
    bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bt_interfaces_dummy__msg__ActionResponse
    std::shared_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bt_interfaces_dummy__msg__ActionResponse
    std::shared_ptr<bt_interfaces_dummy::msg::ActionResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionResponse_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionResponse_

// alias to use template instance with default allocator
using ActionResponse =
  bt_interfaces_dummy::msg::ActionResponse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionResponse_<ContainerAllocator>::SKILL_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionResponse_<ContainerAllocator>::SKILL_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionResponse_<ContainerAllocator>::SKILL_RUNNING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bt_interfaces_dummy

#endif  // BT_INTERFACES_DUMMY__MSG__DETAIL__ACTION_RESPONSE__STRUCT_HPP_
