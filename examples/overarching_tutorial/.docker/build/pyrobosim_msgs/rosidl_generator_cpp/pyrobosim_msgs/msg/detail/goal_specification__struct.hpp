// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/goal_specification.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'predicates'
#include "pyrobosim_msgs/msg/detail/goal_predicate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__GoalSpecification __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__GoalSpecification __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalSpecification_
{
  using Type = GoalSpecification_<ContainerAllocator>;

  explicit GoalSpecification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GoalSpecification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _predicates_type =
    std::vector<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>>;
  _predicates_type predicates;

  // setters for named parameter idiom
  Type & set__predicates(
    const std::vector<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::GoalPredicate_<ContainerAllocator>>> & _arg)
  {
    this->predicates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__GoalSpecification
    std::shared_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__GoalSpecification
    std::shared_ptr<pyrobosim_msgs::msg::GoalSpecification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalSpecification_ & other) const
  {
    if (this->predicates != other.predicates) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalSpecification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalSpecification_

// alias to use template instance with default allocator
using GoalSpecification =
  pyrobosim_msgs::msg::GoalSpecification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__GOAL_SPECIFICATION__STRUCT_HPP_
