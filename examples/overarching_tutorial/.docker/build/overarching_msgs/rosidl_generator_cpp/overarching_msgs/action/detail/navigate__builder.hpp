// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from overarching_msgs:action/Navigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "overarching_msgs/action/navigate.hpp"


#ifndef OVERARCHING_MSGS__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
#define OVERARCHING_MSGS__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "overarching_msgs/action/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_Goal_location_id
{
public:
  Init_Navigate_Goal_location_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::overarching_msgs::action::Navigate_Goal location_id(::overarching_msgs::action::Navigate_Goal::_location_id_type arg)
  {
    msg_.location_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_Goal>()
{
  return overarching_msgs::action::builder::Init_Navigate_Goal_location_id();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_Result>()
{
  return ::overarching_msgs::action::Navigate_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_Feedback>()
{
  return ::overarching_msgs::action::Navigate_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Request_goal
{
public:
  explicit Init_Navigate_SendGoal_Request_goal(::overarching_msgs::action::Navigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::action::Navigate_SendGoal_Request goal(::overarching_msgs::action::Navigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Request msg_;
};

class Init_Navigate_SendGoal_Request_goal_id
{
public:
  Init_Navigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Request_goal goal_id(::overarching_msgs::action::Navigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_SendGoal_Request_goal(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_SendGoal_Request>()
{
  return overarching_msgs::action::builder::Init_Navigate_SendGoal_Request_goal_id();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Response_stamp
{
public:
  explicit Init_Navigate_SendGoal_Response_stamp(::overarching_msgs::action::Navigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::action::Navigate_SendGoal_Response stamp(::overarching_msgs::action::Navigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Response msg_;
};

class Init_Navigate_SendGoal_Response_accepted
{
public:
  Init_Navigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Response_stamp accepted(::overarching_msgs::action::Navigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_SendGoal_Response>()
{
  return overarching_msgs::action::builder::Init_Navigate_SendGoal_Response_accepted();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Event_response
{
public:
  explicit Init_Navigate_SendGoal_Event_response(::overarching_msgs::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::action::Navigate_SendGoal_Event response(::overarching_msgs::action::Navigate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_request
{
public:
  explicit Init_Navigate_SendGoal_Event_request(::overarching_msgs::action::Navigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_SendGoal_Event_response request(::overarching_msgs::action::Navigate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_SendGoal_Event_response(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Event msg_;
};

class Init_Navigate_SendGoal_Event_info
{
public:
  Init_Navigate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Event_request info(::overarching_msgs::action::Navigate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_SendGoal_Event_request(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_SendGoal_Event>()
{
  return overarching_msgs::action::builder::Init_Navigate_SendGoal_Event_info();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Request_goal_id
{
public:
  Init_Navigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::overarching_msgs::action::Navigate_GetResult_Request goal_id(::overarching_msgs::action::Navigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_GetResult_Request>()
{
  return overarching_msgs::action::builder::Init_Navigate_GetResult_Request_goal_id();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Response_result
{
public:
  explicit Init_Navigate_GetResult_Response_result(::overarching_msgs::action::Navigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::action::Navigate_GetResult_Response result(::overarching_msgs::action::Navigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_GetResult_Response msg_;
};

class Init_Navigate_GetResult_Response_status
{
public:
  Init_Navigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Response_result status(::overarching_msgs::action::Navigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigate_GetResult_Response_result(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_GetResult_Response>()
{
  return overarching_msgs::action::builder::Init_Navigate_GetResult_Response_status();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Event_response
{
public:
  explicit Init_Navigate_GetResult_Event_response(::overarching_msgs::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::action::Navigate_GetResult_Event response(::overarching_msgs::action::Navigate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_request
{
public:
  explicit Init_Navigate_GetResult_Event_request(::overarching_msgs::action::Navigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Navigate_GetResult_Event_response request(::overarching_msgs::action::Navigate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Navigate_GetResult_Event_response(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_GetResult_Event msg_;
};

class Init_Navigate_GetResult_Event_info
{
public:
  Init_Navigate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Event_request info(::overarching_msgs::action::Navigate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Navigate_GetResult_Event_request(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_GetResult_Event>()
{
  return overarching_msgs::action::builder::Init_Navigate_GetResult_Event_info();
}

}  // namespace overarching_msgs


namespace overarching_msgs
{

namespace action
{

namespace builder
{

class Init_Navigate_FeedbackMessage_feedback
{
public:
  explicit Init_Navigate_FeedbackMessage_feedback(::overarching_msgs::action::Navigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::overarching_msgs::action::Navigate_FeedbackMessage feedback(::overarching_msgs::action::Navigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_FeedbackMessage msg_;
};

class Init_Navigate_FeedbackMessage_goal_id
{
public:
  Init_Navigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_FeedbackMessage_feedback goal_id(::overarching_msgs::action::Navigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::overarching_msgs::action::Navigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::overarching_msgs::action::Navigate_FeedbackMessage>()
{
  return overarching_msgs::action::builder::Init_Navigate_FeedbackMessage_goal_id();
}

}  // namespace overarching_msgs

#endif  // OVERARCHING_MSGS__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
