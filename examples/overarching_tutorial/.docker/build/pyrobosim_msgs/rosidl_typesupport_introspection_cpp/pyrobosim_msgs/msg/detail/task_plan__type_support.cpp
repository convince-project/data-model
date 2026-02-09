// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pyrobosim_msgs:msg/TaskPlan.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pyrobosim_msgs/msg/detail/task_plan__functions.h"
#include "pyrobosim_msgs/msg/detail/task_plan__struct.hpp"
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

void TaskPlan_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pyrobosim_msgs::msg::TaskPlan(_init);
}

void TaskPlan_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pyrobosim_msgs::msg::TaskPlan *>(message_memory);
  typed_message->~TaskPlan();
}

size_t size_function__TaskPlan__actions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pyrobosim_msgs::msg::TaskAction> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskPlan__actions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pyrobosim_msgs::msg::TaskAction> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskPlan__actions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pyrobosim_msgs::msg::TaskAction> *>(untyped_member);
  return &member[index];
}

void fetch_function__TaskPlan__actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pyrobosim_msgs::msg::TaskAction *>(
    get_const_function__TaskPlan__actions(untyped_member, index));
  auto & value = *reinterpret_cast<pyrobosim_msgs::msg::TaskAction *>(untyped_value);
  value = item;
}

void assign_function__TaskPlan__actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pyrobosim_msgs::msg::TaskAction *>(
    get_function__TaskPlan__actions(untyped_member, index));
  const auto & value = *reinterpret_cast<const pyrobosim_msgs::msg::TaskAction *>(untyped_value);
  item = value;
}

void resize_function__TaskPlan__actions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pyrobosim_msgs::msg::TaskAction> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskPlan_message_member_array[3] = {
  {
    "robot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::TaskPlan, robot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "actions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pyrobosim_msgs::msg::TaskAction>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::TaskPlan, actions),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskPlan__actions,  // size() function pointer
    get_const_function__TaskPlan__actions,  // get_const(index) function pointer
    get_function__TaskPlan__actions,  // get(index) function pointer
    fetch_function__TaskPlan__actions,  // fetch(index, &value) function pointer
    assign_function__TaskPlan__actions,  // assign(index, value) function pointer
    resize_function__TaskPlan__actions  // resize(index) function pointer
  },
  {
    "cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pyrobosim_msgs::msg::TaskPlan, cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskPlan_message_members = {
  "pyrobosim_msgs::msg",  // message namespace
  "TaskPlan",  // message name
  3,  // number of fields
  sizeof(pyrobosim_msgs::msg::TaskPlan),
  false,  // has_any_key_member_
  TaskPlan_message_member_array,  // message members
  TaskPlan_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskPlan_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskPlan_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskPlan_message_members,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__TaskPlan__get_type_hash,
  &pyrobosim_msgs__msg__TaskPlan__get_type_description,
  &pyrobosim_msgs__msg__TaskPlan__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pyrobosim_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pyrobosim_msgs::msg::TaskPlan>()
{
  return &::pyrobosim_msgs::msg::rosidl_typesupport_introspection_cpp::TaskPlan_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pyrobosim_msgs, msg, TaskPlan)() {
  return &::pyrobosim_msgs::msg::rosidl_typesupport_introspection_cpp::TaskPlan_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
