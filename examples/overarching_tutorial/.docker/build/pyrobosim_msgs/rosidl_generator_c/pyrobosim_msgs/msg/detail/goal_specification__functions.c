// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/GoalSpecification.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/goal_specification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `predicates`
#include "pyrobosim_msgs/msg/detail/goal_predicate__functions.h"

bool
pyrobosim_msgs__msg__GoalSpecification__init(pyrobosim_msgs__msg__GoalSpecification * msg)
{
  if (!msg) {
    return false;
  }
  // predicates
  if (!pyrobosim_msgs__msg__GoalPredicate__Sequence__init(&msg->predicates, 0)) {
    pyrobosim_msgs__msg__GoalSpecification__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__msg__GoalSpecification__fini(pyrobosim_msgs__msg__GoalSpecification * msg)
{
  if (!msg) {
    return;
  }
  // predicates
  pyrobosim_msgs__msg__GoalPredicate__Sequence__fini(&msg->predicates);
}

bool
pyrobosim_msgs__msg__GoalSpecification__are_equal(const pyrobosim_msgs__msg__GoalSpecification * lhs, const pyrobosim_msgs__msg__GoalSpecification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // predicates
  if (!pyrobosim_msgs__msg__GoalPredicate__Sequence__are_equal(
      &(lhs->predicates), &(rhs->predicates)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__GoalSpecification__copy(
  const pyrobosim_msgs__msg__GoalSpecification * input,
  pyrobosim_msgs__msg__GoalSpecification * output)
{
  if (!input || !output) {
    return false;
  }
  // predicates
  if (!pyrobosim_msgs__msg__GoalPredicate__Sequence__copy(
      &(input->predicates), &(output->predicates)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__msg__GoalSpecification *
pyrobosim_msgs__msg__GoalSpecification__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__GoalSpecification * msg = (pyrobosim_msgs__msg__GoalSpecification *)allocator.allocate(sizeof(pyrobosim_msgs__msg__GoalSpecification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__GoalSpecification));
  bool success = pyrobosim_msgs__msg__GoalSpecification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__GoalSpecification__destroy(pyrobosim_msgs__msg__GoalSpecification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__GoalSpecification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__GoalSpecification__Sequence__init(pyrobosim_msgs__msg__GoalSpecification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__GoalSpecification * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__GoalSpecification *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__GoalSpecification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__GoalSpecification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__GoalSpecification__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__GoalSpecification__Sequence__fini(pyrobosim_msgs__msg__GoalSpecification__Sequence * array)
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
      pyrobosim_msgs__msg__GoalSpecification__fini(&array->data[i]);
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

pyrobosim_msgs__msg__GoalSpecification__Sequence *
pyrobosim_msgs__msg__GoalSpecification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__GoalSpecification__Sequence * array = (pyrobosim_msgs__msg__GoalSpecification__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__GoalSpecification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__GoalSpecification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__GoalSpecification__Sequence__destroy(pyrobosim_msgs__msg__GoalSpecification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__GoalSpecification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__GoalSpecification__Sequence__are_equal(const pyrobosim_msgs__msg__GoalSpecification__Sequence * lhs, const pyrobosim_msgs__msg__GoalSpecification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__GoalSpecification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__GoalSpecification__Sequence__copy(
  const pyrobosim_msgs__msg__GoalSpecification__Sequence * input,
  pyrobosim_msgs__msg__GoalSpecification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__GoalSpecification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__GoalSpecification * data =
      (pyrobosim_msgs__msg__GoalSpecification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__GoalSpecification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__GoalSpecification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__GoalSpecification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
