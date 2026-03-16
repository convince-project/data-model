// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/GoalPredicate.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/goal_predicate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `args`
#include "rosidl_runtime_c/string_functions.h"

bool
pyrobosim_msgs__msg__GoalPredicate__init(pyrobosim_msgs__msg__GoalPredicate * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    pyrobosim_msgs__msg__GoalPredicate__fini(msg);
    return false;
  }
  // args
  if (!rosidl_runtime_c__String__Sequence__init(&msg->args, 0)) {
    pyrobosim_msgs__msg__GoalPredicate__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__msg__GoalPredicate__fini(pyrobosim_msgs__msg__GoalPredicate * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // args
  rosidl_runtime_c__String__Sequence__fini(&msg->args);
}

bool
pyrobosim_msgs__msg__GoalPredicate__are_equal(const pyrobosim_msgs__msg__GoalPredicate * lhs, const pyrobosim_msgs__msg__GoalPredicate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // args
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->args), &(rhs->args)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__GoalPredicate__copy(
  const pyrobosim_msgs__msg__GoalPredicate * input,
  pyrobosim_msgs__msg__GoalPredicate * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // args
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->args), &(output->args)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__msg__GoalPredicate *
pyrobosim_msgs__msg__GoalPredicate__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__GoalPredicate * msg = (pyrobosim_msgs__msg__GoalPredicate *)allocator.allocate(sizeof(pyrobosim_msgs__msg__GoalPredicate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__GoalPredicate));
  bool success = pyrobosim_msgs__msg__GoalPredicate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__GoalPredicate__destroy(pyrobosim_msgs__msg__GoalPredicate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__GoalPredicate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__GoalPredicate__Sequence__init(pyrobosim_msgs__msg__GoalPredicate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__GoalPredicate * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__GoalPredicate *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__GoalPredicate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__GoalPredicate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__GoalPredicate__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__GoalPredicate__Sequence__fini(pyrobosim_msgs__msg__GoalPredicate__Sequence * array)
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
      pyrobosim_msgs__msg__GoalPredicate__fini(&array->data[i]);
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

pyrobosim_msgs__msg__GoalPredicate__Sequence *
pyrobosim_msgs__msg__GoalPredicate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__GoalPredicate__Sequence * array = (pyrobosim_msgs__msg__GoalPredicate__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__GoalPredicate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__GoalPredicate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__GoalPredicate__Sequence__destroy(pyrobosim_msgs__msg__GoalPredicate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__GoalPredicate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__GoalPredicate__Sequence__are_equal(const pyrobosim_msgs__msg__GoalPredicate__Sequence * lhs, const pyrobosim_msgs__msg__GoalPredicate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__GoalPredicate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__GoalPredicate__Sequence__copy(
  const pyrobosim_msgs__msg__GoalPredicate__Sequence * input,
  pyrobosim_msgs__msg__GoalPredicate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__GoalPredicate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__GoalPredicate * data =
      (pyrobosim_msgs__msg__GoalPredicate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__GoalPredicate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__GoalPredicate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__GoalPredicate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
