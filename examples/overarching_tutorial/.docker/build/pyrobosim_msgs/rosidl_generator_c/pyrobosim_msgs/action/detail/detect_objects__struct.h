// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pyrobosim_msgs:action/DetectObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pyrobosim_msgs/action/detect_objects.h"


#ifndef PYROBOSIM_MSGS__ACTION__DETAIL__DETECT_OBJECTS__STRUCT_H_
#define PYROBOSIM_MSGS__ACTION__DETAIL__DETECT_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_object'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_Goal
{
  /// Goal
  /// This can be a specific object name or an object category.
  rosidl_runtime_c__String target_object;
} pyrobosim_msgs__action__DetectObjects_Goal;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_Goal.
typedef struct pyrobosim_msgs__action__DetectObjects_Goal__Sequence
{
  pyrobosim_msgs__action__DetectObjects_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'execution_result'
#include "pyrobosim_msgs/msg/detail/execution_result__struct.h"
// Member 'detected_objects'
#include "pyrobosim_msgs/msg/detail/object_state__struct.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_Result
{
  /// Result
  pyrobosim_msgs__msg__ExecutionResult execution_result;
  pyrobosim_msgs__msg__ObjectState__Sequence detected_objects;
} pyrobosim_msgs__action__DetectObjects_Result;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_Result.
typedef struct pyrobosim_msgs__action__DetectObjects_Result__Sequence
{
  pyrobosim_msgs__action__DetectObjects_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} pyrobosim_msgs__action__DetectObjects_Feedback;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_Feedback.
typedef struct pyrobosim_msgs__action__DetectObjects_Feedback__Sequence
{
  pyrobosim_msgs__action__DetectObjects_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pyrobosim_msgs/action/detail/detect_objects__struct.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pyrobosim_msgs__action__DetectObjects_Goal goal;
} pyrobosim_msgs__action__DetectObjects_SendGoal_Request;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_SendGoal_Request.
typedef struct pyrobosim_msgs__action__DetectObjects_SendGoal_Request__Sequence
{
  pyrobosim_msgs__action__DetectObjects_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pyrobosim_msgs__action__DetectObjects_SendGoal_Response;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_SendGoal_Response.
typedef struct pyrobosim_msgs__action__DetectObjects_SendGoal_Response__Sequence
{
  pyrobosim_msgs__action__DetectObjects_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pyrobosim_msgs__action__DetectObjects_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pyrobosim_msgs__action__DetectObjects_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pyrobosim_msgs__action__DetectObjects_SendGoal_Request__Sequence request;
  pyrobosim_msgs__action__DetectObjects_SendGoal_Response__Sequence response;
} pyrobosim_msgs__action__DetectObjects_SendGoal_Event;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_SendGoal_Event.
typedef struct pyrobosim_msgs__action__DetectObjects_SendGoal_Event__Sequence
{
  pyrobosim_msgs__action__DetectObjects_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pyrobosim_msgs__action__DetectObjects_GetResult_Request;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_GetResult_Request.
typedef struct pyrobosim_msgs__action__DetectObjects_GetResult_Request__Sequence
{
  pyrobosim_msgs__action__DetectObjects_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pyrobosim_msgs/action/detail/detect_objects__struct.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_GetResult_Response
{
  int8_t status;
  pyrobosim_msgs__action__DetectObjects_Result result;
} pyrobosim_msgs__action__DetectObjects_GetResult_Response;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_GetResult_Response.
typedef struct pyrobosim_msgs__action__DetectObjects_GetResult_Response__Sequence
{
  pyrobosim_msgs__action__DetectObjects_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pyrobosim_msgs__action__DetectObjects_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pyrobosim_msgs__action__DetectObjects_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pyrobosim_msgs__action__DetectObjects_GetResult_Request__Sequence request;
  pyrobosim_msgs__action__DetectObjects_GetResult_Response__Sequence response;
} pyrobosim_msgs__action__DetectObjects_GetResult_Event;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_GetResult_Event.
typedef struct pyrobosim_msgs__action__DetectObjects_GetResult_Event__Sequence
{
  pyrobosim_msgs__action__DetectObjects_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pyrobosim_msgs/action/detail/detect_objects__struct.h"

/// Struct defined in action/DetectObjects in the package pyrobosim_msgs.
typedef struct pyrobosim_msgs__action__DetectObjects_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pyrobosim_msgs__action__DetectObjects_Feedback feedback;
} pyrobosim_msgs__action__DetectObjects_FeedbackMessage;

// Struct for a sequence of pyrobosim_msgs__action__DetectObjects_FeedbackMessage.
typedef struct pyrobosim_msgs__action__DetectObjects_FeedbackMessage__Sequence
{
  pyrobosim_msgs__action__DetectObjects_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pyrobosim_msgs__action__DetectObjects_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PYROBOSIM_MSGS__ACTION__DETAIL__DETECT_OBJECTS__STRUCT_H_
