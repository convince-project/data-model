// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pyrobosim_msgs:action/ExecuteTaskAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/action/execute_task_action.hpp"


#ifndef PYROBOSIM_MSGS__ACTION__DETAIL__EXECUTE_TASK_ACTION__STRUCT_HPP_
#define PYROBOSIM_MSGS__ACTION__DETAIL__EXECUTE_TASK_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action'
#include "pyrobosim_msgs/msg/detail/task_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Goal __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_Goal_
{
  using Type = ExecuteTaskAction_Goal_<ContainerAllocator>;

  explicit ExecuteTaskAction_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->realtime_factor = 1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->realtime_factor = 0.0f;
    }
  }

  explicit ExecuteTaskAction_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->realtime_factor = 1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->realtime_factor = 0.0f;
    }
  }

  // field types and members
  using _action_type =
    pyrobosim_msgs::msg::TaskAction_<ContainerAllocator>;
  _action_type action;
  using _realtime_factor_type =
    float;
  _realtime_factor_type realtime_factor;

  // setters for named parameter idiom
  Type & set__action(
    const pyrobosim_msgs::msg::TaskAction_<ContainerAllocator> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__realtime_factor(
    const float & _arg)
  {
    this->realtime_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Goal
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Goal
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_Goal_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->realtime_factor != other.realtime_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_Goal_

// alias to use template instance with default allocator
using ExecuteTaskAction_Goal =
  pyrobosim_msgs::action::ExecuteTaskAction_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'execution_result'
#include "pyrobosim_msgs/msg/detail/execution_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Result __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Result __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_Result_
{
  using Type = ExecuteTaskAction_Result_<ContainerAllocator>;

  explicit ExecuteTaskAction_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : execution_result(_init)
  {
    (void)_init;
  }

  explicit ExecuteTaskAction_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : execution_result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _execution_result_type =
    pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator>;
  _execution_result_type execution_result;

  // setters for named parameter idiom
  Type & set__execution_result(
    const pyrobosim_msgs::msg::ExecutionResult_<ContainerAllocator> & _arg)
  {
    this->execution_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Result
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Result
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_Result_ & other) const
  {
    if (this->execution_result != other.execution_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_Result_

// alias to use template instance with default allocator
using ExecuteTaskAction_Result =
  pyrobosim_msgs::action::ExecuteTaskAction_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Feedback __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_Feedback_
{
  using Type = ExecuteTaskAction_Feedback_<ContainerAllocator>;

  explicit ExecuteTaskAction_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ExecuteTaskAction_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Feedback
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_Feedback
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_Feedback_

// alias to use template instance with default allocator
using ExecuteTaskAction_Feedback =
  pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pyrobosim_msgs/action/detail/execute_task_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Request __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_SendGoal_Request_
{
  using Type = ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteTaskAction_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteTaskAction_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pyrobosim_msgs::action::ExecuteTaskAction_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Request
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Request
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteTaskAction_SendGoal_Request =
  pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Response __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_SendGoal_Response_
{
  using Type = ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteTaskAction_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteTaskAction_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Response
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Response
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteTaskAction_SendGoal_Response =
  pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Event __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_SendGoal_Event_
{
  using Type = ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>;

  explicit ExecuteTaskAction_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteTaskAction_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Event
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_SendGoal_Event
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_SendGoal_Event_ & other) const
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
  bool operator!=(const ExecuteTaskAction_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_SendGoal_Event_

// alias to use template instance with default allocator
using ExecuteTaskAction_SendGoal_Event =
  pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs

namespace pyrobosim_msgs
{

namespace action
{

struct ExecuteTaskAction_SendGoal
{
  using Request = pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Request;
  using Response = pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Response;
  using Event = pyrobosim_msgs::action::ExecuteTaskAction_SendGoal_Event;
};

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Request __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_GetResult_Request_
{
  using Type = ExecuteTaskAction_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteTaskAction_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteTaskAction_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Request
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Request
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteTaskAction_GetResult_Request =
  pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "pyrobosim_msgs/action/detail/execute_task_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Response __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_GetResult_Response_
{
  using Type = ExecuteTaskAction_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteTaskAction_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteTaskAction_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pyrobosim_msgs::action::ExecuteTaskAction_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Response
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Response
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteTaskAction_GetResult_Response =
  pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Event __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_GetResult_Event_
{
  using Type = ExecuteTaskAction_GetResult_Event_<ContainerAllocator>;

  explicit ExecuteTaskAction_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteTaskAction_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Event
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_GetResult_Event
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_GetResult_Event_ & other) const
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
  bool operator!=(const ExecuteTaskAction_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_GetResult_Event_

// alias to use template instance with default allocator
using ExecuteTaskAction_GetResult_Event =
  pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs

namespace pyrobosim_msgs
{

namespace action
{

struct ExecuteTaskAction_GetResult
{
  using Request = pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Request;
  using Response = pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Response;
  using Event = pyrobosim_msgs::action::ExecuteTaskAction_GetResult_Event;
};

}  // namespace action

}  // namespace pyrobosim_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pyrobosim_msgs/action/detail/execute_task_action__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_FeedbackMessage __declspec(deprecated)
#endif

namespace pyrobosim_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteTaskAction_FeedbackMessage_
{
  using Type = ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteTaskAction_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteTaskAction_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pyrobosim_msgs::action::ExecuteTaskAction_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_FeedbackMessage
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pyrobosim_msgs__action__ExecuteTaskAction_FeedbackMessage
    std::shared_ptr<pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteTaskAction_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteTaskAction_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteTaskAction_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteTaskAction_FeedbackMessage =
  pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pyrobosim_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pyrobosim_msgs
{

namespace action
{

struct ExecuteTaskAction
{
  /// The goal message defined in the action definition.
  using Goal = pyrobosim_msgs::action::ExecuteTaskAction_Goal;
  /// The result message defined in the action definition.
  using Result = pyrobosim_msgs::action::ExecuteTaskAction_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pyrobosim_msgs::action::ExecuteTaskAction_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pyrobosim_msgs::action::ExecuteTaskAction_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pyrobosim_msgs::action::ExecuteTaskAction_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pyrobosim_msgs::action::ExecuteTaskAction_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteTaskAction ExecuteTaskAction;

}  // namespace action

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__ACTION__DETAIL__EXECUTE_TASK_ACTION__STRUCT_HPP_
