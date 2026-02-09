// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from overarching_msgs:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "overarching_msgs/msg/location.hpp"


#ifndef OVERARCHING_MSGS__MSG__DETAIL__LOCATION__STRUCT_HPP_
#define OVERARCHING_MSGS__MSG__DETAIL__LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__overarching_msgs__msg__Location __attribute__((deprecated))
#else
# define DEPRECATED__overarching_msgs__msg__Location __declspec(deprecated)
#endif

namespace overarching_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Location_
{
  using Type = Location_<ContainerAllocator>;

  explicit Location_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->parent = "";
    }
  }

  explicit Location_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->parent = "";
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _parent_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_type parent;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__parent(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    overarching_msgs::msg::Location_<ContainerAllocator> *;
  using ConstRawPtr =
    const overarching_msgs::msg::Location_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<overarching_msgs::msg::Location_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<overarching_msgs::msg::Location_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      overarching_msgs::msg::Location_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<overarching_msgs::msg::Location_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      overarching_msgs::msg::Location_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<overarching_msgs::msg::Location_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<overarching_msgs::msg::Location_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<overarching_msgs::msg::Location_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__overarching_msgs__msg__Location
    std::shared_ptr<overarching_msgs::msg::Location_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__overarching_msgs__msg__Location
    std::shared_ptr<overarching_msgs::msg::Location_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Location_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->parent != other.parent) {
      return false;
    }
    return true;
  }
  bool operator!=(const Location_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Location_

// alias to use template instance with default allocator
using Location =
  overarching_msgs::msg::Location_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace overarching_msgs

#endif  // OVERARCHING_MSGS__MSG__DETAIL__LOCATION__STRUCT_HPP_
