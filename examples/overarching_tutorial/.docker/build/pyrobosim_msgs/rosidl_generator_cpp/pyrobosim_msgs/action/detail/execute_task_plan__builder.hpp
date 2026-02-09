// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:action/ExecuteTaskPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/action/execute_task_plan.hpp"


#ifndef PYROBOSIM_MSGS__ACTION__DETAIL__EXECUTE_TASK_PLAN__BUILDER_HPP_
#define PYROBOSIM_MSGS__ACTION__DETAIL__EXECUTE_TASK_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/action/detail/execute_task_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_Goal_realtime_factor
{
public:
  explicit Init_ExecuteTaskPlan_Goal_realtime_factor(::pyrobosim_msgs::action::ExecuteTaskPlan_Goal & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Goal realtime_factor(::pyrobosim_msgs::action::ExecuteTaskPlan_Goal::_realtime_factor_type arg)
  {
    msg_.realtime_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Goal msg_;
};

class Init_ExecuteTaskPlan_Goal_delay
{
public:
  explicit Init_ExecuteTaskPlan_Goal_delay(::pyrobosim_msgs::action::ExecuteTaskPlan_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteTaskPlan_Goal_realtime_factor delay(::pyrobosim_msgs::action::ExecuteTaskPlan_Goal::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return Init_ExecuteTaskPlan_Goal_realtime_factor(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Goal msg_;
};

class Init_ExecuteTaskPlan_Goal_plan
{
public:
  Init_ExecuteTaskPlan_Goal_plan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_Goal_delay plan(::pyrobosim_msgs::action::ExecuteTaskPlan_Goal::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return Init_ExecuteTaskPlan_Goal_delay(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_Goal>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_Goal_plan();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_Result_num_total
{
public:
  explicit Init_ExecuteTaskPlan_Result_num_total(::pyrobosim_msgs::action::ExecuteTaskPlan_Result & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Result num_total(::pyrobosim_msgs::action::ExecuteTaskPlan_Result::_num_total_type arg)
  {
    msg_.num_total = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Result msg_;
};

class Init_ExecuteTaskPlan_Result_num_completed
{
public:
  explicit Init_ExecuteTaskPlan_Result_num_completed(::pyrobosim_msgs::action::ExecuteTaskPlan_Result & msg)
  : msg_(msg)
  {}
  Init_ExecuteTaskPlan_Result_num_total num_completed(::pyrobosim_msgs::action::ExecuteTaskPlan_Result::_num_completed_type arg)
  {
    msg_.num_completed = std::move(arg);
    return Init_ExecuteTaskPlan_Result_num_total(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Result msg_;
};

class Init_ExecuteTaskPlan_Result_execution_result
{
public:
  Init_ExecuteTaskPlan_Result_execution_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_Result_num_completed execution_result(::pyrobosim_msgs::action::ExecuteTaskPlan_Result::_execution_result_type arg)
  {
    msg_.execution_result = std::move(arg);
    return Init_ExecuteTaskPlan_Result_num_completed(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_Result>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_Result_execution_result();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_Feedback>()
{
  return ::pyrobosim_msgs::action::ExecuteTaskPlan_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteTaskPlan_SendGoal_Request_goal(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request goal(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request msg_;
};

class Init_ExecuteTaskPlan_SendGoal_Request_goal_id
{
public:
  Init_ExecuteTaskPlan_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_SendGoal_Request_goal goal_id(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTaskPlan_SendGoal_Request_goal(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Request>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_SendGoal_Request_goal_id();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteTaskPlan_SendGoal_Response_stamp(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response stamp(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response msg_;
};

class Init_ExecuteTaskPlan_SendGoal_Response_accepted
{
public:
  Init_ExecuteTaskPlan_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_SendGoal_Response_stamp accepted(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteTaskPlan_SendGoal_Response_stamp(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Response>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_SendGoal_Response_accepted();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_SendGoal_Event_response
{
public:
  explicit Init_ExecuteTaskPlan_SendGoal_Event_response(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event response(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event msg_;
};

class Init_ExecuteTaskPlan_SendGoal_Event_request
{
public:
  explicit Init_ExecuteTaskPlan_SendGoal_Event_request(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteTaskPlan_SendGoal_Event_response request(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteTaskPlan_SendGoal_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event msg_;
};

class Init_ExecuteTaskPlan_SendGoal_Event_info
{
public:
  Init_ExecuteTaskPlan_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_SendGoal_Event_request info(::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteTaskPlan_SendGoal_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_SendGoal_Event>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_SendGoal_Event_info();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_GetResult_Request_goal_id
{
public:
  Init_ExecuteTaskPlan_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Request goal_id(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Request>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_GetResult_Request_goal_id();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_GetResult_Response_result
{
public:
  explicit Init_ExecuteTaskPlan_GetResult_Response_result(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response result(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response msg_;
};

class Init_ExecuteTaskPlan_GetResult_Response_status
{
public:
  Init_ExecuteTaskPlan_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_GetResult_Response_result status(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteTaskPlan_GetResult_Response_result(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Response>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_GetResult_Response_status();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_GetResult_Event_response
{
public:
  explicit Init_ExecuteTaskPlan_GetResult_Event_response(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event response(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event msg_;
};

class Init_ExecuteTaskPlan_GetResult_Event_request
{
public:
  explicit Init_ExecuteTaskPlan_GetResult_Event_request(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteTaskPlan_GetResult_Event_response request(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteTaskPlan_GetResult_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event msg_;
};

class Init_ExecuteTaskPlan_GetResult_Event_info
{
public:
  Init_ExecuteTaskPlan_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_GetResult_Event_request info(::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteTaskPlan_GetResult_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_GetResult_Event>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_GetResult_Event_info();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteTaskPlan_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteTaskPlan_FeedbackMessage_feedback(::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage feedback(::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage msg_;
};

class Init_ExecuteTaskPlan_FeedbackMessage_goal_id
{
public:
  Init_ExecuteTaskPlan_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteTaskPlan_FeedbackMessage_feedback goal_id(::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteTaskPlan_FeedbackMessage_feedback(msg_);
  }

private:
  ::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::ExecuteTaskPlan_FeedbackMessage>()
{
  return pyrobosim_msgs::action::builder::Init_ExecuteTaskPlan_FeedbackMessage_goal_id();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__ACTION__DETAIL__EXECUTE_TASK_PLAN__BUILDER_HPP_
