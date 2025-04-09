// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from humanoid_pkg:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__ACTION__DETAIL__MISSION__TRAITS_HPP_
#define HUMANOID_PKG__ACTION__DETAIL__MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "humanoid_pkg/action/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: request_json
  {
    out << "request_json: ";
    rosidl_generator_traits::value_to_yaml(msg.request_json, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request_json
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_json: ";
    rosidl_generator_traits::value_to_yaml(msg.request_json, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_Goal & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_Goal>()
{
  return "humanoid_pkg::action::Mission_Goal";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_Goal>()
{
  return "humanoid_pkg/action/Mission_Goal";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<humanoid_pkg::action::Mission_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_status
  {
    out << "result_status: ";
    rosidl_generator_traits::value_to_yaml(msg.result_status, out);
    out << ", ";
  }

  // member: result_message
  {
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_status: ";
    rosidl_generator_traits::value_to_yaml(msg.result_status, out);
    out << "\n";
  }

  // member: result_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_Result & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_Result>()
{
  return "humanoid_pkg::action::Mission_Result";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_Result>()
{
  return "humanoid_pkg/action/Mission_Result";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<humanoid_pkg::action::Mission_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback_json
  {
    out << "feedback_json: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_json, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback_json
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_json: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_json, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_Feedback & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_Feedback>()
{
  return "humanoid_pkg::action::Mission_Feedback";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_Feedback>()
{
  return "humanoid_pkg/action/Mission_Feedback";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<humanoid_pkg::action::Mission_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "humanoid_pkg/action/detail/mission__traits.hpp"

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_SendGoal_Request & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_SendGoal_Request>()
{
  return "humanoid_pkg::action::Mission_SendGoal_Request";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_SendGoal_Request>()
{
  return "humanoid_pkg/action/Mission_SendGoal_Request";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<humanoid_pkg::action::Mission_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<humanoid_pkg::action::Mission_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<humanoid_pkg::action::Mission_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_SendGoal_Response & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_SendGoal_Response>()
{
  return "humanoid_pkg::action::Mission_SendGoal_Response";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_SendGoal_Response>()
{
  return "humanoid_pkg/action/Mission_SendGoal_Response";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<humanoid_pkg::action::Mission_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<humanoid_pkg::action::Mission_SendGoal>()
{
  return "humanoid_pkg::action::Mission_SendGoal";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_SendGoal>()
{
  return "humanoid_pkg/action/Mission_SendGoal";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<humanoid_pkg::action::Mission_SendGoal_Request>::value &&
    has_fixed_size<humanoid_pkg::action::Mission_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<humanoid_pkg::action::Mission_SendGoal_Request>::value &&
    has_bounded_size<humanoid_pkg::action::Mission_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<humanoid_pkg::action::Mission_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<humanoid_pkg::action::Mission_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<humanoid_pkg::action::Mission_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_GetResult_Request & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_GetResult_Request>()
{
  return "humanoid_pkg::action::Mission_GetResult_Request";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_GetResult_Request>()
{
  return "humanoid_pkg/action/Mission_GetResult_Request";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<humanoid_pkg::action::Mission_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "humanoid_pkg/action/detail/mission__traits.hpp"

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_GetResult_Response & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_GetResult_Response>()
{
  return "humanoid_pkg::action::Mission_GetResult_Response";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_GetResult_Response>()
{
  return "humanoid_pkg/action/Mission_GetResult_Response";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<humanoid_pkg::action::Mission_Result>::value> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<humanoid_pkg::action::Mission_Result>::value> {};

template<>
struct is_message<humanoid_pkg::action::Mission_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<humanoid_pkg::action::Mission_GetResult>()
{
  return "humanoid_pkg::action::Mission_GetResult";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_GetResult>()
{
  return "humanoid_pkg/action/Mission_GetResult";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<humanoid_pkg::action::Mission_GetResult_Request>::value &&
    has_fixed_size<humanoid_pkg::action::Mission_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<humanoid_pkg::action::Mission_GetResult_Request>::value &&
    has_bounded_size<humanoid_pkg::action::Mission_GetResult_Response>::value
  >
{
};

template<>
struct is_service<humanoid_pkg::action::Mission_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<humanoid_pkg::action::Mission_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<humanoid_pkg::action::Mission_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "humanoid_pkg/action/detail/mission__traits.hpp"

namespace humanoid_pkg
{

namespace action
{

inline void to_flow_style_yaml(
  const Mission_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mission_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::action::Mission_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::action::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::action::Mission_FeedbackMessage & msg)
{
  return humanoid_pkg::action::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::action::Mission_FeedbackMessage>()
{
  return "humanoid_pkg::action::Mission_FeedbackMessage";
}

template<>
inline const char * name<humanoid_pkg::action::Mission_FeedbackMessage>()
{
  return "humanoid_pkg/action/Mission_FeedbackMessage";
}

template<>
struct has_fixed_size<humanoid_pkg::action::Mission_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<humanoid_pkg::action::Mission_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<humanoid_pkg::action::Mission_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<humanoid_pkg::action::Mission_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<humanoid_pkg::action::Mission_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<humanoid_pkg::action::Mission>
  : std::true_type
{
};

template<>
struct is_action_goal<humanoid_pkg::action::Mission_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<humanoid_pkg::action::Mission_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<humanoid_pkg::action::Mission_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // HUMANOID_PKG__ACTION__DETAIL__MISSION__TRAITS_HPP_
