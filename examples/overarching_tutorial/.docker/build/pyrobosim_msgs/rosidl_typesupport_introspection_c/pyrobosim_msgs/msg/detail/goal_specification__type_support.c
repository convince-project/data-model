// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pyrobosim_msgs/msg/detail/goal_specification__rosidl_typesupport_introspection_c.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pyrobosim_msgs/msg/detail/goal_specification__functions.h"
#include "pyrobosim_msgs/msg/detail/goal_specification__struct.h"


// Include directives for member types
// Member `predicates`
#include "pyrobosim_msgs/msg/goal_predicate.h"
// Member `predicates`
#include "pyrobosim_msgs/msg/detail/goal_predicate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyrobosim_msgs__msg__GoalSpecification__init(message_memory);
}

void pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_fini_function(void * message_memory)
{
  pyrobosim_msgs__msg__GoalSpecification__fini(message_memory);
}

size_t pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__size_function__GoalSpecification__predicates(
  const void * untyped_member)
{
  const pyrobosim_msgs__msg__GoalPredicate__Sequence * member =
    (const pyrobosim_msgs__msg__GoalPredicate__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__get_const_function__GoalSpecification__predicates(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__msg__GoalPredicate__Sequence * member =
    (const pyrobosim_msgs__msg__GoalPredicate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__get_function__GoalSpecification__predicates(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__msg__GoalPredicate__Sequence * member =
    (pyrobosim_msgs__msg__GoalPredicate__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__fetch_function__GoalSpecification__predicates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__msg__GoalPredicate * item =
    ((const pyrobosim_msgs__msg__GoalPredicate *)
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__get_const_function__GoalSpecification__predicates(untyped_member, index));
  pyrobosim_msgs__msg__GoalPredicate * value =
    (pyrobosim_msgs__msg__GoalPredicate *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__assign_function__GoalSpecification__predicates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__msg__GoalPredicate * item =
    ((pyrobosim_msgs__msg__GoalPredicate *)
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__get_function__GoalSpecification__predicates(untyped_member, index));
  const pyrobosim_msgs__msg__GoalPredicate * value =
    (const pyrobosim_msgs__msg__GoalPredicate *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__resize_function__GoalSpecification__predicates(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__msg__GoalPredicate__Sequence * member =
    (pyrobosim_msgs__msg__GoalPredicate__Sequence *)(untyped_member);
  pyrobosim_msgs__msg__GoalPredicate__Sequence__fini(member);
  return pyrobosim_msgs__msg__GoalPredicate__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_member_array[1] = {
  {
    "predicates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__GoalSpecification, predicates),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__size_function__GoalSpecification__predicates,  // size() function pointer
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__get_const_function__GoalSpecification__predicates,  // get_const(index) function pointer
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__get_function__GoalSpecification__predicates,  // get(index) function pointer
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__fetch_function__GoalSpecification__predicates,  // fetch(index, &value) function pointer
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__assign_function__GoalSpecification__predicates,  // assign(index, value) function pointer
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__resize_function__GoalSpecification__predicates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_members = {
  "pyrobosim_msgs__msg",  // message namespace
  "GoalSpecification",  // message name
  1,  // number of fields
  sizeof(pyrobosim_msgs__msg__GoalSpecification),
  false,  // has_any_key_member_
  pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_member_array,  // message members
  pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_init_function,  // function to initialize message memory (memory has to be allocated)
  pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_type_support_handle = {
  0,
  &pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__GoalSpecification__get_type_hash,
  &pyrobosim_msgs__msg__GoalSpecification__get_type_description,
  &pyrobosim_msgs__msg__GoalSpecification__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, GoalSpecification)() {
  pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, GoalPredicate)();
  if (!pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pyrobosim_msgs__msg__GoalSpecification__rosidl_typesupport_introspection_c__GoalSpecification_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
