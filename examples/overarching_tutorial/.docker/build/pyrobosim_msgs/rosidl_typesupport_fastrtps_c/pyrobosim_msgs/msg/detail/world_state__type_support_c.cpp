// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/world_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pyrobosim_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pyrobosim_msgs/msg/detail/world_state__struct.h"
#include "pyrobosim_msgs/msg/detail/world_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "pyrobosim_msgs/msg/detail/hallway_state__functions.h"  // hallways
#include "pyrobosim_msgs/msg/detail/location_state__functions.h"  // locations
#include "pyrobosim_msgs/msg/detail/object_state__functions.h"  // objects
#include "pyrobosim_msgs/msg/detail/robot_state__functions.h"  // robots

// forward declare type support functions

bool cdr_serialize_pyrobosim_msgs__msg__HallwayState(
  const pyrobosim_msgs__msg__HallwayState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_pyrobosim_msgs__msg__HallwayState(
  eprosima::fastcdr::Cdr & cdr,
  pyrobosim_msgs__msg__HallwayState * ros_message);

size_t get_serialized_size_pyrobosim_msgs__msg__HallwayState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pyrobosim_msgs__msg__HallwayState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_pyrobosim_msgs__msg__HallwayState(
  const pyrobosim_msgs__msg__HallwayState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_pyrobosim_msgs__msg__HallwayState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_pyrobosim_msgs__msg__HallwayState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pyrobosim_msgs, msg, HallwayState)();

bool cdr_serialize_pyrobosim_msgs__msg__LocationState(
  const pyrobosim_msgs__msg__LocationState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_pyrobosim_msgs__msg__LocationState(
  eprosima::fastcdr::Cdr & cdr,
  pyrobosim_msgs__msg__LocationState * ros_message);

size_t get_serialized_size_pyrobosim_msgs__msg__LocationState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pyrobosim_msgs__msg__LocationState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_pyrobosim_msgs__msg__LocationState(
  const pyrobosim_msgs__msg__LocationState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_pyrobosim_msgs__msg__LocationState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_pyrobosim_msgs__msg__LocationState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pyrobosim_msgs, msg, LocationState)();

bool cdr_serialize_pyrobosim_msgs__msg__ObjectState(
  const pyrobosim_msgs__msg__ObjectState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_pyrobosim_msgs__msg__ObjectState(
  eprosima::fastcdr::Cdr & cdr,
  pyrobosim_msgs__msg__ObjectState * ros_message);

size_t get_serialized_size_pyrobosim_msgs__msg__ObjectState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pyrobosim_msgs__msg__ObjectState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_pyrobosim_msgs__msg__ObjectState(
  const pyrobosim_msgs__msg__ObjectState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_pyrobosim_msgs__msg__ObjectState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_pyrobosim_msgs__msg__ObjectState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pyrobosim_msgs, msg, ObjectState)();

bool cdr_serialize_pyrobosim_msgs__msg__RobotState(
  const pyrobosim_msgs__msg__RobotState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_pyrobosim_msgs__msg__RobotState(
  eprosima::fastcdr::Cdr & cdr,
  pyrobosim_msgs__msg__RobotState * ros_message);

size_t get_serialized_size_pyrobosim_msgs__msg__RobotState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pyrobosim_msgs__msg__RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_pyrobosim_msgs__msg__RobotState(
  const pyrobosim_msgs__msg__RobotState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_pyrobosim_msgs__msg__RobotState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_pyrobosim_msgs__msg__RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pyrobosim_msgs, msg, RobotState)();


using _WorldState__ros_msg_type = pyrobosim_msgs__msg__WorldState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
bool cdr_serialize_pyrobosim_msgs__msg__WorldState(
  const pyrobosim_msgs__msg__WorldState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robots
  {
    size_t size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_pyrobosim_msgs__msg__RobotState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: locations
  {
    size_t size = ros_message->locations.size;
    auto array_ptr = ros_message->locations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_pyrobosim_msgs__msg__LocationState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: hallways
  {
    size_t size = ros_message->hallways.size;
    auto array_ptr = ros_message->hallways.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_pyrobosim_msgs__msg__HallwayState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: objects
  {
    size_t size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_pyrobosim_msgs__msg__ObjectState(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
bool cdr_deserialize_pyrobosim_msgs__msg__WorldState(
  eprosima::fastcdr::Cdr & cdr,
  pyrobosim_msgs__msg__WorldState * ros_message)
{
  // Field name: robots
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->robots.data) {
      pyrobosim_msgs__msg__RobotState__Sequence__fini(&ros_message->robots);
    }
    if (!pyrobosim_msgs__msg__RobotState__Sequence__init(&ros_message->robots, size)) {
      fprintf(stderr, "failed to create array for field 'robots'");
      return false;
    }
    auto array_ptr = ros_message->robots.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_pyrobosim_msgs__msg__RobotState(cdr, &array_ptr[i]);
    }
  }

  // Field name: locations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->locations.data) {
      pyrobosim_msgs__msg__LocationState__Sequence__fini(&ros_message->locations);
    }
    if (!pyrobosim_msgs__msg__LocationState__Sequence__init(&ros_message->locations, size)) {
      fprintf(stderr, "failed to create array for field 'locations'");
      return false;
    }
    auto array_ptr = ros_message->locations.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_pyrobosim_msgs__msg__LocationState(cdr, &array_ptr[i]);
    }
  }

  // Field name: hallways
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->hallways.data) {
      pyrobosim_msgs__msg__HallwayState__Sequence__fini(&ros_message->hallways);
    }
    if (!pyrobosim_msgs__msg__HallwayState__Sequence__init(&ros_message->hallways, size)) {
      fprintf(stderr, "failed to create array for field 'hallways'");
      return false;
    }
    auto array_ptr = ros_message->hallways.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_pyrobosim_msgs__msg__HallwayState(cdr, &array_ptr[i]);
    }
  }

  // Field name: objects
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->objects.data) {
      pyrobosim_msgs__msg__ObjectState__Sequence__fini(&ros_message->objects);
    }
    if (!pyrobosim_msgs__msg__ObjectState__Sequence__init(&ros_message->objects, size)) {
      fprintf(stderr, "failed to create array for field 'objects'");
      return false;
    }
    auto array_ptr = ros_message->objects.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_pyrobosim_msgs__msg__ObjectState(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t get_serialized_size_pyrobosim_msgs__msg__WorldState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WorldState__ros_msg_type * ros_message = static_cast<const _WorldState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robots
  {
    size_t array_size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_pyrobosim_msgs__msg__RobotState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: locations
  {
    size_t array_size = ros_message->locations.size;
    auto array_ptr = ros_message->locations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_pyrobosim_msgs__msg__LocationState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: hallways
  {
    size_t array_size = ros_message->hallways.size;
    auto array_ptr = ros_message->hallways.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_pyrobosim_msgs__msg__HallwayState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: objects
  {
    size_t array_size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_pyrobosim_msgs__msg__ObjectState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t max_serialized_size_pyrobosim_msgs__msg__WorldState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: robots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pyrobosim_msgs__msg__RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: locations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pyrobosim_msgs__msg__LocationState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hallways
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pyrobosim_msgs__msg__HallwayState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: objects
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pyrobosim_msgs__msg__ObjectState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pyrobosim_msgs__msg__WorldState;
    is_plain =
      (
      offsetof(DataType, objects) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
bool cdr_serialize_key_pyrobosim_msgs__msg__WorldState(
  const pyrobosim_msgs__msg__WorldState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robots
  {
    size_t size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_pyrobosim_msgs__msg__RobotState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: locations
  {
    size_t size = ros_message->locations.size;
    auto array_ptr = ros_message->locations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_pyrobosim_msgs__msg__LocationState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: hallways
  {
    size_t size = ros_message->hallways.size;
    auto array_ptr = ros_message->hallways.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_pyrobosim_msgs__msg__HallwayState(
        &array_ptr[i], cdr);
    }
  }

  // Field name: objects
  {
    size_t size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_pyrobosim_msgs__msg__ObjectState(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t get_serialized_size_key_pyrobosim_msgs__msg__WorldState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WorldState__ros_msg_type * ros_message = static_cast<const _WorldState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robots
  {
    size_t array_size = ros_message->robots.size;
    auto array_ptr = ros_message->robots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_pyrobosim_msgs__msg__RobotState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: locations
  {
    size_t array_size = ros_message->locations.size;
    auto array_ptr = ros_message->locations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_pyrobosim_msgs__msg__LocationState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: hallways
  {
    size_t array_size = ros_message->hallways.size;
    auto array_ptr = ros_message->hallways.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_pyrobosim_msgs__msg__HallwayState(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: objects
  {
    size_t array_size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_pyrobosim_msgs__msg__ObjectState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pyrobosim_msgs
size_t max_serialized_size_key_pyrobosim_msgs__msg__WorldState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: robots
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pyrobosim_msgs__msg__RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: locations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pyrobosim_msgs__msg__LocationState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hallways
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pyrobosim_msgs__msg__HallwayState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: objects
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_pyrobosim_msgs__msg__ObjectState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pyrobosim_msgs__msg__WorldState;
    is_plain =
      (
      offsetof(DataType, objects) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _WorldState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const pyrobosim_msgs__msg__WorldState * ros_message = static_cast<const pyrobosim_msgs__msg__WorldState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_pyrobosim_msgs__msg__WorldState(ros_message, cdr);
}

static bool _WorldState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  pyrobosim_msgs__msg__WorldState * ros_message = static_cast<pyrobosim_msgs__msg__WorldState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_pyrobosim_msgs__msg__WorldState(cdr, ros_message);
}

static uint32_t _WorldState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pyrobosim_msgs__msg__WorldState(
      untyped_ros_message, 0));
}

static size_t _WorldState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pyrobosim_msgs__msg__WorldState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WorldState = {
  "pyrobosim_msgs::msg",
  "WorldState",
  _WorldState__cdr_serialize,
  _WorldState__cdr_deserialize,
  _WorldState__get_serialized_size,
  _WorldState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _WorldState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WorldState,
  get_message_typesupport_handle_function,
  &pyrobosim_msgs__msg__WorldState__get_type_hash,
  &pyrobosim_msgs__msg__WorldState__get_type_description,
  &pyrobosim_msgs__msg__WorldState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pyrobosim_msgs, msg, WorldState)() {
  return &_WorldState__type_support;
}

#if defined(__cplusplus)
}
#endif
