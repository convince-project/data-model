// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bt_interfaces_dummy:msg/ConditionResponse.idl
// generated code does not contain a copyright notice
#include "bt_interfaces_dummy/msg/detail/condition_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bt_interfaces_dummy__msg__ConditionResponse__init(bt_interfaces_dummy__msg__ConditionResponse * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
bt_interfaces_dummy__msg__ConditionResponse__fini(bt_interfaces_dummy__msg__ConditionResponse * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
bt_interfaces_dummy__msg__ConditionResponse__are_equal(const bt_interfaces_dummy__msg__ConditionResponse * lhs, const bt_interfaces_dummy__msg__ConditionResponse * rhs)
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
bt_interfaces_dummy__msg__ConditionResponse__copy(
  const bt_interfaces_dummy__msg__ConditionResponse * input,
  bt_interfaces_dummy__msg__ConditionResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

bt_interfaces_dummy__msg__ConditionResponse *
bt_interfaces_dummy__msg__ConditionResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__msg__ConditionResponse * msg = (bt_interfaces_dummy__msg__ConditionResponse *)allocator.allocate(sizeof(bt_interfaces_dummy__msg__ConditionResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_interfaces_dummy__msg__ConditionResponse));
  bool success = bt_interfaces_dummy__msg__ConditionResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bt_interfaces_dummy__msg__ConditionResponse__destroy(bt_interfaces_dummy__msg__ConditionResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bt_interfaces_dummy__msg__ConditionResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bt_interfaces_dummy__msg__ConditionResponse__Sequence__init(bt_interfaces_dummy__msg__ConditionResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__msg__ConditionResponse * data = NULL;

  if (size) {
    data = (bt_interfaces_dummy__msg__ConditionResponse *)allocator.zero_allocate(size, sizeof(bt_interfaces_dummy__msg__ConditionResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_interfaces_dummy__msg__ConditionResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_interfaces_dummy__msg__ConditionResponse__fini(&data[i - 1]);
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
bt_interfaces_dummy__msg__ConditionResponse__Sequence__fini(bt_interfaces_dummy__msg__ConditionResponse__Sequence * array)
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
      bt_interfaces_dummy__msg__ConditionResponse__fini(&array->data[i]);
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

bt_interfaces_dummy__msg__ConditionResponse__Sequence *
bt_interfaces_dummy__msg__ConditionResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__msg__ConditionResponse__Sequence * array = (bt_interfaces_dummy__msg__ConditionResponse__Sequence *)allocator.allocate(sizeof(bt_interfaces_dummy__msg__ConditionResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bt_interfaces_dummy__msg__ConditionResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bt_interfaces_dummy__msg__ConditionResponse__Sequence__destroy(bt_interfaces_dummy__msg__ConditionResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bt_interfaces_dummy__msg__ConditionResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bt_interfaces_dummy__msg__ConditionResponse__Sequence__are_equal(const bt_interfaces_dummy__msg__ConditionResponse__Sequence * lhs, const bt_interfaces_dummy__msg__ConditionResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bt_interfaces_dummy__msg__ConditionResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bt_interfaces_dummy__msg__ConditionResponse__Sequence__copy(
  const bt_interfaces_dummy__msg__ConditionResponse__Sequence * input,
  bt_interfaces_dummy__msg__ConditionResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bt_interfaces_dummy__msg__ConditionResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bt_interfaces_dummy__msg__ConditionResponse * data =
      (bt_interfaces_dummy__msg__ConditionResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bt_interfaces_dummy__msg__ConditionResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bt_interfaces_dummy__msg__ConditionResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bt_interfaces_dummy__msg__ConditionResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
