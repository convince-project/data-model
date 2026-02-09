// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:srv/ResetWorld.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/srv/detail/reset_world__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
pyrobosim_msgs__srv__ResetWorld_Request__init(pyrobosim_msgs__srv__ResetWorld_Request * msg)
{
  if (!msg) {
    return false;
  }
  // deterministic
  // seed
  msg->seed = -1ll;
  return true;
}

void
pyrobosim_msgs__srv__ResetWorld_Request__fini(pyrobosim_msgs__srv__ResetWorld_Request * msg)
{
  if (!msg) {
    return;
  }
  // deterministic
  // seed
}

bool
pyrobosim_msgs__srv__ResetWorld_Request__are_equal(const pyrobosim_msgs__srv__ResetWorld_Request * lhs, const pyrobosim_msgs__srv__ResetWorld_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // deterministic
  if (lhs->deterministic != rhs->deterministic) {
    return false;
  }
  // seed
  if (lhs->seed != rhs->seed) {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__srv__ResetWorld_Request__copy(
  const pyrobosim_msgs__srv__ResetWorld_Request * input,
  pyrobosim_msgs__srv__ResetWorld_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // deterministic
  output->deterministic = input->deterministic;
  // seed
  output->seed = input->seed;
  return true;
}

pyrobosim_msgs__srv__ResetWorld_Request *
pyrobosim_msgs__srv__ResetWorld_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Request * msg = (pyrobosim_msgs__srv__ResetWorld_Request *)allocator.allocate(sizeof(pyrobosim_msgs__srv__ResetWorld_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__srv__ResetWorld_Request));
  bool success = pyrobosim_msgs__srv__ResetWorld_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__srv__ResetWorld_Request__destroy(pyrobosim_msgs__srv__ResetWorld_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__srv__ResetWorld_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__srv__ResetWorld_Request__Sequence__init(pyrobosim_msgs__srv__ResetWorld_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Request * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__srv__ResetWorld_Request *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__srv__ResetWorld_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__srv__ResetWorld_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__srv__ResetWorld_Request__fini(&data[i - 1]);
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
pyrobosim_msgs__srv__ResetWorld_Request__Sequence__fini(pyrobosim_msgs__srv__ResetWorld_Request__Sequence * array)
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
      pyrobosim_msgs__srv__ResetWorld_Request__fini(&array->data[i]);
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

pyrobosim_msgs__srv__ResetWorld_Request__Sequence *
pyrobosim_msgs__srv__ResetWorld_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Request__Sequence * array = (pyrobosim_msgs__srv__ResetWorld_Request__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__srv__ResetWorld_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__srv__ResetWorld_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__srv__ResetWorld_Request__Sequence__destroy(pyrobosim_msgs__srv__ResetWorld_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__srv__ResetWorld_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__srv__ResetWorld_Request__Sequence__are_equal(const pyrobosim_msgs__srv__ResetWorld_Request__Sequence * lhs, const pyrobosim_msgs__srv__ResetWorld_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__srv__ResetWorld_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__srv__ResetWorld_Request__Sequence__copy(
  const pyrobosim_msgs__srv__ResetWorld_Request__Sequence * input,
  pyrobosim_msgs__srv__ResetWorld_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__srv__ResetWorld_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__srv__ResetWorld_Request * data =
      (pyrobosim_msgs__srv__ResetWorld_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__srv__ResetWorld_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__srv__ResetWorld_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__srv__ResetWorld_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pyrobosim_msgs__srv__ResetWorld_Response__init(pyrobosim_msgs__srv__ResetWorld_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
pyrobosim_msgs__srv__ResetWorld_Response__fini(pyrobosim_msgs__srv__ResetWorld_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
pyrobosim_msgs__srv__ResetWorld_Response__are_equal(const pyrobosim_msgs__srv__ResetWorld_Response * lhs, const pyrobosim_msgs__srv__ResetWorld_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__srv__ResetWorld_Response__copy(
  const pyrobosim_msgs__srv__ResetWorld_Response * input,
  pyrobosim_msgs__srv__ResetWorld_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

pyrobosim_msgs__srv__ResetWorld_Response *
pyrobosim_msgs__srv__ResetWorld_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Response * msg = (pyrobosim_msgs__srv__ResetWorld_Response *)allocator.allocate(sizeof(pyrobosim_msgs__srv__ResetWorld_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__srv__ResetWorld_Response));
  bool success = pyrobosim_msgs__srv__ResetWorld_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__srv__ResetWorld_Response__destroy(pyrobosim_msgs__srv__ResetWorld_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__srv__ResetWorld_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__srv__ResetWorld_Response__Sequence__init(pyrobosim_msgs__srv__ResetWorld_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Response * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__srv__ResetWorld_Response *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__srv__ResetWorld_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__srv__ResetWorld_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__srv__ResetWorld_Response__fini(&data[i - 1]);
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
pyrobosim_msgs__srv__ResetWorld_Response__Sequence__fini(pyrobosim_msgs__srv__ResetWorld_Response__Sequence * array)
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
      pyrobosim_msgs__srv__ResetWorld_Response__fini(&array->data[i]);
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

pyrobosim_msgs__srv__ResetWorld_Response__Sequence *
pyrobosim_msgs__srv__ResetWorld_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Response__Sequence * array = (pyrobosim_msgs__srv__ResetWorld_Response__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__srv__ResetWorld_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__srv__ResetWorld_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__srv__ResetWorld_Response__Sequence__destroy(pyrobosim_msgs__srv__ResetWorld_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__srv__ResetWorld_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__srv__ResetWorld_Response__Sequence__are_equal(const pyrobosim_msgs__srv__ResetWorld_Response__Sequence * lhs, const pyrobosim_msgs__srv__ResetWorld_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__srv__ResetWorld_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__srv__ResetWorld_Response__Sequence__copy(
  const pyrobosim_msgs__srv__ResetWorld_Response__Sequence * input,
  pyrobosim_msgs__srv__ResetWorld_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__srv__ResetWorld_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__srv__ResetWorld_Response * data =
      (pyrobosim_msgs__srv__ResetWorld_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__srv__ResetWorld_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__srv__ResetWorld_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__srv__ResetWorld_Response__copy(
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
// #include "pyrobosim_msgs/srv/detail/reset_world__functions.h"

bool
pyrobosim_msgs__srv__ResetWorld_Event__init(pyrobosim_msgs__srv__ResetWorld_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pyrobosim_msgs__srv__ResetWorld_Event__fini(msg);
    return false;
  }
  // request
  if (!pyrobosim_msgs__srv__ResetWorld_Request__Sequence__init(&msg->request, 0)) {
    pyrobosim_msgs__srv__ResetWorld_Event__fini(msg);
    return false;
  }
  // response
  if (!pyrobosim_msgs__srv__ResetWorld_Response__Sequence__init(&msg->response, 0)) {
    pyrobosim_msgs__srv__ResetWorld_Event__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__srv__ResetWorld_Event__fini(pyrobosim_msgs__srv__ResetWorld_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pyrobosim_msgs__srv__ResetWorld_Request__Sequence__fini(&msg->request);
  // response
  pyrobosim_msgs__srv__ResetWorld_Response__Sequence__fini(&msg->response);
}

bool
pyrobosim_msgs__srv__ResetWorld_Event__are_equal(const pyrobosim_msgs__srv__ResetWorld_Event * lhs, const pyrobosim_msgs__srv__ResetWorld_Event * rhs)
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
  if (!pyrobosim_msgs__srv__ResetWorld_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pyrobosim_msgs__srv__ResetWorld_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__srv__ResetWorld_Event__copy(
  const pyrobosim_msgs__srv__ResetWorld_Event * input,
  pyrobosim_msgs__srv__ResetWorld_Event * output)
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
  if (!pyrobosim_msgs__srv__ResetWorld_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pyrobosim_msgs__srv__ResetWorld_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__srv__ResetWorld_Event *
pyrobosim_msgs__srv__ResetWorld_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Event * msg = (pyrobosim_msgs__srv__ResetWorld_Event *)allocator.allocate(sizeof(pyrobosim_msgs__srv__ResetWorld_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__srv__ResetWorld_Event));
  bool success = pyrobosim_msgs__srv__ResetWorld_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__srv__ResetWorld_Event__destroy(pyrobosim_msgs__srv__ResetWorld_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__srv__ResetWorld_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__srv__ResetWorld_Event__Sequence__init(pyrobosim_msgs__srv__ResetWorld_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Event * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__srv__ResetWorld_Event *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__srv__ResetWorld_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__srv__ResetWorld_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__srv__ResetWorld_Event__fini(&data[i - 1]);
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
pyrobosim_msgs__srv__ResetWorld_Event__Sequence__fini(pyrobosim_msgs__srv__ResetWorld_Event__Sequence * array)
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
      pyrobosim_msgs__srv__ResetWorld_Event__fini(&array->data[i]);
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

pyrobosim_msgs__srv__ResetWorld_Event__Sequence *
pyrobosim_msgs__srv__ResetWorld_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__srv__ResetWorld_Event__Sequence * array = (pyrobosim_msgs__srv__ResetWorld_Event__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__srv__ResetWorld_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__srv__ResetWorld_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__srv__ResetWorld_Event__Sequence__destroy(pyrobosim_msgs__srv__ResetWorld_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__srv__ResetWorld_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__srv__ResetWorld_Event__Sequence__are_equal(const pyrobosim_msgs__srv__ResetWorld_Event__Sequence * lhs, const pyrobosim_msgs__srv__ResetWorld_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__srv__ResetWorld_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__srv__ResetWorld_Event__Sequence__copy(
  const pyrobosim_msgs__srv__ResetWorld_Event__Sequence * input,
  pyrobosim_msgs__srv__ResetWorld_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__srv__ResetWorld_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__srv__ResetWorld_Event * data =
      (pyrobosim_msgs__srv__ResetWorld_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__srv__ResetWorld_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__srv__ResetWorld_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__srv__ResetWorld_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
