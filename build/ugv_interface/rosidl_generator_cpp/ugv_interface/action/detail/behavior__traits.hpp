// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ugv_interface:action/Behavior.idl
// generated code does not contain a copyright notice

#ifndef UGV_INTERFACE__ACTION__DETAIL__BEHAVIOR__TRAITS_HPP_
#define UGV_INTERFACE__ACTION__DETAIL__BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ugv_interface/action/detail/behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Behavior_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Behavior_Goal & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_Goal & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_Goal>()
{
  return "ugv_interface::action::Behavior_Goal";
}

template<>
inline const char * name<ugv_interface::action::Behavior_Goal>()
{
  return "ugv_interface/action/Behavior_Goal";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ugv_interface::action::Behavior_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Behavior_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Behavior_Result & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_Result & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_Result>()
{
  return "ugv_interface::action::Behavior_Result";
}

template<>
inline const char * name<ugv_interface::action::Behavior_Result>()
{
  return "ugv_interface/action/Behavior_Result";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ugv_interface::action::Behavior_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Behavior_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Behavior_Feedback & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_Feedback & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_Feedback>()
{
  return "ugv_interface::action::Behavior_Feedback";
}

template<>
inline const char * name<ugv_interface::action::Behavior_Feedback>()
{
  return "ugv_interface/action/Behavior_Feedback";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ugv_interface::action::Behavior_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ugv_interface/action/detail/behavior__traits.hpp"

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_SendGoal_Request & msg,
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
  const Behavior_SendGoal_Request & msg,
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

inline std::string to_yaml(const Behavior_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_SendGoal_Request & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_SendGoal_Request>()
{
  return "ugv_interface::action::Behavior_SendGoal_Request";
}

template<>
inline const char * name<ugv_interface::action::Behavior_SendGoal_Request>()
{
  return "ugv_interface/action/Behavior_SendGoal_Request";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ugv_interface::action::Behavior_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ugv_interface::action::Behavior_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ugv_interface::action::Behavior_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_SendGoal_Response & msg,
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
  const Behavior_SendGoal_Response & msg,
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

inline std::string to_yaml(const Behavior_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_SendGoal_Response & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_SendGoal_Response>()
{
  return "ugv_interface::action::Behavior_SendGoal_Response";
}

template<>
inline const char * name<ugv_interface::action::Behavior_SendGoal_Response>()
{
  return "ugv_interface/action/Behavior_SendGoal_Response";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ugv_interface::action::Behavior_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ugv_interface::action::Behavior_SendGoal>()
{
  return "ugv_interface::action::Behavior_SendGoal";
}

template<>
inline const char * name<ugv_interface::action::Behavior_SendGoal>()
{
  return "ugv_interface/action/Behavior_SendGoal";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ugv_interface::action::Behavior_SendGoal_Request>::value &&
    has_fixed_size<ugv_interface::action::Behavior_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ugv_interface::action::Behavior_SendGoal_Request>::value &&
    has_bounded_size<ugv_interface::action::Behavior_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ugv_interface::action::Behavior_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ugv_interface::action::Behavior_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ugv_interface::action::Behavior_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_GetResult_Request & msg,
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
  const Behavior_GetResult_Request & msg,
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

inline std::string to_yaml(const Behavior_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_GetResult_Request & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_GetResult_Request>()
{
  return "ugv_interface::action::Behavior_GetResult_Request";
}

template<>
inline const char * name<ugv_interface::action::Behavior_GetResult_Request>()
{
  return "ugv_interface/action/Behavior_GetResult_Request";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ugv_interface::action::Behavior_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ugv_interface/action/detail/behavior__traits.hpp"

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_GetResult_Response & msg,
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
  const Behavior_GetResult_Response & msg,
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

inline std::string to_yaml(const Behavior_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_GetResult_Response & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_GetResult_Response>()
{
  return "ugv_interface::action::Behavior_GetResult_Response";
}

template<>
inline const char * name<ugv_interface::action::Behavior_GetResult_Response>()
{
  return "ugv_interface/action/Behavior_GetResult_Response";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ugv_interface::action::Behavior_Result>::value> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ugv_interface::action::Behavior_Result>::value> {};

template<>
struct is_message<ugv_interface::action::Behavior_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ugv_interface::action::Behavior_GetResult>()
{
  return "ugv_interface::action::Behavior_GetResult";
}

template<>
inline const char * name<ugv_interface::action::Behavior_GetResult>()
{
  return "ugv_interface/action/Behavior_GetResult";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ugv_interface::action::Behavior_GetResult_Request>::value &&
    has_fixed_size<ugv_interface::action::Behavior_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ugv_interface::action::Behavior_GetResult_Request>::value &&
    has_bounded_size<ugv_interface::action::Behavior_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ugv_interface::action::Behavior_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ugv_interface::action::Behavior_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ugv_interface::action::Behavior_GetResult_Response>
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
// #include "ugv_interface/action/detail/behavior__traits.hpp"

namespace ugv_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const Behavior_FeedbackMessage & msg,
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
  const Behavior_FeedbackMessage & msg,
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

inline std::string to_yaml(const Behavior_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace ugv_interface

namespace rosidl_generator_traits
{

[[deprecated("use ugv_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ugv_interface::action::Behavior_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ugv_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ugv_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const ugv_interface::action::Behavior_FeedbackMessage & msg)
{
  return ugv_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<ugv_interface::action::Behavior_FeedbackMessage>()
{
  return "ugv_interface::action::Behavior_FeedbackMessage";
}

template<>
inline const char * name<ugv_interface::action::Behavior_FeedbackMessage>()
{
  return "ugv_interface/action/Behavior_FeedbackMessage";
}

template<>
struct has_fixed_size<ugv_interface::action::Behavior_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ugv_interface::action::Behavior_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ugv_interface::action::Behavior_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ugv_interface::action::Behavior_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ugv_interface::action::Behavior_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ugv_interface::action::Behavior>
  : std::true_type
{
};

template<>
struct is_action_goal<ugv_interface::action::Behavior_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ugv_interface::action::Behavior_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ugv_interface::action::Behavior_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UGV_INTERFACE__ACTION__DETAIL__BEHAVIOR__TRAITS_HPP_
