// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/GoalPredicate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_predicate.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__GoalPredicate __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__GoalPredicate __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalPredicate_
{
  using Type = GoalPredicate_<ContainerAllocator>;

  explicit GoalPredicate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit GoalPredicate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _args_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _args_type args;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__args(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->args = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__GoalPredicate
    std::shared_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__GoalPredicate
    std::shared_ptr<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalPredicate_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->args != other.args) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalPredicate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalPredicate_

// alias to use template instance with default allocator
using GoalPredicate =
  pyrobosim_msgs::msg::GoalPredicate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_PREDICATE__STRUCT_HPP_
