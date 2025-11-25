// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigation_interfaces_dummy:action/GoToPoi.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES_DUMMY__ACTION__DETAIL__GO_TO_POI__BUILDER_HPP_
#define NAVIGATION_INTERFACES_DUMMY__ACTION__DETAIL__GO_TO_POI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigation_interfaces_dummy/action/detail/go_to_poi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_Goal_poi_number
{
public:
  Init_GoToPoi_Goal_poi_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_Goal poi_number(::navigation_interfaces_dummy::action::GoToPoi_Goal::_poi_number_type arg)
  {
    msg_.poi_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_Goal>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_Goal_poi_number();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_Result_is_ok
{
public:
  Init_GoToPoi_Result_is_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_Result is_ok(::navigation_interfaces_dummy::action::GoToPoi_Result::_is_ok_type arg)
  {
    msg_.is_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_Result>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_Result_is_ok();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_Feedback_status
{
public:
  Init_GoToPoi_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_Feedback status(::navigation_interfaces_dummy::action::GoToPoi_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_Feedback>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_Feedback_status();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_SendGoal_Request_goal
{
public:
  explicit Init_GoToPoi_SendGoal_Request_goal(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request goal(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request msg_;
};

class Init_GoToPoi_SendGoal_Request_goal_id
{
public:
  Init_GoToPoi_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoi_SendGoal_Request_goal goal_id(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoi_SendGoal_Request_goal(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Request>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_SendGoal_Request_goal_id();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_SendGoal_Response_stamp
{
public:
  explicit Init_GoToPoi_SendGoal_Response_stamp(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response stamp(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response msg_;
};

class Init_GoToPoi_SendGoal_Response_accepted
{
public:
  Init_GoToPoi_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoi_SendGoal_Response_stamp accepted(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToPoi_SendGoal_Response_stamp(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Response>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_SendGoal_Response_accepted();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_SendGoal_Event_response
{
public:
  explicit Init_GoToPoi_SendGoal_Event_response(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event response(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event msg_;
};

class Init_GoToPoi_SendGoal_Event_request
{
public:
  explicit Init_GoToPoi_SendGoal_Event_request(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_GoToPoi_SendGoal_Event_response request(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoToPoi_SendGoal_Event_response(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event msg_;
};

class Init_GoToPoi_SendGoal_Event_info
{
public:
  Init_GoToPoi_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoi_SendGoal_Event_request info(::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoToPoi_SendGoal_Event_request(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_SendGoal_Event>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_SendGoal_Event_info();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_GetResult_Request_goal_id
{
public:
  Init_GoToPoi_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Request goal_id(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_GetResult_Request>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_GetResult_Request_goal_id();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_GetResult_Response_result
{
public:
  explicit Init_GoToPoi_GetResult_Response_result(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response result(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response msg_;
};

class Init_GoToPoi_GetResult_Response_status
{
public:
  Init_GoToPoi_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoi_GetResult_Response_result status(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToPoi_GetResult_Response_result(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_GetResult_Response>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_GetResult_Response_status();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_GetResult_Event_response
{
public:
  explicit Init_GoToPoi_GetResult_Event_response(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event response(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event msg_;
};

class Init_GoToPoi_GetResult_Event_request
{
public:
  explicit Init_GoToPoi_GetResult_Event_request(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_GoToPoi_GetResult_Event_response request(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoToPoi_GetResult_Event_response(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event msg_;
};

class Init_GoToPoi_GetResult_Event_info
{
public:
  Init_GoToPoi_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoi_GetResult_Event_request info(::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoToPoi_GetResult_Event_request(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_GetResult_Event>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_GetResult_Event_info();
}

}  // namespace navigation_interfaces_dummy


namespace navigation_interfaces_dummy
{

namespace action
{

namespace builder
{

class Init_GoToPoi_FeedbackMessage_feedback
{
public:
  explicit Init_GoToPoi_FeedbackMessage_feedback(::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage feedback(::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage msg_;
};

class Init_GoToPoi_FeedbackMessage_goal_id
{
public:
  Init_GoToPoi_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoi_FeedbackMessage_feedback goal_id(::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoi_FeedbackMessage_feedback(msg_);
  }

private:
  ::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces_dummy::action::GoToPoi_FeedbackMessage>()
{
  return navigation_interfaces_dummy::action::builder::Init_GoToPoi_FeedbackMessage_goal_id();
}

}  // namespace navigation_interfaces_dummy

#endif  // NAVIGATION_INTERFACES_DUMMY__ACTION__DETAIL__GO_TO_POI__BUILDER_HPP_
