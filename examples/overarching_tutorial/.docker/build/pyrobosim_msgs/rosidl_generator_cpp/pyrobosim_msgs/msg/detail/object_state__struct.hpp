// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/ObjectState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/object_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__ObjectState __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__ObjectState __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectState_
{
  using Type = ObjectState_<ContainerAllocator>;

  explicit ObjectState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->category = "";
      this->parent = "";
    }
  }

  explicit ObjectState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    category(_alloc),
    parent(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->category = "";
      this->parent = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;
  using _parent_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_type parent;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__parent(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::ObjectState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::ObjectState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__ObjectState
    std::shared_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__ObjectState
    std::shared_ptr<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    if (this->parent != other.parent) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectState_

// alias to use template instance with default allocator
using ObjectState =
  pyrobosim_msgs::msg::ObjectState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__OBJECT_STATE__STRUCT_HPP_
