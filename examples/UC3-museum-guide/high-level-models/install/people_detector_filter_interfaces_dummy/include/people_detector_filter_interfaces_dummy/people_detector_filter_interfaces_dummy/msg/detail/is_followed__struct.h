// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from people_detector_filter_interfaces_dummy:msg/IsFollowed.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__STRUCT_H_
#define PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IsFollowed in the package people_detector_filter_interfaces_dummy.
typedef struct people_detector_filter_interfaces_dummy__msg__IsFollowed
{
  bool is_followed;
} people_detector_filter_interfaces_dummy__msg__IsFollowed;

// Struct for a sequence of people_detector_filter_interfaces_dummy__msg__IsFollowed.
typedef struct people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence
{
  people_detector_filter_interfaces_dummy__msg__IsFollowed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} people_detector_filter_interfaces_dummy__msg__IsFollowed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEOPLE_DETECTOR_FILTER_INTERFACES_DUMMY__MSG__DETAIL__IS_FOLLOWED__STRUCT_H_
