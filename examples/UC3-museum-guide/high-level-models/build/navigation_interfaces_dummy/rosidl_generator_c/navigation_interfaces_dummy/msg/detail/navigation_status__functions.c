// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice
#include "navigation_interfaces_dummy/msg/detail/navigation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
navigation_interfaces_dummy__msg__NavigationStatus__init(navigation_interfaces_dummy__msg__NavigationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
navigation_interfaces_dummy__msg__NavigationStatus__fini(navigation_interfaces_dummy__msg__NavigationStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
navigation_interfaces_dummy__msg__NavigationStatus__are_equal(const navigation_interfaces_dummy__msg__NavigationStatus * lhs, const navigation_interfaces_dummy__msg__NavigationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
navigation_interfaces_dummy__msg__NavigationStatus__copy(
  const navigation_interfaces_dummy__msg__NavigationStatus * input,
  navigation_interfaces_dummy__msg__NavigationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

navigation_interfaces_dummy__msg__NavigationStatus *
navigation_interfaces_dummy__msg__NavigationStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces_dummy__msg__NavigationStatus * msg = (navigation_interfaces_dummy__msg__NavigationStatus *)allocator.allocate(sizeof(navigation_interfaces_dummy__msg__NavigationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces_dummy__msg__NavigationStatus));
  bool success = navigation_interfaces_dummy__msg__NavigationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces_dummy__msg__NavigationStatus__destroy(navigation_interfaces_dummy__msg__NavigationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces_dummy__msg__NavigationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces_dummy__msg__NavigationStatus__Sequence__init(navigation_interfaces_dummy__msg__NavigationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces_dummy__msg__NavigationStatus * data = NULL;

  if (size) {
    data = (navigation_interfaces_dummy__msg__NavigationStatus *)allocator.zero_allocate(size, sizeof(navigation_interfaces_dummy__msg__NavigationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces_dummy__msg__NavigationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces_dummy__msg__NavigationStatus__fini(&data[i - 1]);
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
navigation_interfaces_dummy__msg__NavigationStatus__Sequence__fini(navigation_interfaces_dummy__msg__NavigationStatus__Sequence * array)
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
      navigation_interfaces_dummy__msg__NavigationStatus__fini(&array->data[i]);
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

navigation_interfaces_dummy__msg__NavigationStatus__Sequence *
navigation_interfaces_dummy__msg__NavigationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces_dummy__msg__NavigationStatus__Sequence * array = (navigation_interfaces_dummy__msg__NavigationStatus__Sequence *)allocator.allocate(sizeof(navigation_interfaces_dummy__msg__NavigationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces_dummy__msg__NavigationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces_dummy__msg__NavigationStatus__Sequence__destroy(navigation_interfaces_dummy__msg__NavigationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces_dummy__msg__NavigationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces_dummy__msg__NavigationStatus__Sequence__are_equal(const navigation_interfaces_dummy__msg__NavigationStatus__Sequence * lhs, const navigation_interfaces_dummy__msg__NavigationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces_dummy__msg__NavigationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces_dummy__msg__NavigationStatus__Sequence__copy(
  const navigation_interfaces_dummy__msg__NavigationStatus__Sequence * input,
  navigation_interfaces_dummy__msg__NavigationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces_dummy__msg__NavigationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces_dummy__msg__NavigationStatus * data =
      (navigation_interfaces_dummy__msg__NavigationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces_dummy__msg__NavigationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces_dummy__msg__NavigationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces_dummy__msg__NavigationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
