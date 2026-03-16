// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/HallwayState.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/hallway_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `room_start`
// Member `room_end`
#include "rosidl_runtime_c/string_functions.h"

bool
pyrobosim_msgs__msg__HallwayState__init(pyrobosim_msgs__msg__HallwayState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    pyrobosim_msgs__msg__HallwayState__fini(msg);
    return false;
  }
  // room_start
  if (!rosidl_runtime_c__String__init(&msg->room_start)) {
    pyrobosim_msgs__msg__HallwayState__fini(msg);
    return false;
  }
  // room_end
  if (!rosidl_runtime_c__String__init(&msg->room_end)) {
    pyrobosim_msgs__msg__HallwayState__fini(msg);
    return false;
  }
  // is_open
  // is_locked
  return true;
}

void
pyrobosim_msgs__msg__HallwayState__fini(pyrobosim_msgs__msg__HallwayState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // room_start
  rosidl_runtime_c__String__fini(&msg->room_start);
  // room_end
  rosidl_runtime_c__String__fini(&msg->room_end);
  // is_open
  // is_locked
}

bool
pyrobosim_msgs__msg__HallwayState__are_equal(const pyrobosim_msgs__msg__HallwayState * lhs, const pyrobosim_msgs__msg__HallwayState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // room_start
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->room_start), &(rhs->room_start)))
  {
    return false;
  }
  // room_end
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->room_end), &(rhs->room_end)))
  {
    return false;
  }
  // is_open
  if (lhs->is_open != rhs->is_open) {
    return false;
  }
  // is_locked
  if (lhs->is_locked != rhs->is_locked) {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__HallwayState__copy(
  const pyrobosim_msgs__msg__HallwayState * input,
  pyrobosim_msgs__msg__HallwayState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // room_start
  if (!rosidl_runtime_c__String__copy(
      &(input->room_start), &(output->room_start)))
  {
    return false;
  }
  // room_end
  if (!rosidl_runtime_c__String__copy(
      &(input->room_end), &(output->room_end)))
  {
    return false;
  }
  // is_open
  output->is_open = input->is_open;
  // is_locked
  output->is_locked = input->is_locked;
  return true;
}

pyrobosim_msgs__msg__HallwayState *
pyrobosim_msgs__msg__HallwayState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__HallwayState * msg = (pyrobosim_msgs__msg__HallwayState *)allocator.allocate(sizeof(pyrobosim_msgs__msg__HallwayState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__HallwayState));
  bool success = pyrobosim_msgs__msg__HallwayState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__HallwayState__destroy(pyrobosim_msgs__msg__HallwayState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__HallwayState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__HallwayState__Sequence__init(pyrobosim_msgs__msg__HallwayState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__HallwayState * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__HallwayState *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__HallwayState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__HallwayState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__HallwayState__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__HallwayState__Sequence__fini(pyrobosim_msgs__msg__HallwayState__Sequence * array)
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
      pyrobosim_msgs__msg__HallwayState__fini(&array->data[i]);
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

pyrobosim_msgs__msg__HallwayState__Sequence *
pyrobosim_msgs__msg__HallwayState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__HallwayState__Sequence * array = (pyrobosim_msgs__msg__HallwayState__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__HallwayState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__HallwayState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__HallwayState__Sequence__destroy(pyrobosim_msgs__msg__HallwayState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__HallwayState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__HallwayState__Sequence__are_equal(const pyrobosim_msgs__msg__HallwayState__Sequence * lhs, const pyrobosim_msgs__msg__HallwayState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__HallwayState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__HallwayState__Sequence__copy(
  const pyrobosim_msgs__msg__HallwayState__Sequence * input,
  pyrobosim_msgs__msg__HallwayState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__HallwayState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__HallwayState * data =
      (pyrobosim_msgs__msg__HallwayState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__HallwayState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__HallwayState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__HallwayState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
