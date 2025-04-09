// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from humanoid_pkg:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__ACTION__DETAIL__MISSION__STRUCT_H_
#define HUMANOID_PKG__ACTION__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_json'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_Goal
{
  rosidl_runtime_c__String request_json;
} humanoid_pkg__action__Mission_Goal;

// Struct for a sequence of humanoid_pkg__action__Mission_Goal.
typedef struct humanoid_pkg__action__Mission_Goal__Sequence
{
  humanoid_pkg__action__Mission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_Result
{
  int16_t result_status;
  rosidl_runtime_c__String result_message;
} humanoid_pkg__action__Mission_Result;

// Struct for a sequence of humanoid_pkg__action__Mission_Result.
typedef struct humanoid_pkg__action__Mission_Result__Sequence
{
  humanoid_pkg__action__Mission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback_json'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_Feedback
{
  rosidl_runtime_c__String feedback_json;
} humanoid_pkg__action__Mission_Feedback;

// Struct for a sequence of humanoid_pkg__action__Mission_Feedback.
typedef struct humanoid_pkg__action__Mission_Feedback__Sequence
{
  humanoid_pkg__action__Mission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "humanoid_pkg/action/detail/mission__struct.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  humanoid_pkg__action__Mission_Goal goal;
} humanoid_pkg__action__Mission_SendGoal_Request;

// Struct for a sequence of humanoid_pkg__action__Mission_SendGoal_Request.
typedef struct humanoid_pkg__action__Mission_SendGoal_Request__Sequence
{
  humanoid_pkg__action__Mission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} humanoid_pkg__action__Mission_SendGoal_Response;

// Struct for a sequence of humanoid_pkg__action__Mission_SendGoal_Response.
typedef struct humanoid_pkg__action__Mission_SendGoal_Response__Sequence
{
  humanoid_pkg__action__Mission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} humanoid_pkg__action__Mission_GetResult_Request;

// Struct for a sequence of humanoid_pkg__action__Mission_GetResult_Request.
typedef struct humanoid_pkg__action__Mission_GetResult_Request__Sequence
{
  humanoid_pkg__action__Mission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "humanoid_pkg/action/detail/mission__struct.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_GetResult_Response
{
  int8_t status;
  humanoid_pkg__action__Mission_Result result;
} humanoid_pkg__action__Mission_GetResult_Response;

// Struct for a sequence of humanoid_pkg__action__Mission_GetResult_Response.
typedef struct humanoid_pkg__action__Mission_GetResult_Response__Sequence
{
  humanoid_pkg__action__Mission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "humanoid_pkg/action/detail/mission__struct.h"

/// Struct defined in action/Mission in the package humanoid_pkg.
typedef struct humanoid_pkg__action__Mission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  humanoid_pkg__action__Mission_Feedback feedback;
} humanoid_pkg__action__Mission_FeedbackMessage;

// Struct for a sequence of humanoid_pkg__action__Mission_FeedbackMessage.
typedef struct humanoid_pkg__action__Mission_FeedbackMessage__Sequence
{
  humanoid_pkg__action__Mission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__action__Mission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMANOID_PKG__ACTION__DETAIL__MISSION__STRUCT_H_
