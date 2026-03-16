// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/world_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robots`
#include "pyrobosim_msgs/msg/detail/robot_state__functions.h"
// Member `locations`
#include "pyrobosim_msgs/msg/detail/location_state__functions.h"
// Member `hallways`
#include "pyrobosim_msgs/msg/detail/hallway_state__functions.h"
// Member `objects`
#include "pyrobosim_msgs/msg/detail/object_state__functions.h"

bool
pyrobosim_msgs__msg__WorldState__init(pyrobosim_msgs__msg__WorldState * msg)
{
  if (!msg) {
    return false;
  }
  // robots
  if (!pyrobosim_msgs__msg__RobotState__Sequence__init(&msg->robots, 0)) {
    pyrobosim_msgs__msg__WorldState__fini(msg);
    return false;
  }
  // locations
  if (!pyrobosim_msgs__msg__LocationState__Sequence__init(&msg->locations, 0)) {
    pyrobosim_msgs__msg__WorldState__fini(msg);
    return false;
  }
  // hallways
  if (!pyrobosim_msgs__msg__HallwayState__Sequence__init(&msg->hallways, 0)) {
    pyrobosim_msgs__msg__WorldState__fini(msg);
    return false;
  }
  // objects
  if (!pyrobosim_msgs__msg__ObjectState__Sequence__init(&msg->objects, 0)) {
    pyrobosim_msgs__msg__WorldState__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__msg__WorldState__fini(pyrobosim_msgs__msg__WorldState * msg)
{
  if (!msg) {
    return;
  }
  // robots
  pyrobosim_msgs__msg__RobotState__Sequence__fini(&msg->robots);
  // locations
  pyrobosim_msgs__msg__LocationState__Sequence__fini(&msg->locations);
  // hallways
  pyrobosim_msgs__msg__HallwayState__Sequence__fini(&msg->hallways);
  // objects
  pyrobosim_msgs__msg__ObjectState__Sequence__fini(&msg->objects);
}

bool
pyrobosim_msgs__msg__WorldState__are_equal(const pyrobosim_msgs__msg__WorldState * lhs, const pyrobosim_msgs__msg__WorldState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robots
  if (!pyrobosim_msgs__msg__RobotState__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  // locations
  if (!pyrobosim_msgs__msg__LocationState__Sequence__are_equal(
      &(lhs->locations), &(rhs->locations)))
  {
    return false;
  }
  // hallways
  if (!pyrobosim_msgs__msg__HallwayState__Sequence__are_equal(
      &(lhs->hallways), &(rhs->hallways)))
  {
    return false;
  }
  // objects
  if (!pyrobosim_msgs__msg__ObjectState__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__WorldState__copy(
  const pyrobosim_msgs__msg__WorldState * input,
  pyrobosim_msgs__msg__WorldState * output)
{
  if (!input || !output) {
    return false;
  }
  // robots
  if (!pyrobosim_msgs__msg__RobotState__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  // locations
  if (!pyrobosim_msgs__msg__LocationState__Sequence__copy(
      &(input->locations), &(output->locations)))
  {
    return false;
  }
  // hallways
  if (!pyrobosim_msgs__msg__HallwayState__Sequence__copy(
      &(input->hallways), &(output->hallways)))
  {
    return false;
  }
  // objects
  if (!pyrobosim_msgs__msg__ObjectState__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__msg__WorldState *
pyrobosim_msgs__msg__WorldState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__WorldState * msg = (pyrobosim_msgs__msg__WorldState *)allocator.allocate(sizeof(pyrobosim_msgs__msg__WorldState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__WorldState));
  bool success = pyrobosim_msgs__msg__WorldState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__WorldState__destroy(pyrobosim_msgs__msg__WorldState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__WorldState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__WorldState__Sequence__init(pyrobosim_msgs__msg__WorldState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__WorldState * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__WorldState *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__WorldState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__WorldState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__WorldState__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__WorldState__Sequence__fini(pyrobosim_msgs__msg__WorldState__Sequence * array)
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
      pyrobosim_msgs__msg__WorldState__fini(&array->data[i]);
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

pyrobosim_msgs__msg__WorldState__Sequence *
pyrobosim_msgs__msg__WorldState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__WorldState__Sequence * array = (pyrobosim_msgs__msg__WorldState__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__WorldState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__WorldState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__WorldState__Sequence__destroy(pyrobosim_msgs__msg__WorldState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__WorldState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__WorldState__Sequence__are_equal(const pyrobosim_msgs__msg__WorldState__Sequence * lhs, const pyrobosim_msgs__msg__WorldState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__WorldState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__WorldState__Sequence__copy(
  const pyrobosim_msgs__msg__WorldState__Sequence * input,
  pyrobosim_msgs__msg__WorldState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__WorldState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__WorldState * data =
      (pyrobosim_msgs__msg__WorldState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__WorldState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__WorldState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__WorldState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
