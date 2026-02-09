// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/TaskPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/task_plan.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'actions'
#include "pyrobosim_msgs/msg/detail/task_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__TaskPlan __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__TaskPlan __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskPlan_
{
  using Type = TaskPlan_<ContainerAllocator>;

  explicit TaskPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot = "";
      this->cost = 0.0f;
    }
  }

  explicit TaskPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot = "";
      this->cost = 0.0f;
    }
  }

  // field types and members
  using _robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type robot;
  using _actions_type =
    std::vector<pyrobosim_msgs::msg::TaskAction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::TaskAction_<ContainerAllocator>>>;
  _actions_type actions;
  using _cost_type =
    float;
  _cost_type cost;

  // setters for named parameter idiom
  Type & set__robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot = _arg;
    return *this;
  }
  Type & set__actions(
    const std::vector<pyrobosim_msgs::msg::TaskAction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::TaskAction_<ContainerAllocator>>> & _arg)
  {
    this->actions = _arg;
    return *this;
  }
  Type & set__cost(
    const float & _arg)
  {
    this->cost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__TaskPlan
    std::shared_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__TaskPlan
    std::shared_ptr<pyrobosim_msgs::msg::TaskPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskPlan_ & other) const
  {
    if (this->robot != other.robot) {
      return false;
    }
    if (this->actions != other.actions) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskPlan_

// alias to use template instance with default allocator
using TaskPlan =
  pyrobosim_msgs::msg::TaskPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__TASK_PLAN__STRUCT_HPP_
