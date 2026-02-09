// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pyrobosim_msgs/msg/detail/world_state__rosidl_typesupport_introspection_c.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pyrobosim_msgs/msg/detail/world_state__functions.h"
#include "pyrobosim_msgs/msg/detail/world_state__struct.h"


// Include directives for member types
// Member `robots`
#include "pyrobosim_msgs/msg/robot_state.h"
// Member `robots`
#include "pyrobosim_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `locations`
#include "pyrobosim_msgs/msg/location_state.h"
// Member `locations`
#include "pyrobosim_msgs/msg/detail/location_state__rosidl_typesupport_introspection_c.h"
// Member `hallways`
#include "pyrobosim_msgs/msg/hallway_state.h"
// Member `hallways`
#include "pyrobosim_msgs/msg/detail/hallway_state__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "pyrobosim_msgs/msg/object_state.h"
// Member `objects`
#include "pyrobosim_msgs/msg/detail/object_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pyrobosim_msgs__msg__WorldState__init(message_memory);
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_fini_function(void * message_memory)
{
  pyrobosim_msgs__msg__WorldState__fini(message_memory);
}

size_t pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__robots(
  const void * untyped_member)
{
  const pyrobosim_msgs__msg__RobotState__Sequence * member =
    (const pyrobosim_msgs__msg__RobotState__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__robots(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__msg__RobotState__Sequence * member =
    (const pyrobosim_msgs__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__robots(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__msg__RobotState__Sequence * member =
    (pyrobosim_msgs__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__msg__RobotState * item =
    ((const pyrobosim_msgs__msg__RobotState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__robots(untyped_member, index));
  pyrobosim_msgs__msg__RobotState * value =
    (pyrobosim_msgs__msg__RobotState *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__msg__RobotState * item =
    ((pyrobosim_msgs__msg__RobotState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__robots(untyped_member, index));
  const pyrobosim_msgs__msg__RobotState * value =
    (const pyrobosim_msgs__msg__RobotState *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__robots(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__msg__RobotState__Sequence * member =
    (pyrobosim_msgs__msg__RobotState__Sequence *)(untyped_member);
  pyrobosim_msgs__msg__RobotState__Sequence__fini(member);
  return pyrobosim_msgs__msg__RobotState__Sequence__init(member, size);
}

size_t pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__locations(
  const void * untyped_member)
{
  const pyrobosim_msgs__msg__LocationState__Sequence * member =
    (const pyrobosim_msgs__msg__LocationState__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__locations(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__msg__LocationState__Sequence * member =
    (const pyrobosim_msgs__msg__LocationState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__locations(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__msg__LocationState__Sequence * member =
    (pyrobosim_msgs__msg__LocationState__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__locations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__msg__LocationState * item =
    ((const pyrobosim_msgs__msg__LocationState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__locations(untyped_member, index));
  pyrobosim_msgs__msg__LocationState * value =
    (pyrobosim_msgs__msg__LocationState *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__locations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__msg__LocationState * item =
    ((pyrobosim_msgs__msg__LocationState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__locations(untyped_member, index));
  const pyrobosim_msgs__msg__LocationState * value =
    (const pyrobosim_msgs__msg__LocationState *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__locations(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__msg__LocationState__Sequence * member =
    (pyrobosim_msgs__msg__LocationState__Sequence *)(untyped_member);
  pyrobosim_msgs__msg__LocationState__Sequence__fini(member);
  return pyrobosim_msgs__msg__LocationState__Sequence__init(member, size);
}

size_t pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__hallways(
  const void * untyped_member)
{
  const pyrobosim_msgs__msg__HallwayState__Sequence * member =
    (const pyrobosim_msgs__msg__HallwayState__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__hallways(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__msg__HallwayState__Sequence * member =
    (const pyrobosim_msgs__msg__HallwayState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__hallways(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__msg__HallwayState__Sequence * member =
    (pyrobosim_msgs__msg__HallwayState__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__hallways(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__msg__HallwayState * item =
    ((const pyrobosim_msgs__msg__HallwayState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__hallways(untyped_member, index));
  pyrobosim_msgs__msg__HallwayState * value =
    (pyrobosim_msgs__msg__HallwayState *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__hallways(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__msg__HallwayState * item =
    ((pyrobosim_msgs__msg__HallwayState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__hallways(untyped_member, index));
  const pyrobosim_msgs__msg__HallwayState * value =
    (const pyrobosim_msgs__msg__HallwayState *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__hallways(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__msg__HallwayState__Sequence * member =
    (pyrobosim_msgs__msg__HallwayState__Sequence *)(untyped_member);
  pyrobosim_msgs__msg__HallwayState__Sequence__fini(member);
  return pyrobosim_msgs__msg__HallwayState__Sequence__init(member, size);
}

size_t pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__objects(
  const void * untyped_member)
{
  const pyrobosim_msgs__msg__ObjectState__Sequence * member =
    (const pyrobosim_msgs__msg__ObjectState__Sequence *)(untyped_member);
  return member->size;
}

const void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__objects(
  const void * untyped_member, size_t index)
{
  const pyrobosim_msgs__msg__ObjectState__Sequence * member =
    (const pyrobosim_msgs__msg__ObjectState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__objects(
  void * untyped_member, size_t index)
{
  pyrobosim_msgs__msg__ObjectState__Sequence * member =
    (pyrobosim_msgs__msg__ObjectState__Sequence *)(untyped_member);
  return &member->data[index];
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pyrobosim_msgs__msg__ObjectState * item =
    ((const pyrobosim_msgs__msg__ObjectState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__objects(untyped_member, index));
  pyrobosim_msgs__msg__ObjectState * value =
    (pyrobosim_msgs__msg__ObjectState *)(untyped_value);
  *value = *item;
}

void pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pyrobosim_msgs__msg__ObjectState * item =
    ((pyrobosim_msgs__msg__ObjectState *)
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__objects(untyped_member, index));
  const pyrobosim_msgs__msg__ObjectState * value =
    (const pyrobosim_msgs__msg__ObjectState *)(untyped_value);
  *item = *value;
}

bool pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__objects(
  void * untyped_member, size_t size)
{
  pyrobosim_msgs__msg__ObjectState__Sequence * member =
    (pyrobosim_msgs__msg__ObjectState__Sequence *)(untyped_member);
  pyrobosim_msgs__msg__ObjectState__Sequence__fini(member);
  return pyrobosim_msgs__msg__ObjectState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[4] = {
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__WorldState, robots),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__robots,  // size() function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__robots,  // get_const(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__robots,  // get(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__robots,  // fetch(index, &value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__robots,  // assign(index, value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__robots  // resize(index) function pointer
  },
  {
    "locations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__WorldState, locations),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__locations,  // size() function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__locations,  // get_const(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__locations,  // get(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__locations,  // fetch(index, &value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__locations,  // assign(index, value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__locations  // resize(index) function pointer
  },
  {
    "hallways",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__WorldState, hallways),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__hallways,  // size() function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__hallways,  // get_const(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__hallways,  // get(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__hallways,  // fetch(index, &value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__hallways,  // assign(index, value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__hallways  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs__msg__WorldState, objects),  // bytes offset in struct
    NULL,  // default value
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__objects,  // size() function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__objects,  // get_const(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__objects,  // get(index) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__objects,  // fetch(index, &value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__objects,  // assign(index, value) function pointer
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_members = {
  "pyrobosim_msgs__msg",  // message namespace
  "WorldState",  // message name
  4,  // number of fields
  sizeof(pyrobosim_msgs__msg__WorldState),
  false,  // has_any_key_member_
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array,  // message members
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_init_function,  // function to initialize message memory (memory has to be allocated)
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle = {
  0,
  &pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__WorldState__get_type_hash,
  &pyrobosim_msgs__msg__WorldState__get_type_description,
  &pyrobosim_msgs__msg__WorldState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pyrobosim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, WorldState)() {
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, RobotState)();
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, LocationState)();
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, HallwayState)();
  pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pyrobosim_msgs, msg, ObjectState)();
  if (!pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle.typesupport_identifier) {
    pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pyrobosim_msgs__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
