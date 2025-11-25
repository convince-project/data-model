// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from notify_user_interfaces_dummy:srv/StartAlarm.idl
// generated code does not contain a copyright notice

#ifndef NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__STRUCT_HPP_
#define NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Request __attribute__((deprecated))
#else
# define DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Request __declspec(deprecated)
#endif

namespace notify_user_interfaces_dummy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartAlarm_Request_
{
  using Type = StartAlarm_Request_<ContainerAllocator>;

  explicit StartAlarm_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit StartAlarm_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Request
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Request
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartAlarm_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartAlarm_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartAlarm_Request_

// alias to use template instance with default allocator
using StartAlarm_Request =
  notify_user_interfaces_dummy::srv::StartAlarm_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace notify_user_interfaces_dummy


#ifndef _WIN32
# define DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Response __attribute__((deprecated))
#else
# define DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Response __declspec(deprecated)
#endif

namespace notify_user_interfaces_dummy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartAlarm_Response_
{
  using Type = StartAlarm_Response_<ContainerAllocator>;

  explicit StartAlarm_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_ok = false;
    }
  }

  explicit StartAlarm_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_ok = false;
    }
  }

  // field types and members
  using _is_ok_type =
    bool;
  _is_ok_type is_ok;

  // setters for named parameter idiom
  Type & set__is_ok(
    const bool & _arg)
  {
    this->is_ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Response
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Response
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartAlarm_Response_ & other) const
  {
    if (this->is_ok != other.is_ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartAlarm_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartAlarm_Response_

// alias to use template instance with default allocator
using StartAlarm_Response =
  notify_user_interfaces_dummy::srv::StartAlarm_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace notify_user_interfaces_dummy


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Event __attribute__((deprecated))
#else
# define DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Event __declspec(deprecated)
#endif

namespace notify_user_interfaces_dummy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartAlarm_Event_
{
  using Type = StartAlarm_Event_<ContainerAllocator>;

  explicit StartAlarm_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit StartAlarm_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<notify_user_interfaces_dummy::srv::StartAlarm_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<notify_user_interfaces_dummy::srv::StartAlarm_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Event
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__notify_user_interfaces_dummy__srv__StartAlarm_Event
    std::shared_ptr<notify_user_interfaces_dummy::srv::StartAlarm_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartAlarm_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartAlarm_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartAlarm_Event_

// alias to use template instance with default allocator
using StartAlarm_Event =
  notify_user_interfaces_dummy::srv::StartAlarm_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

namespace notify_user_interfaces_dummy
{

namespace srv
{

struct StartAlarm
{
  using Request = notify_user_interfaces_dummy::srv::StartAlarm_Request;
  using Response = notify_user_interfaces_dummy::srv::StartAlarm_Response;
  using Event = notify_user_interfaces_dummy::srv::StartAlarm_Event;
};

}  // namespace srv

}  // namespace notify_user_interfaces_dummy

#endif  // NOTIFY_USER_INTERFACES_DUMMY__SRV__DETAIL__START_ALARM__STRUCT_HPP_
