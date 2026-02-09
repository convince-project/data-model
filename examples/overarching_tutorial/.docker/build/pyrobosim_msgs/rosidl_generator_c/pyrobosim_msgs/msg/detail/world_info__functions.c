// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/WorldInfo.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/world_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `location_categories`
// Member `object_categories`
#include "rosidl_runtime_c/string_functions.h"

bool
pyrobosim_msgs__msg__WorldInfo__init(pyrobosim_msgs__msg__WorldInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    pyrobosim_msgs__msg__WorldInfo__fini(msg);
    return false;
  }
  // location_categories
  if (!rosidl_runtime_c__String__Sequence__init(&msg->location_categories, 0)) {
    pyrobosim_msgs__msg__WorldInfo__fini(msg);
    return false;
  }
  // object_categories
  if (!rosidl_runtime_c__String__Sequence__init(&msg->object_categories, 0)) {
    pyrobosim_msgs__msg__WorldInfo__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__msg__WorldInfo__fini(pyrobosim_msgs__msg__WorldInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // location_categories
  rosidl_runtime_c__String__Sequence__fini(&msg->location_categories);
  // object_categories
  rosidl_runtime_c__String__Sequence__fini(&msg->object_categories);
}

bool
pyrobosim_msgs__msg__WorldInfo__are_equal(const pyrobosim_msgs__msg__WorldInfo * lhs, const pyrobosim_msgs__msg__WorldInfo * rhs)
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
  // location_categories
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->location_categories), &(rhs->location_categories)))
  {
    return false;
  }
  // object_categories
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->object_categories), &(rhs->object_categories)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__WorldInfo__copy(
  const pyrobosim_msgs__msg__WorldInfo * input,
  pyrobosim_msgs__msg__WorldInfo * output)
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
  // location_categories
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->location_categories), &(output->location_categories)))
  {
    return false;
  }
  // object_categories
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->object_categories), &(output->object_categories)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__msg__WorldInfo *
pyrobosim_msgs__msg__WorldInfo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__WorldInfo * msg = (pyrobosim_msgs__msg__WorldInfo *)allocator.allocate(sizeof(pyrobosim_msgs__msg__WorldInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__WorldInfo));
  bool success = pyrobosim_msgs__msg__WorldInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__WorldInfo__destroy(pyrobosim_msgs__msg__WorldInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__WorldInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__WorldInfo__Sequence__init(pyrobosim_msgs__msg__WorldInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__WorldInfo * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__WorldInfo *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__WorldInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__WorldInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__WorldInfo__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__WorldInfo__Sequence__fini(pyrobosim_msgs__msg__WorldInfo__Sequence * array)
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
      pyrobosim_msgs__msg__WorldInfo__fini(&array->data[i]);
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

pyrobosim_msgs__msg__WorldInfo__Sequence *
pyrobosim_msgs__msg__WorldInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__WorldInfo__Sequence * array = (pyrobosim_msgs__msg__WorldInfo__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__WorldInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__WorldInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__WorldInfo__Sequence__destroy(pyrobosim_msgs__msg__WorldInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__WorldInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__WorldInfo__Sequence__are_equal(const pyrobosim_msgs__msg__WorldInfo__Sequence * lhs, const pyrobosim_msgs__msg__WorldInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__WorldInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__WorldInfo__Sequence__copy(
  const pyrobosim_msgs__msg__WorldInfo__Sequence * input,
  pyrobosim_msgs__msg__WorldInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__WorldInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__WorldInfo * data =
      (pyrobosim_msgs__msg__WorldInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__WorldInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__WorldInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__WorldInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
