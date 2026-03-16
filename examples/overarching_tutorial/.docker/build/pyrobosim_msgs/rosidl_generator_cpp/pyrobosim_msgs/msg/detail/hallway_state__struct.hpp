// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/HallwayState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/hallway_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__HallwayState __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__HallwayState __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HallwayState_
{
  using Type = HallwayState_<ContainerAllocator>;

  explicit HallwayState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->room_start = "";
      this->room_end = "";
      this->is_open = false;
      this->is_locked = false;
    }
  }

  explicit HallwayState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    room_start(_alloc),
    room_end(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->room_start = "";
      this->room_end = "";
      this->is_open = false;
      this->is_locked = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _room_start_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _room_start_type room_start;
  using _room_end_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _room_end_type room_end;
  using _is_open_type =
    bool;
  _is_open_type is_open;
  using _is_locked_type =
    bool;
  _is_locked_type is_locked;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__room_start(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->room_start = _arg;
    return *this;
  }
  Type & set__room_end(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->room_end = _arg;
    return *this;
  }
  Type & set__is_open(
    const bool & _arg)
  {
    this->is_open = _arg;
    return *this;
  }
  Type & set__is_locked(
    const bool & _arg)
  {
    this->is_locked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::HallwayState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::HallwayState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__HallwayState
    std::shared_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__HallwayState
    std::shared_ptr<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HallwayState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->room_start != other.room_start) {
      return false;
    }
    if (this->room_end != other.room_end) {
      return false;
    }
    if (this->is_open != other.is_open) {
      return false;
    }
    if (this->is_locked != other.is_locked) {
      return false;
    }
    return true;
  }
  bool operator!=(const HallwayState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HallwayState_

// alias to use template instance with default allocator
using HallwayState =
  pyrobosim_msgs::msg::HallwayState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__HALLWAY_STATE__STRUCT_HPP_
