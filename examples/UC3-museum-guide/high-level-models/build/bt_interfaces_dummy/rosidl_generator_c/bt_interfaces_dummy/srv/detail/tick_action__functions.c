// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bt_interfaces_dummy:srv/TickAction.idl
// generated code does not contain a copyright notice
#include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bt_interfaces_dummy__srv__TickAction_Request__init(bt_interfaces_dummy__srv__TickAction_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_interfaces_dummy__srv__TickAction_Request__fini(bt_interfaces_dummy__srv__TickAction_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
bt_interfaces_dummy__srv__TickAction_Request__are_equal(const bt_interfaces_dummy__srv__TickAction_Request * lhs, const bt_interfaces_dummy__srv__TickAction_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
bt_interfaces_dummy__srv__TickAction_Request__copy(
  const bt_interfaces_dummy__srv__TickAction_Request * input,
  bt_interfaces_dummy__srv__TickAction_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

bt_interfaces_dummy__srv__TickAction_Request *
bt_interfaces_dummy__srv__TickAction_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Request * msg = (bt_interfaces_dummy__srv__TickAction_Request *)allocator.allocate(sizeof(bt_interfaces_dummy__srv__TickAction_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_interfaces_dummy__srv__TickAction_Request));
  bool success = bt_interfaces_dummy__srv__TickAction_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bt_interfaces_dummy__srv__TickAction_Request__destroy(bt_interfaces_dummy__srv__TickAction_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bt_interfaces_dummy__srv__TickAction_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bt_interfaces_dummy__srv__TickAction_Request__Sequence__init(bt_interfaces_dummy__srv__TickAction_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Request * data = NULL;

  if (size) {
    data = (bt_interfaces_dummy__srv__TickAction_Request *)allocator.zero_allocate(size, sizeof(bt_interfaces_dummy__srv__TickAction_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_interfaces_dummy__srv__TickAction_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_interfaces_dummy__srv__TickAction_Request__fini(&data[i - 1]);
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
bt_interfaces_dummy__srv__TickAction_Request__Sequence__fini(bt_interfaces_dummy__srv__TickAction_Request__Sequence * array)
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
      bt_interfaces_dummy__srv__TickAction_Request__fini(&array->data[i]);
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

bt_interfaces_dummy__srv__TickAction_Request__Sequence *
bt_interfaces_dummy__srv__TickAction_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Request__Sequence * array = (bt_interfaces_dummy__srv__TickAction_Request__Sequence *)allocator.allocate(sizeof(bt_interfaces_dummy__srv__TickAction_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bt_interfaces_dummy__srv__TickAction_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bt_interfaces_dummy__srv__TickAction_Request__Sequence__destroy(bt_interfaces_dummy__srv__TickAction_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bt_interfaces_dummy__srv__TickAction_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bt_interfaces_dummy__srv__TickAction_Request__Sequence__are_equal(const bt_interfaces_dummy__srv__TickAction_Request__Sequence * lhs, const bt_interfaces_dummy__srv__TickAction_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bt_interfaces_dummy__srv__TickAction_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bt_interfaces_dummy__srv__TickAction_Request__Sequence__copy(
  const bt_interfaces_dummy__srv__TickAction_Request__Sequence * input,
  bt_interfaces_dummy__srv__TickAction_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bt_interfaces_dummy__srv__TickAction_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bt_interfaces_dummy__srv__TickAction_Request * data =
      (bt_interfaces_dummy__srv__TickAction_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bt_interfaces_dummy__srv__TickAction_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bt_interfaces_dummy__srv__TickAction_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bt_interfaces_dummy__srv__TickAction_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
bt_interfaces_dummy__srv__TickAction_Response__init(bt_interfaces_dummy__srv__TickAction_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // is_ok
  return true;
}

void
bt_interfaces_dummy__srv__TickAction_Response__fini(bt_interfaces_dummy__srv__TickAction_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // is_ok
}

bool
bt_interfaces_dummy__srv__TickAction_Response__are_equal(const bt_interfaces_dummy__srv__TickAction_Response * lhs, const bt_interfaces_dummy__srv__TickAction_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // is_ok
  if (lhs->is_ok != rhs->is_ok) {
    return false;
  }
  return true;
}

bool
bt_interfaces_dummy__srv__TickAction_Response__copy(
  const bt_interfaces_dummy__srv__TickAction_Response * input,
  bt_interfaces_dummy__srv__TickAction_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // is_ok
  output->is_ok = input->is_ok;
  return true;
}

bt_interfaces_dummy__srv__TickAction_Response *
bt_interfaces_dummy__srv__TickAction_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Response * msg = (bt_interfaces_dummy__srv__TickAction_Response *)allocator.allocate(sizeof(bt_interfaces_dummy__srv__TickAction_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_interfaces_dummy__srv__TickAction_Response));
  bool success = bt_interfaces_dummy__srv__TickAction_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bt_interfaces_dummy__srv__TickAction_Response__destroy(bt_interfaces_dummy__srv__TickAction_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bt_interfaces_dummy__srv__TickAction_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bt_interfaces_dummy__srv__TickAction_Response__Sequence__init(bt_interfaces_dummy__srv__TickAction_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Response * data = NULL;

  if (size) {
    data = (bt_interfaces_dummy__srv__TickAction_Response *)allocator.zero_allocate(size, sizeof(bt_interfaces_dummy__srv__TickAction_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_interfaces_dummy__srv__TickAction_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_interfaces_dummy__srv__TickAction_Response__fini(&data[i - 1]);
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
bt_interfaces_dummy__srv__TickAction_Response__Sequence__fini(bt_interfaces_dummy__srv__TickAction_Response__Sequence * array)
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
      bt_interfaces_dummy__srv__TickAction_Response__fini(&array->data[i]);
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

bt_interfaces_dummy__srv__TickAction_Response__Sequence *
bt_interfaces_dummy__srv__TickAction_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Response__Sequence * array = (bt_interfaces_dummy__srv__TickAction_Response__Sequence *)allocator.allocate(sizeof(bt_interfaces_dummy__srv__TickAction_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bt_interfaces_dummy__srv__TickAction_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bt_interfaces_dummy__srv__TickAction_Response__Sequence__destroy(bt_interfaces_dummy__srv__TickAction_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bt_interfaces_dummy__srv__TickAction_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bt_interfaces_dummy__srv__TickAction_Response__Sequence__are_equal(const bt_interfaces_dummy__srv__TickAction_Response__Sequence * lhs, const bt_interfaces_dummy__srv__TickAction_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bt_interfaces_dummy__srv__TickAction_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bt_interfaces_dummy__srv__TickAction_Response__Sequence__copy(
  const bt_interfaces_dummy__srv__TickAction_Response__Sequence * input,
  bt_interfaces_dummy__srv__TickAction_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bt_interfaces_dummy__srv__TickAction_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bt_interfaces_dummy__srv__TickAction_Response * data =
      (bt_interfaces_dummy__srv__TickAction_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bt_interfaces_dummy__srv__TickAction_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bt_interfaces_dummy__srv__TickAction_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bt_interfaces_dummy__srv__TickAction_Response__copy(
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
// #include "bt_interfaces_dummy/srv/detail/tick_action__functions.h"

bool
bt_interfaces_dummy__srv__TickAction_Event__init(bt_interfaces_dummy__srv__TickAction_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    bt_interfaces_dummy__srv__TickAction_Event__fini(msg);
    return false;
  }
  // request
  if (!bt_interfaces_dummy__srv__TickAction_Request__Sequence__init(&msg->request, 0)) {
    bt_interfaces_dummy__srv__TickAction_Event__fini(msg);
    return false;
  }
  // response
  if (!bt_interfaces_dummy__srv__TickAction_Response__Sequence__init(&msg->response, 0)) {
    bt_interfaces_dummy__srv__TickAction_Event__fini(msg);
    return false;
  }
  return true;
}

void
bt_interfaces_dummy__srv__TickAction_Event__fini(bt_interfaces_dummy__srv__TickAction_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  bt_interfaces_dummy__srv__TickAction_Request__Sequence__fini(&msg->request);
  // response
  bt_interfaces_dummy__srv__TickAction_Response__Sequence__fini(&msg->response);
}

bool
bt_interfaces_dummy__srv__TickAction_Event__are_equal(const bt_interfaces_dummy__srv__TickAction_Event * lhs, const bt_interfaces_dummy__srv__TickAction_Event * rhs)
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
  if (!bt_interfaces_dummy__srv__TickAction_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!bt_interfaces_dummy__srv__TickAction_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
bt_interfaces_dummy__srv__TickAction_Event__copy(
  const bt_interfaces_dummy__srv__TickAction_Event * input,
  bt_interfaces_dummy__srv__TickAction_Event * output)
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
  if (!bt_interfaces_dummy__srv__TickAction_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!bt_interfaces_dummy__srv__TickAction_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

bt_interfaces_dummy__srv__TickAction_Event *
bt_interfaces_dummy__srv__TickAction_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Event * msg = (bt_interfaces_dummy__srv__TickAction_Event *)allocator.allocate(sizeof(bt_interfaces_dummy__srv__TickAction_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_interfaces_dummy__srv__TickAction_Event));
  bool success = bt_interfaces_dummy__srv__TickAction_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bt_interfaces_dummy__srv__TickAction_Event__destroy(bt_interfaces_dummy__srv__TickAction_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bt_interfaces_dummy__srv__TickAction_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bt_interfaces_dummy__srv__TickAction_Event__Sequence__init(bt_interfaces_dummy__srv__TickAction_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Event * data = NULL;

  if (size) {
    data = (bt_interfaces_dummy__srv__TickAction_Event *)allocator.zero_allocate(size, sizeof(bt_interfaces_dummy__srv__TickAction_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_interfaces_dummy__srv__TickAction_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_interfaces_dummy__srv__TickAction_Event__fini(&data[i - 1]);
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
bt_interfaces_dummy__srv__TickAction_Event__Sequence__fini(bt_interfaces_dummy__srv__TickAction_Event__Sequence * array)
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
      bt_interfaces_dummy__srv__TickAction_Event__fini(&array->data[i]);
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

bt_interfaces_dummy__srv__TickAction_Event__Sequence *
bt_interfaces_dummy__srv__TickAction_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bt_interfaces_dummy__srv__TickAction_Event__Sequence * array = (bt_interfaces_dummy__srv__TickAction_Event__Sequence *)allocator.allocate(sizeof(bt_interfaces_dummy__srv__TickAction_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bt_interfaces_dummy__srv__TickAction_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bt_interfaces_dummy__srv__TickAction_Event__Sequence__destroy(bt_interfaces_dummy__srv__TickAction_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bt_interfaces_dummy__srv__TickAction_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bt_interfaces_dummy__srv__TickAction_Event__Sequence__are_equal(const bt_interfaces_dummy__srv__TickAction_Event__Sequence * lhs, const bt_interfaces_dummy__srv__TickAction_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bt_interfaces_dummy__srv__TickAction_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bt_interfaces_dummy__srv__TickAction_Event__Sequence__copy(
  const bt_interfaces_dummy__srv__TickAction_Event__Sequence * input,
  bt_interfaces_dummy__srv__TickAction_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bt_interfaces_dummy__srv__TickAction_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bt_interfaces_dummy__srv__TickAction_Event * data =
      (bt_interfaces_dummy__srv__TickAction_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bt_interfaces_dummy__srv__TickAction_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bt_interfaces_dummy__srv__TickAction_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bt_interfaces_dummy__srv__TickAction_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
