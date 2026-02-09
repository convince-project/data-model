// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/robot_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__RobotState __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->battery_level = 0.0;
      this->executing_action = false;
      this->holding_object = false;
      this->manipulated_object = "";
      this->last_visited_location = "";
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc),
    pose(_alloc, _init),
    manipulated_object(_alloc),
    last_visited_location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->battery_level = 0.0;
      this->executing_action = false;
      this->holding_object = false;
      this->manipulated_object = "";
      this->last_visited_location = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _battery_level_type =
    double;
  _battery_level_type battery_level;
  using _executing_action_type =
    bool;
  _executing_action_type executing_action;
  using _holding_object_type =
    bool;
  _holding_object_type holding_object;
  using _manipulated_object_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _manipulated_object_type manipulated_object;
  using _last_visited_location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_visited_location_type last_visited_location;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__battery_level(
    const double & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__executing_action(
    const bool & _arg)
  {
    this->executing_action = _arg;
    return *this;
  }
  Type & set__holding_object(
    const bool & _arg)
  {
    this->holding_object = _arg;
    return *this;
  }
  Type & set__manipulated_object(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->manipulated_object = _arg;
    return *this;
  }
  Type & set__last_visited_location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_visited_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__RobotState
    std::shared_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__RobotState
    std::shared_ptr<pyrobosim_msgs::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->executing_action != other.executing_action) {
      return false;
    }
    if (this->holding_object != other.holding_object) {
      return false;
    }
    if (this->manipulated_object != other.manipulated_object) {
      return false;
    }
    if (this->last_visited_location != other.last_visited_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  pyrobosim_msgs::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
