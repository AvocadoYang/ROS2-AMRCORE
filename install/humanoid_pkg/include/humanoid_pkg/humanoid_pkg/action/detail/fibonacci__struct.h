// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from humanoid_pkg:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__ACTION__DETAIL__FIBONACCI__STRUCT_H_
#define HUMANOID_PKG__ACTION__DETAIL__FIBONACCI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_Goal
{
  int32_t order;
} humanoid_pkg__action__Fibonacci_Goal;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_Goal.
typedef struct humanoid_pkg__action__Fibonacci_Goal__Sequence
{
  humanoid_pkg__action__Fibonacci_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} humanoid_pkg__action__Fibonacci_Result;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_Result.
typedef struct humanoid_pkg__action__Fibonacci_Result__Sequence
{
  humanoid_pkg__action__Fibonacci_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} humanoid_pkg__action__Fibonacci_Feedback;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_Feedback.
typedef struct humanoid_pkg__action__Fibonacci_Feedback__Sequence
{
  humanoid_pkg__action__Fibonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "humanoid_pkg/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  humanoid_pkg__action__Fibonacci_Goal goal;
} humanoid_pkg__action__Fibonacci_SendGoal_Request;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_SendGoal_Request.
typedef struct humanoid_pkg__action__Fibonacci_SendGoal_Request__Sequence
{
  humanoid_pkg__action__Fibonacci_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} humanoid_pkg__action__Fibonacci_SendGoal_Response;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_SendGoal_Response.
typedef struct humanoid_pkg__action__Fibonacci_SendGoal_Response__Sequence
{
  humanoid_pkg__action__Fibonacci_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} humanoid_pkg__action__Fibonacci_GetResult_Request;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_GetResult_Request.
typedef struct humanoid_pkg__action__Fibonacci_GetResult_Request__Sequence
{
  humanoid_pkg__action__Fibonacci_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "humanoid_pkg/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_GetResult_Response
{
  int8_t status;
  humanoid_pkg__action__Fibonacci_Result result;
} humanoid_pkg__action__Fibonacci_GetResult_Response;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_GetResult_Response.
typedef struct humanoid_pkg__action__Fibonacci_GetResult_Response__Sequence
{
  humanoid_pkg__action__Fibonacci_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "humanoid_pkg/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Fibonacci_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  humanoid_pkg__action__Fibonacci_Feedback feedback;
} humanoid_pkg__action__Fibonacci_FeedbackMessage;

// Struct for a sequence of humanoid_pkg__action__Fibonacci_FeedbackMessage.
typedef struct humanoid_pkg__action__Fibonacci_FeedbackMessage__Sequence
{
  humanoid_pkg__action__Fibonacci_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Fibonacci_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMANOID_PKG__ACTION__DETAIL__FIBONACCI__STRUCT_H_
