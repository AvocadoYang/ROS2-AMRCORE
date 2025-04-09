// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from humanoid_pkg:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__ACTION__DETAIL__MISSION__BUILDER_HPP_
#define HUMANOID_PKG__ACTION__DETAIL__MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "humanoid_pkg/action/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_Goal_request_json
{
public:
  Init_Mission_Goal_request_json()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::humanoid_pkg::action::Mission_Goal request_json(::humanoid_pkg::action::Mission_Goal::_request_json_type arg)
  {
    msg_.request_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_Goal>()
{
  return humanoid_pkg::action::builder::Init_Mission_Goal_request_json();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_Result_result_message
{
public:
  explicit Init_Mission_Result_result_message(::humanoid_pkg::action::Mission_Result & msg)
  : msg_(msg)
  {}
  ::humanoid_pkg::action::Mission_Result result_message(::humanoid_pkg::action::Mission_Result::_result_message_type arg)
  {
    msg_.result_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_Result msg_;
};

class Init_Mission_Result_result_status
{
public:
  Init_Mission_Result_result_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_Result_result_message result_status(::humanoid_pkg::action::Mission_Result::_result_status_type arg)
  {
    msg_.result_status = std::move(arg);
    return Init_Mission_Result_result_message(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_Result>()
{
  return humanoid_pkg::action::builder::Init_Mission_Result_result_status();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_Feedback_feedback_json
{
public:
  Init_Mission_Feedback_feedback_json()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::humanoid_pkg::action::Mission_Feedback feedback_json(::humanoid_pkg::action::Mission_Feedback::_feedback_json_type arg)
  {
    msg_.feedback_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_Feedback>()
{
  return humanoid_pkg::action::builder::Init_Mission_Feedback_feedback_json();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_SendGoal_Request_goal
{
public:
  explicit Init_Mission_SendGoal_Request_goal(::humanoid_pkg::action::Mission_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::humanoid_pkg::action::Mission_SendGoal_Request goal(::humanoid_pkg::action::Mission_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_SendGoal_Request msg_;
};

class Init_Mission_SendGoal_Request_goal_id
{
public:
  Init_Mission_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_SendGoal_Request_goal goal_id(::humanoid_pkg::action::Mission_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Mission_SendGoal_Request_goal(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_SendGoal_Request>()
{
  return humanoid_pkg::action::builder::Init_Mission_SendGoal_Request_goal_id();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_SendGoal_Response_stamp
{
public:
  explicit Init_Mission_SendGoal_Response_stamp(::humanoid_pkg::action::Mission_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::humanoid_pkg::action::Mission_SendGoal_Response stamp(::humanoid_pkg::action::Mission_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_SendGoal_Response msg_;
};

class Init_Mission_SendGoal_Response_accepted
{
public:
  Init_Mission_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_SendGoal_Response_stamp accepted(::humanoid_pkg::action::Mission_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Mission_SendGoal_Response_stamp(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_SendGoal_Response>()
{
  return humanoid_pkg::action::builder::Init_Mission_SendGoal_Response_accepted();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_GetResult_Request_goal_id
{
public:
  Init_Mission_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::humanoid_pkg::action::Mission_GetResult_Request goal_id(::humanoid_pkg::action::Mission_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_GetResult_Request>()
{
  return humanoid_pkg::action::builder::Init_Mission_GetResult_Request_goal_id();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_GetResult_Response_result
{
public:
  explicit Init_Mission_GetResult_Response_result(::humanoid_pkg::action::Mission_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::humanoid_pkg::action::Mission_GetResult_Response result(::humanoid_pkg::action::Mission_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_GetResult_Response msg_;
};

class Init_Mission_GetResult_Response_status
{
public:
  Init_Mission_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_GetResult_Response_result status(::humanoid_pkg::action::Mission_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Mission_GetResult_Response_result(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_GetResult_Response>()
{
  return humanoid_pkg::action::builder::Init_Mission_GetResult_Response_status();
}

}  // namespace humanoid_pkg


namespace humanoid_pkg
{

namespace action
{

namespace builder
{

class Init_Mission_FeedbackMessage_feedback
{
public:
  explicit Init_Mission_FeedbackMessage_feedback(::humanoid_pkg::action::Mission_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::humanoid_pkg::action::Mission_FeedbackMessage feedback(::humanoid_pkg::action::Mission_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_FeedbackMessage msg_;
};

class Init_Mission_FeedbackMessage_goal_id
{
public:
  Init_Mission_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_FeedbackMessage_feedback goal_id(::humanoid_pkg::action::Mission_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Mission_FeedbackMessage_feedback(msg_);
  }

private:
  ::humanoid_pkg::action::Mission_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::action::Mission_FeedbackMessage>()
{
  return humanoid_pkg::action::builder::Init_Mission_FeedbackMessage_goal_id();
}

}  // namespace humanoid_pkg

#endif  // HUMANOID_PKG__ACTION__DETAIL__MISSION__BUILDER_HPP_
