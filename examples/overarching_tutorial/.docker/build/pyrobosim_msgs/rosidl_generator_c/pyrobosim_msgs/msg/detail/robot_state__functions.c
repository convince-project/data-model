// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `manipulated_object`
// Member `last_visited_location`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
pyrobosim_msgs__msg__RobotState__init(pyrobosim_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pyrobosim_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    pyrobosim_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    pyrobosim_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // battery_level
  // executing_action
  // holding_object
  // manipulated_object
  if (!rosidl_runtime_c__String__init(&msg->manipulated_object)) {
    pyrobosim_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // last_visited_location
  if (!rosidl_runtime_c__String__init(&msg->last_visited_location)) {
    pyrobosim_msgs__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__msg__RobotState__fini(pyrobosim_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // battery_level
  // executing_action
  // holding_object
  // manipulated_object
  rosidl_runtime_c__String__fini(&msg->manipulated_object);
  // last_visited_location
  rosidl_runtime_c__String__fini(&msg->last_visited_location);
}

bool
pyrobosim_msgs__msg__RobotState__are_equal(const pyrobosim_msgs__msg__RobotState * lhs, const pyrobosim_msgs__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // executing_action
  if (lhs->executing_action != rhs->executing_action) {
    return false;
  }
  // holding_object
  if (lhs->holding_object != rhs->holding_object) {
    return false;
  }
  // manipulated_object
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->manipulated_object), &(rhs->manipulated_object)))
  {
    return false;
  }
  // last_visited_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_visited_location), &(rhs->last_visited_location)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__RobotState__copy(
  const pyrobosim_msgs__msg__RobotState * input,
  pyrobosim_msgs__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  // executing_action
  output->executing_action = input->executing_action;
  // holding_object
  output->holding_object = input->holding_object;
  // manipulated_object
  if (!rosidl_runtime_c__String__copy(
      &(input->manipulated_object), &(output->manipulated_object)))
  {
    return false;
  }
  // last_visited_location
  if (!rosidl_runtime_c__String__copy(
      &(input->last_visited_location), &(output->last_visited_location)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__msg__RobotState *
pyrobosim_msgs__msg__RobotState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__RobotState * msg = (pyrobosim_msgs__msg__RobotState *)allocator.allocate(sizeof(pyrobosim_msgs__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__RobotState));
  bool success = pyrobosim_msgs__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__RobotState__destroy(pyrobosim_msgs__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__RobotState__Sequence__init(pyrobosim_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__RobotState * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__RobotState *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__RobotState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pyrobosim_msgs__msg__RobotState__Sequence__fini(pyrobosim_msgs__msg__RobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pyrobosim_msgs__msg__RobotState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pyrobosim_msgs__msg__RobotState__Sequence *
pyrobosim_msgs__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__RobotState__Sequence * array = (pyrobosim_msgs__msg__RobotState__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__RobotState__Sequence__destroy(pyrobosim_msgs__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__RobotState__Sequence__are_equal(const pyrobosim_msgs__msg__RobotState__Sequence * lhs, const pyrobosim_msgs__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__RobotState__Sequence__copy(
  const pyrobosim_msgs__msg__RobotState__Sequence * input,
  pyrobosim_msgs__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__RobotState * data =
      (pyrobosim_msgs__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
