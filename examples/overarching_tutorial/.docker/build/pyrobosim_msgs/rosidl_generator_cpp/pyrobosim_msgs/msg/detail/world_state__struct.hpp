// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/msg/world_state.hpp"


#ifndef PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_HPP_
#define PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robots'
#include "pyrobosim_msgs/msg/detail/robot_state__struct.hpp"
// Member 'locations'
#include "pyrobosim_msgs/msg/detail/location_state__struct.hpp"
// Member 'hallways'
#include "pyrobosim_msgs/msg/detail/hallway_state__struct.hpp"
// Member 'objects'
#include "pyrobosim_msgs/msg/detail/object_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__msg__WorldState __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__msg__WorldState __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldState_
{
  using Type = WorldState_<ContainerAllocator>;

  explicit WorldState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WorldState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _robots_type =
    std::vector<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>>;
  _robots_type robots;
  using _locations_type =
    std::vector<pyrobosim_msgs::msg::LocationState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::LocationState_<ContainerAllocator>>>;
  _locations_type locations;
  using _hallways_type =
    std::vector<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>>;
  _hallways_type hallways;
  using _objects_type =
    std::vector<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__robots(
    const std::vector<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::RobotState_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__locations(
    const std::vector<pyrobosim_msgs::msg::LocationState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::LocationState_<ContainerAllocator>>> & _arg)
  {
    this->locations = _arg;
    return *this;
  }
  Type & set__hallways(
    const std::vector<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::HallwayState_<ContainerAllocator>>> & _arg)
  {
    this->hallways = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::msg::ObjectState_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::msg::WorldState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::msg::WorldState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::WorldState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::msg::WorldState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__msg__WorldState
    std::shared_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__msg__WorldState
    std::shared_ptr<pyrobosim_msgs::msg::WorldState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldState_ & other) const
  {
    if (this->robots != other.robots) {
      return false;
    }
    if (this->locations != other.locations) {
      return false;
    }
    if (this->hallways != other.hallways) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldState_

// alias to use template instance with default allocator
using WorldState =
  pyrobosim_msgs::msg::WorldState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_HPP_
