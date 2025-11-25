// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__STRUCT_HPP_
#define PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__people_detector_filter_interfaces_dummy__msg__IsFollowed __attribute__((deprecated))
#else
# define DEPRECATED__people_detector_filter_interfaces_dummy__msg__IsFollowed __declspec(deprecated)
#endif

namespace people_detector_filter_interfaces_dummy
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IsFollowed_
{
  using Type = IsFollowed_<ContainerAllocator>;

  explicit IsFollowed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_followed = false;
    }
  }

  explicit IsFollowed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_followed = false;
    }
  }

  // field types and members
  using _is_followed_type =
    bool;
  _is_followed_type is_followed;

  // setters for named parameter idiom
  Type & set__is_followed(
    const bool & _arg)
  {
    this->is_followed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator> *;
  using ConstRawPtr =
    const people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__people_detector_filter_interfaces_dummy__msg__IsFollowed
    std::shared_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__people_detector_filter_interfaces_dummy__msg__IsFollowed
    std::shared_ptr<people_detector_filter_interfaces_dummy::msg::IsFollowed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsFollowed_ & other) const
  {
    if (this->is_followed != other.is_followed) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsFollowed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsFollowed_

// alias to use template instance with default allocator
using IsFollowed =
  people_detector_filter_interfaces_dummy::msg::IsFollowed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace people_detector_filter_interfaces_dummy

#endif  // PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__STRUCT_HPP_
