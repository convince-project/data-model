// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pyrobosim_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pyrobosim_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pyrobosim_msgs/msg/detail/path__functions.h"
#include "pyrobosim_msgs/msg/detail/path__struct.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyrobosim_msgs__msg__Path__init(message_memory);
}

void pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function(void * message_memory)
{
  pyrobosim_msgs__msg__Path__fini(message_memory);
}

size_t pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[2] = {
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__Path, poses),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__size_function__Path__poses,  // size() function pointer
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__get_const_function__Path__poses,  // get_const(index) function pointer
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__get_function__Path__poses,  // get(index) function pointer
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__fetch_function__Path__poses,  // fetch(index, &value) function pointer
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__assign_function__Path__poses,  // assign(index, value) function pointer
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__resize_function__Path__poses  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__Path, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_members = {
  "pyrobosim_msgs__msg",  // message namespace
  "Path",  // message name
  2,  // number of fields
  sizeof(pyrobosim_msgs__msg__Path),
  false,  // has_any_key_member_
  pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array,  // message members
  pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_init_function,  // function to initialize message memory (memory has to be allocated)
  pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle = {
  0,
  &pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__Path__get_type_hash,
  &pyrobosim_msgs__msg__Path__get_type_description,
  &pyrobosim_msgs__msg__Path__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, Path)() {
  pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pyrobosim_msgs__msg__Path__rosidl_typesupport_introspection_c__Path_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
