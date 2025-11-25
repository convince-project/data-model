// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bt_interfaces_dummy:srv/TickCondition.idl
// generated code does not contain a copyright notice

#ifndef BT_INTERFACES_DUMMY__SRV__DETAIL__TICK_CONDITION__STRUCT_HPP_
#define BT_INTERFACES_DUMMY__SRV__DETAIL__TICK_CONDITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Request __attribute__((deprecated))
#else
# define DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Request __declspec(deprecated)
#endif

namespace bt_interfaces_dummy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TickCondition_Request_
{
  using Type = TickCondition_Request_<ContainerAllocator>;

  explicit TickCondition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TickCondition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Request
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Request
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TickCondition_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TickCondition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TickCondition_Request_

// alias to use template instance with default allocator
using TickCondition_Request =
  bt_interfaces_dummy::srv::TickCondition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bt_interfaces_dummy


#ifndef _WIN32
# define DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Response __attribute__((deprecated))
#else
# define DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Response __declspec(deprecated)
#endif

namespace bt_interfaces_dummy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TickCondition_Response_
{
  using Type = TickCondition_Response_<ContainerAllocator>;

  explicit TickCondition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->is_ok = false;
    }
  }

  explicit TickCondition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->is_ok = false;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _is_ok_type =
    bool;
  _is_ok_type is_ok;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__is_ok(
    const bool & _arg)
  {
    this->is_ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Response
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Response
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TickCondition_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->is_ok != other.is_ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const TickCondition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TickCondition_Response_

// alias to use template instance with default allocator
using TickCondition_Response =
  bt_interfaces_dummy::srv::TickCondition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bt_interfaces_dummy


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Event __attribute__((deprecated))
#else
# define DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Event __declspec(deprecated)
#endif

namespace bt_interfaces_dummy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TickCondition_Event_
{
  using Type = TickCondition_Event_<ContainerAllocator>;

  explicit TickCondition_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TickCondition_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bt_interfaces_dummy::srv::TickCondition_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bt_interfaces_dummy::srv::TickCondition_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Event
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bt_interfaces_dummy__srv__TickCondition_Event
    std::shared_ptr<bt_interfaces_dummy::srv::TickCondition_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TickCondition_Event_ & other) const
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
  bool operator!=(const TickCondition_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TickCondition_Event_

// alias to use template instance with default allocator
using TickCondition_Event =
  bt_interfaces_dummy::srv::TickCondition_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace bt_interfaces_dummy

namespace bt_interfaces_dummy
{

namespace srv
{

struct TickCondition
{
  using Request = bt_interfaces_dummy::srv::TickCondition_Request;
  using Response = bt_interfaces_dummy::srv::TickCondition_Response;
  using Event = bt_interfaces_dummy::srv::TickCondition_Event;
};

}  // namespace srv

}  // namespace bt_interfaces_dummy

#endif  // BT_INTERFACES_DUMMY__SRV__DETAIL__TICK_CONDITION__STRUCT_HPP_
