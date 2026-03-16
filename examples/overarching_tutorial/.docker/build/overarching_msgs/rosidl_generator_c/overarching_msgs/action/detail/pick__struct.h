// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from overarching_msgs:action/Pick.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "overarching_msgs/action/pick.h"


#ifndef OVERARCHING_MSGS__ACTION__DETAIL__PICK__STRUCT_H_
#define OVERARCHING_MSGS__ACTION__DETAIL__PICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_Goal
{
  int32_t object_id;
} overarching_msgs__action__Pick_Goal;

// Struct for a sequence of overarching_msgs__action__Pick_Goal.
typedef struct overarching_msgs__action__Pick_Goal__Sequence
{
  overarching_msgs__action__Pick_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_Result
{
  uint8_t structure_needs_at_least_one_member;
} overarching_msgs__action__Pick_Result;

// Struct for a sequence of overarching_msgs__action__Pick_Result.
typedef struct overarching_msgs__action__Pick_Result__Sequence
{
  overarching_msgs__action__Pick_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} overarching_msgs__action__Pick_Feedback;

// Struct for a sequence of overarching_msgs__action__Pick_Feedback.
typedef struct overarching_msgs__action__Pick_Feedback__Sequence
{
  overarching_msgs__action__Pick_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "overarching_msgs/action/detail/pick__struct.h"

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  overarching_msgs__action__Pick_Goal goal;
} overarching_msgs__action__Pick_SendGoal_Request;

// Struct for a sequence of overarching_msgs__action__Pick_SendGoal_Request.
typedef struct overarching_msgs__action__Pick_SendGoal_Request__Sequence
{
  overarching_msgs__action__Pick_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} overarching_msgs__action__Pick_SendGoal_Response;

// Struct for a sequence of overarching_msgs__action__Pick_SendGoal_Response.
typedef struct overarching_msgs__action__Pick_SendGoal_Response__Sequence
{
  overarching_msgs__action__Pick_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  overarching_msgs__action__Pick_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  overarching_msgs__action__Pick_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  overarching_msgs__action__Pick_SendGoal_Request__Sequence request;
  overarching_msgs__action__Pick_SendGoal_Response__Sequence response;
} overarching_msgs__action__Pick_SendGoal_Event;

// Struct for a sequence of overarching_msgs__action__Pick_SendGoal_Event.
typedef struct overarching_msgs__action__Pick_SendGoal_Event__Sequence
{
  overarching_msgs__action__Pick_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} overarching_msgs__action__Pick_GetResult_Request;

// Struct for a sequence of overarching_msgs__action__Pick_GetResult_Request.
typedef struct overarching_msgs__action__Pick_GetResult_Request__Sequence
{
  overarching_msgs__action__Pick_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "overarching_msgs/action/detail/pick__struct.h"

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_GetResult_Response
{
  int8_t status;
  overarching_msgs__action__Pick_Result result;
} overarching_msgs__action__Pick_GetResult_Response;

// Struct for a sequence of overarching_msgs__action__Pick_GetResult_Response.
typedef struct overarching_msgs__action__Pick_GetResult_Response__Sequence
{
  overarching_msgs__action__Pick_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  overarching_msgs__action__Pick_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  overarching_msgs__action__Pick_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  overarching_msgs__action__Pick_GetResult_Request__Sequence request;
  overarching_msgs__action__Pick_GetResult_Response__Sequence response;
} overarching_msgs__action__Pick_GetResult_Event;

// Struct for a sequence of overarching_msgs__action__Pick_GetResult_Event.
typedef struct overarching_msgs__action__Pick_GetResult_Event__Sequence
{
  overarching_msgs__action__Pick_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "overarching_msgs/action/detail/pick__struct.h"

/// Struct defined in action/Pick in the package overarching_msgs.
typedef struct overarching_msgs__action__Pick_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  overarching_msgs__action__Pick_Feedback feedback;
} overarching_msgs__action__Pick_FeedbackMessage;

// Struct for a sequence of overarching_msgs__action__Pick_FeedbackMessage.
typedef struct overarching_msgs__action__Pick_FeedbackMessage__Sequence
{
  overarching_msgs__action__Pick_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overarching_msgs__action__Pick_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OVERARCHING_MSGS__ACTION__DETAIL__PICK__STRUCT_H_
