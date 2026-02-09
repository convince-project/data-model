// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pyrobosim_msgs:action/DetectObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/action/detect_objects.hpp"


#ifndef PYROBOSIM_MSGS__ACTION__DETAIL__DETECT_OBJECTS__BUILDER_HPP_
#define PYROBOSIM_MSGS__ACTION__DETAIL__DETECT_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pyrobosim_msgs/action/detail/detect_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_Goal_target_object
{
public:
  Init_DetectObjects_Goal_target_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::action::DetectObjects_Goal target_object(::pyrobosim_msgs::action::DetectObjects_Goal::_target_object_type arg)
  {
    msg_.target_object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_Goal>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_Goal_target_object();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_Result_detected_objects
{
public:
  explicit Init_DetectObjects_Result_detected_objects(::pyrobosim_msgs::action::DetectObjects_Result & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_Result detected_objects(::pyrobosim_msgs::action::DetectObjects_Result::_detected_objects_type arg)
  {
    msg_.detected_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_Result msg_;
};

class Init_DetectObjects_Result_execution_result
{
public:
  Init_DetectObjects_Result_execution_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_Result_detected_objects execution_result(::pyrobosim_msgs::action::DetectObjects_Result::_execution_result_type arg)
  {
    msg_.execution_result = std::move(arg);
    return Init_DetectObjects_Result_detected_objects(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_Result>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_Result_execution_result();
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
auto build<::pyrobosim_msgs::action::DetectObjects_Feedback>()
{
  return ::pyrobosim_msgs::action::DetectObjects_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_SendGoal_Request_goal
{
public:
  explicit Init_DetectObjects_SendGoal_Request_goal(::pyrobosim_msgs::action::DetectObjects_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Request goal(::pyrobosim_msgs::action::DetectObjects_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Request msg_;
};

class Init_DetectObjects_SendGoal_Request_goal_id
{
public:
  Init_DetectObjects_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_SendGoal_Request_goal goal_id(::pyrobosim_msgs::action::DetectObjects_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DetectObjects_SendGoal_Request_goal(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_SendGoal_Request>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_SendGoal_Request_goal_id();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_SendGoal_Response_stamp
{
public:
  explicit Init_DetectObjects_SendGoal_Response_stamp(::pyrobosim_msgs::action::DetectObjects_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Response stamp(::pyrobosim_msgs::action::DetectObjects_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Response msg_;
};

class Init_DetectObjects_SendGoal_Response_accepted
{
public:
  Init_DetectObjects_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_SendGoal_Response_stamp accepted(::pyrobosim_msgs::action::DetectObjects_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DetectObjects_SendGoal_Response_stamp(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_SendGoal_Response>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_SendGoal_Response_accepted();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_SendGoal_Event_response
{
public:
  explicit Init_DetectObjects_SendGoal_Event_response(::pyrobosim_msgs::action::DetectObjects_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Event response(::pyrobosim_msgs::action::DetectObjects_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Event msg_;
};

class Init_DetectObjects_SendGoal_Event_request
{
public:
  explicit Init_DetectObjects_SendGoal_Event_request(::pyrobosim_msgs::action::DetectObjects_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DetectObjects_SendGoal_Event_response request(::pyrobosim_msgs::action::DetectObjects_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectObjects_SendGoal_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Event msg_;
};

class Init_DetectObjects_SendGoal_Event_info
{
public:
  Init_DetectObjects_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_SendGoal_Event_request info(::pyrobosim_msgs::action::DetectObjects_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectObjects_SendGoal_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_SendGoal_Event>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_SendGoal_Event_info();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_GetResult_Request_goal_id
{
public:
  Init_DetectObjects_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Request goal_id(::pyrobosim_msgs::action::DetectObjects_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_GetResult_Request>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_GetResult_Request_goal_id();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_GetResult_Response_result
{
public:
  explicit Init_DetectObjects_GetResult_Response_result(::pyrobosim_msgs::action::DetectObjects_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Response result(::pyrobosim_msgs::action::DetectObjects_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Response msg_;
};

class Init_DetectObjects_GetResult_Response_status
{
public:
  Init_DetectObjects_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_GetResult_Response_result status(::pyrobosim_msgs::action::DetectObjects_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DetectObjects_GetResult_Response_result(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_GetResult_Response>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_GetResult_Response_status();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_GetResult_Event_response
{
public:
  explicit Init_DetectObjects_GetResult_Event_response(::pyrobosim_msgs::action::DetectObjects_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Event response(::pyrobosim_msgs::action::DetectObjects_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Event msg_;
};

class Init_DetectObjects_GetResult_Event_request
{
public:
  explicit Init_DetectObjects_GetResult_Event_request(::pyrobosim_msgs::action::DetectObjects_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DetectObjects_GetResult_Event_response request(::pyrobosim_msgs::action::DetectObjects_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectObjects_GetResult_Event_response(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Event msg_;
};

class Init_DetectObjects_GetResult_Event_info
{
public:
  Init_DetectObjects_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_GetResult_Event_request info(::pyrobosim_msgs::action::DetectObjects_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectObjects_GetResult_Event_request(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_GetResult_Event>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_GetResult_Event_info();
}

}  // namespace pyrobosim_msgs


namespace pyrobosim_msgs
{

namespace action
{

namespace builder
{

class Init_DetectObjects_FeedbackMessage_feedback
{
public:
  explicit Init_DetectObjects_FeedbackMessage_feedback(::pyrobosim_msgs::action::DetectObjects_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pyrobosim_msgs::action::DetectObjects_FeedbackMessage feedback(::pyrobosim_msgs::action::DetectObjects_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_FeedbackMessage msg_;
};

class Init_DetectObjects_FeedbackMessage_goal_id
{
public:
  Init_DetectObjects_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectObjects_FeedbackMessage_feedback goal_id(::pyrobosim_msgs::action::DetectObjects_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DetectObjects_FeedbackMessage_feedback(msg_);
  }

private:
  ::pyrobosim_msgs::action::DetectObjects_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pyrobosim_msgs::action::DetectObjects_FeedbackMessage>()
{
  return pyrobosim_msgs::action::builder::Init_DetectObjects_FeedbackMessage_goal_id();
}

}  // namespace pyrobosim_msgs

#endif  // PYROBOSIM_MSGS__ACTION__DETAIL__DETECT_OBJECTS__BUILDER_HPP_
