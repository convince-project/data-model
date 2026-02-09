// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pyrobosim_msgs:msg/TaskAction.idl
// generated code does not contain a copyright notice
#include "pyrobosim_msgs/msg/detail/task_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot`
// Member `type`
// Member `object`
// Member `room`
// Member `source_location`
// Member `target_location`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `path`
#include "pyrobosim_msgs/msg/detail/path__functions.h"

bool
pyrobosim_msgs__msg__TaskAction__init(pyrobosim_msgs__msg__TaskAction * msg)
{
  if (!msg) {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__init(&msg->object)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // room
  if (!rosidl_runtime_c__String__init(&msg->room)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // source_location
  if (!rosidl_runtime_c__String__init(&msg->source_location)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // target_location
  if (!rosidl_runtime_c__String__init(&msg->target_location)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // cost
  // has_pose
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  // path
  if (!pyrobosim_msgs__msg__Path__init(&msg->path)) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
    return false;
  }
  return true;
}

void
pyrobosim_msgs__msg__TaskAction__fini(pyrobosim_msgs__msg__TaskAction * msg)
{
  if (!msg) {
    return;
  }
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // object
  rosidl_runtime_c__String__fini(&msg->object);
  // room
  rosidl_runtime_c__String__fini(&msg->room);
  // source_location
  rosidl_runtime_c__String__fini(&msg->source_location);
  // target_location
  rosidl_runtime_c__String__fini(&msg->target_location);
  // cost
  // has_pose
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // path
  pyrobosim_msgs__msg__Path__fini(&msg->path);
}

bool
pyrobosim_msgs__msg__TaskAction__are_equal(const pyrobosim_msgs__msg__TaskAction * lhs, const pyrobosim_msgs__msg__TaskAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot), &(rhs->robot)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // room
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->room), &(rhs->room)))
  {
    return false;
  }
  // source_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source_location), &(rhs->source_location)))
  {
    return false;
  }
  // target_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_location), &(rhs->target_location)))
  {
    return false;
  }
  // cost
  if (lhs->cost != rhs->cost) {
    return false;
  }
  // has_pose
  if (lhs->has_pose != rhs->has_pose) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // path
  if (!pyrobosim_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
pyrobosim_msgs__msg__TaskAction__copy(
  const pyrobosim_msgs__msg__TaskAction * input,
  pyrobosim_msgs__msg__TaskAction * output)
{
  if (!input || !output) {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__copy(
      &(input->robot), &(output->robot)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // room
  if (!rosidl_runtime_c__String__copy(
      &(input->room), &(output->room)))
  {
    return false;
  }
  // source_location
  if (!rosidl_runtime_c__String__copy(
      &(input->source_location), &(output->source_location)))
  {
    return false;
  }
  // target_location
  if (!rosidl_runtime_c__String__copy(
      &(input->target_location), &(output->target_location)))
  {
    return false;
  }
  // cost
  output->cost = input->cost;
  // has_pose
  output->has_pose = input->has_pose;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // path
  if (!pyrobosim_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

pyrobosim_msgs__msg__TaskAction *
pyrobosim_msgs__msg__TaskAction__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__TaskAction * msg = (pyrobosim_msgs__msg__TaskAction *)allocator.allocate(sizeof(pyrobosim_msgs__msg__TaskAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pyrobosim_msgs__msg__TaskAction));
  bool success = pyrobosim_msgs__msg__TaskAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pyrobosim_msgs__msg__TaskAction__destroy(pyrobosim_msgs__msg__TaskAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pyrobosim_msgs__msg__TaskAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pyrobosim_msgs__msg__TaskAction__Sequence__init(pyrobosim_msgs__msg__TaskAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__TaskAction * data = NULL;

  if (size) {
    data = (pyrobosim_msgs__msg__TaskAction *)allocator.zero_allocate(size, sizeof(pyrobosim_msgs__msg__TaskAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pyrobosim_msgs__msg__TaskAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pyrobosim_msgs__msg__TaskAction__fini(&data[i - 1]);
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
pyrobosim_msgs__msg__TaskAction__Sequence__fini(pyrobosim_msgs__msg__TaskAction__Sequence * array)
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
      pyrobosim_msgs__msg__TaskAction__fini(&array->data[i]);
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

pyrobosim_msgs__msg__TaskAction__Sequence *
pyrobosim_msgs__msg__TaskAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pyrobosim_msgs__msg__TaskAction__Sequence * array = (pyrobosim_msgs__msg__TaskAction__Sequence *)allocator.allocate(sizeof(pyrobosim_msgs__msg__TaskAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pyrobosim_msgs__msg__TaskAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pyrobosim_msgs__msg__TaskAction__Sequence__destroy(pyrobosim_msgs__msg__TaskAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pyrobosim_msgs__msg__TaskAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pyrobosim_msgs__msg__TaskAction__Sequence__are_equal(const pyrobosim_msgs__msg__TaskAction__Sequence * lhs, const pyrobosim_msgs__msg__TaskAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pyrobosim_msgs__msg__TaskAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pyrobosim_msgs__msg__TaskAction__Sequence__copy(
  const pyrobosim_msgs__msg__TaskAction__Sequence * input,
  pyrobosim_msgs__msg__TaskAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pyrobosim_msgs__msg__TaskAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pyrobosim_msgs__msg__TaskAction * data =
      (pyrobosim_msgs__msg__TaskAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pyrobosim_msgs__msg__TaskAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pyrobosim_msgs__msg__TaskAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pyrobosim_msgs__msg__TaskAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
