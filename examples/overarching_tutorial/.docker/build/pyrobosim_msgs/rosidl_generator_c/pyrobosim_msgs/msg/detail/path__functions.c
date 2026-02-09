// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/Path.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
pyrobosim_msgs__msg__Path__init(pyrobosim_msgs__msg__Path * msg)
{
  if (!msg) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    pyrobosim_msgs__msg__Path__fini(msg);
    return false;
  }
  // length
  return true;
}

void
pyrobosim_msgs__msg__Path__fini(pyrobosim_msgs__msg__Path * msg)
{
  if (!msg) {
    return;
  }
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
  // length
}

bool
pyrobosim_msgs__msg__Path__are_equal(const pyrobosim_msgs__msg__Path * lhs, const pyrobosim_msgs__msg__Path * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__Path__copy(
  const pyrobosim_msgs__msg__Path * input,
  pyrobosim_msgs__msg__Path * output)
{
  if (!input || !output) {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // length
  output->length = input->length;
  return true;
}

pyrobosim_msgs__msg__Path *
pyrobosim_msgs__msg__Path__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__Path * msg = (pyrobosim_msgs__msg__Path *)allocator.allocate(sizeof(pyrobosim_msgs__msg__Path), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__Path));
  bool success = pyrobosim_msgs__msg__Path__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__Path__destroy(pyrobosim_msgs__msg__Path * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__Path__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__Path__Sequence__init(pyrobosim_msgs__msg__Path__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__Path * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__Path *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__Path), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__Path__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__Path__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__Path__Sequence__fini(pyrobosim_msgs__msg__Path__Sequence * array)
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
      pyrobosim_msgs__msg__Path__fini(&array->data[i]);
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

pyrobosim_msgs__msg__Path__Sequence *
pyrobosim_msgs__msg__Path__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__Path__Sequence * array = (pyrobosim_msgs__msg__Path__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__Path__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__Path__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__Path__Sequence__destroy(pyrobosim_msgs__msg__Path__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__Path__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__Path__Sequence__are_equal(const pyrobosim_msgs__msg__Path__Sequence * lhs, const pyrobosim_msgs__msg__Path__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__Path__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__Path__Sequence__copy(
  const pyrobosim_msgs__msg__Path__Sequence * input,
  pyrobosim_msgs__msg__Path__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__Path);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__Path * data =
      (pyrobosim_msgs__msg__Path *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__Path__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__Path__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__Path__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
