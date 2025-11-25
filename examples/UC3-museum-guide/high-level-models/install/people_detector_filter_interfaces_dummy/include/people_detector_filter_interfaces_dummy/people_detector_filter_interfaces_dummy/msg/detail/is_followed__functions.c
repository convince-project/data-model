// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice
#include "people_detector_filter_interfaces_dummy/msg/detail/is_followed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__init(people_detector_filter_interfaces_dummy__msg__IsFollowed * msg)
{
  if (!msg) {
    return false;
  }
  // is_followed
  return true;
}

void
people_detector_filter_interfaces_dummy__msg__IsFollowed__fini(people_detector_filter_interfaces_dummy__msg__IsFollowed * msg)
{
  if (!msg) {
    return;
  }
  // is_followed
}

bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__are_equal(const people_detector_filter_interfaces_dummy__msg__IsFollowed * lhs, const people_detector_filter_interfaces_dummy__msg__IsFollowed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_followed
  if (lhs->is_followed != rhs->is_followed) {
    return false;
  }
  return true;
}

bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__copy(
  const people_detector_filter_interfaces_dummy__msg__IsFollowed * input,
  people_detector_filter_interfaces_dummy__msg__IsFollowed * output)
{
  if (!input || !output) {
    return false;
  }
  // is_followed
  output->is_followed = input->is_followed;
  return true;
}

people_detector_filter_interfaces_dummy__msg__IsFollowed *
people_detector_filter_interfaces_dummy__msg__IsFollowed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  people_detector_filter_interfaces_dummy__msg__IsFollowed * msg = (people_detector_filter_interfaces_dummy__msg__IsFollowed *)allocator.allocate(sizeof(people_detector_filter_interfaces_dummy__msg__IsFollowed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(people_detector_filter_interfaces_dummy__msg__IsFollowed));
  bool success = people_detector_filter_interfaces_dummy__msg__IsFollowed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
people_detector_filter_interfaces_dummy__msg__IsFollowed__destroy(people_detector_filter_interfaces_dummy__msg__IsFollowed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    people_detector_filter_interfaces_dummy__msg__IsFollowed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__init(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  people_detector_filter_interfaces_dummy__msg__IsFollowed * data = NULL;

  if (size) {
    data = (people_detector_filter_interfaces_dummy__msg__IsFollowed *)allocator.zero_allocate(size, sizeof(people_detector_filter_interfaces_dummy__msg__IsFollowed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = people_detector_filter_interfaces_dummy__msg__IsFollowed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        people_detector_filter_interfaces_dummy__msg__IsFollowed__fini(&data[i - 1]);
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
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__fini(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array)
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
      people_detector_filter_interfaces_dummy__msg__IsFollowed__fini(&array->data[i]);
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

people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence *
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array = (people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence *)allocator.allocate(sizeof(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__destroy(people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__are_equal(const people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * lhs, const people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!people_detector_filter_interfaces_dummy__msg__IsFollowed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence__copy(
  const people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * input,
  people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(people_detector_filter_interfaces_dummy__msg__IsFollowed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    people_detector_filter_interfaces_dummy__msg__IsFollowed * data =
      (people_detector_filter_interfaces_dummy__msg__IsFollowed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!people_detector_filter_interfaces_dummy__msg__IsFollowed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          people_detector_filter_interfaces_dummy__msg__IsFollowed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!people_detector_filter_interfaces_dummy__msg__IsFollowed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
