// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pyrobosim_msgs/msg/detail/world_state__functions.h"
#include "pyrobosim_msgs/msg/detail/world_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pyrobosim_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WorldState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pyrobosim_msgs::msg::WorldState(_init);
}

void WorldState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pyrobosim_msgs::msg::WorldState *>(message_memory);
  typed_message->~WorldState();
}

size_t size_function__WorldState__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pyrobosim_msgs::msg::RobotState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorldState__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pyrobosim_msgs::msg::RobotState> *>(untyped_member);
  return &member[index];
}

void * get_function__WorldState__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pyrobosim_msgs::msg::RobotState> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorldState__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pyrobosim_msgs::msg::RobotState *>(
    get_const_function__WorldState__robots(untyped_member, index));
  auto & value = *reinterpret_cast<pyrobosim_msgs::msg::RobotState *>(untyped_value);
  value = item;
}

void assign_function__WorldState__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pyrobosim_msgs::msg::RobotState *>(
    get_function__WorldState__robots(untyped_member, index));
  const auto & value = *reinterpret_cast<const pyrobosim_msgs::msg::RobotState *>(untyped_value);
  item = value;
}

void resize_function__WorldState__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pyrobosim_msgs::msg::RobotState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WorldState__locations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pyrobosim_msgs::msg::LocationState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorldState__locations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pyrobosim_msgs::msg::LocationState> *>(untyped_member);
  return &member[index];
}

void * get_function__WorldState__locations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pyrobosim_msgs::msg::LocationState> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorldState__locations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pyrobosim_msgs::msg::LocationState *>(
    get_const_function__WorldState__locations(untyped_member, index));
  auto & value = *reinterpret_cast<pyrobosim_msgs::msg::LocationState *>(untyped_value);
  value = item;
}

void assign_function__WorldState__locations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pyrobosim_msgs::msg::LocationState *>(
    get_function__WorldState__locations(untyped_member, index));
  const auto & value = *reinterpret_cast<const pyrobosim_msgs::msg::LocationState *>(untyped_value);
  item = value;
}

void resize_function__WorldState__locations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pyrobosim_msgs::msg::LocationState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WorldState__hallways(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pyrobosim_msgs::msg::HallwayState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorldState__hallways(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pyrobosim_msgs::msg::HallwayState> *>(untyped_member);
  return &member[index];
}

void * get_function__WorldState__hallways(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pyrobosim_msgs::msg::HallwayState> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorldState__hallways(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pyrobosim_msgs::msg::HallwayState *>(
    get_const_function__WorldState__hallways(untyped_member, index));
  auto & value = *reinterpret_cast<pyrobosim_msgs::msg::HallwayState *>(untyped_value);
  value = item;
}

void assign_function__WorldState__hallways(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pyrobosim_msgs::msg::HallwayState *>(
    get_function__WorldState__hallways(untyped_member, index));
  const auto & value = *reinterpret_cast<const pyrobosim_msgs::msg::HallwayState *>(untyped_value);
  item = value;
}

void resize_function__WorldState__hallways(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pyrobosim_msgs::msg::HallwayState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WorldState__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pyrobosim_msgs::msg::ObjectState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorldState__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pyrobosim_msgs::msg::ObjectState> *>(untyped_member);
  return &member[index];
}

void * get_function__WorldState__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pyrobosim_msgs::msg::ObjectState> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorldState__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pyrobosim_msgs::msg::ObjectState *>(
    get_const_function__WorldState__objects(untyped_member, index));
  auto & value = *reinterpret_cast<pyrobosim_msgs::msg::ObjectState *>(untyped_value);
  value = item;
}

void assign_function__WorldState__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pyrobosim_msgs::msg::ObjectState *>(
    get_function__WorldState__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const pyrobosim_msgs::msg::ObjectState *>(untyped_value);
  item = value;
}

void resize_function__WorldState__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pyrobosim_msgs::msg::ObjectState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WorldState_message_member_array[4] = {
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pyrobosim_msgs::msg::RobotState>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::WorldState, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorldState__robots,  // size() function pointer
    get_const_function__WorldState__robots,  // get_const(index) function pointer
    get_function__WorldState__robots,  // get(index) function pointer
    fetch_function__WorldState__robots,  // fetch(index, &value) function pointer
    assign_function__WorldState__robots,  // assign(index, value) function pointer
    resize_function__WorldState__robots  // resize(index) function pointer
  },
  {
    "locations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pyrobosim_msgs::msg::LocationState>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::WorldState, locations),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorldState__locations,  // size() function pointer
    get_const_function__WorldState__locations,  // get_const(index) function pointer
    get_function__WorldState__locations,  // get(index) function pointer
    fetch_function__WorldState__locations,  // fetch(index, &value) function pointer
    assign_function__WorldState__locations,  // assign(index, value) function pointer
    resize_function__WorldState__locations  // resize(index) function pointer
  },
  {
    "hallways",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pyrobosim_msgs::msg::HallwayState>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::WorldState, hallways),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorldState__hallways,  // size() function pointer
    get_const_function__WorldState__hallways,  // get_const(index) function pointer
    get_function__WorldState__hallways,  // get(index) function pointer
    fetch_function__WorldState__hallways,  // fetch(index, &value) function pointer
    assign_function__WorldState__hallways,  // assign(index, value) function pointer
    resize_function__WorldState__hallways  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pyrobosim_msgs::msg::ObjectState>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::WorldState, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorldState__objects,  // size() function pointer
    get_const_function__WorldState__objects,  // get_const(index) function pointer
    get_function__WorldState__objects,  // get(index) function pointer
    fetch_function__WorldState__objects,  // fetch(index, &value) function pointer
    assign_function__WorldState__objects,  // assign(index, value) function pointer
    resize_function__WorldState__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WorldState_message_members = {
  "pyrobosim_msgs::msg",  // message namespace
  "WorldState",  // message name
  4,  // number of fields
  sizeof(pyrobosim_msgs::msg::WorldState),
  false,  // has_any_key_member_
  WorldState_message_member_array,  // message members
  WorldState_init_function,  // function to initialize message memory (memory has to be allocated)
  WorldState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WorldState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WorldState_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__WorldState__get_type_hash,
  &pyrobosim_msgs__msg__WorldState__get_type_description,
  &pyrobosim_msgs__msg__WorldState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pyrobosim_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pyrobosim_msgs::msg::WorldState>()
{
  return &::pyrobosim_msgs::msg::rosidl_typesupport_introspection_cpp::WorldState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pyrobosim_msgs, msg, WorldState)() {
  return &::pyrobosim_msgs::msg::rosidl_typesupport_introspection_cpp::WorldState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
