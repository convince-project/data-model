// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from blackboard_interfaces_dummy:srv/GetIntBlackboard.idl
// generated code does not contain a copyright notice
#include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg)
{
  if (!msg) {
    return false;
  }
  // field_name
  return true;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg)
{
  if (!msg) {
    return;
  }
  // field_name
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // field_name
  if (lhs->field_name != rhs->field_name) {
    return false;
  }
  return true;
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // field_name
  output->field_name = input->field_name;
  return true;
}

blackboard_interfaces_dummy__srv__GetIntBlackboard_Request *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Request *)allocator.allocate(sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request));
  bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * data = NULL;

  if (size) {
    data = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Request *)allocator.zero_allocate(size, sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini(&data[i - 1]);
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
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array)
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
      blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini(&array->data[i]);
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

blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence *)allocator.allocate(sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Request * data =
      (blackboard_interfaces_dummy__srv__GetIntBlackboard_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg)
{
  if (!msg) {
    return false;
  }
  // value
  // is_ok
  return true;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg)
{
  if (!msg) {
    return;
  }
  // value
  // is_ok
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // is_ok
  if (lhs->is_ok != rhs->is_ok) {
    return false;
  }
  return true;
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  // is_ok
  output->is_ok = input->is_ok;
  return true;
}

blackboard_interfaces_dummy__srv__GetIntBlackboard_Response *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Response *)allocator.allocate(sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response));
  bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * data = NULL;

  if (size) {
    data = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Response *)allocator.zero_allocate(size, sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini(&data[i - 1]);
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
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array)
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
      blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini(&array->data[i]);
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

blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence *)allocator.allocate(sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Response * data =
      (blackboard_interfaces_dummy__srv__GetIntBlackboard_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "blackboard_interfaces_dummy/srv/detail/get_int_blackboard__functions.h"

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(msg);
    return false;
  }
  // request
  if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__init(&msg->request, 0)) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(msg);
    return false;
  }
  // response
  if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__init(&msg->response, 0)) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(msg);
    return false;
  }
  return true;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__fini(&msg->request);
  // response
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__fini(&msg->response);
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

blackboard_interfaces_dummy__srv__GetIntBlackboard_Event *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Event *)allocator.allocate(sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event));
  bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__init(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * data = NULL;

  if (size) {
    data = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Event *)allocator.zero_allocate(size, sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(&data[i - 1]);
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
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__fini(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array)
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
      blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(&array->data[i]);
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

blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence *
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array = (blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence *)allocator.allocate(sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__destroy(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__are_equal(const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * lhs, const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence__copy(
  const blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * input,
  blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(blackboard_interfaces_dummy__srv__GetIntBlackboard_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    blackboard_interfaces_dummy__srv__GetIntBlackboard_Event * data =
      (blackboard_interfaces_dummy__srv__GetIntBlackboard_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!blackboard_interfaces_dummy__srv__GetIntBlackboard_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
