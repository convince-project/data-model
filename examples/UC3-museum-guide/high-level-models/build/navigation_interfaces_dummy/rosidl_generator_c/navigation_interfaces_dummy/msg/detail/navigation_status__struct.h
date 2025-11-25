// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigation_interfaces_dummy:msg/NavigationStatus.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_H_
#define NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NAVIGATION_STATUS_IDLE'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_IDLE = 0
};

/// Constant 'NAVIGATION_STATUS_PREPARING_BEFORE_MOVE'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_PREPARING_BEFORE_MOVE = 1
};

/// Constant 'NAVIGATION_STATUS_MOVING'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_MOVING = 2
};

/// Constant 'NAVIGATION_STATUS_WAITING_OBSTACLE'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_WAITING_OBSTACLE = 3
};

/// Constant 'NAVIGATION_STATUS_GOAL_REACHED'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_GOAL_REACHED = 4
};

/// Constant 'NAVIGATION_STATUS_ABORTED'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_ABORTED = 5
};

/// Constant 'NAVIGATION_STATUS_FAILING'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_FAILING = 6
};

/// Constant 'NAVIGATION_STATUS_PAUSED'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_PAUSED = 7
};

/// Constant 'NAVIGATION_STATUS_THINKING'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_THINKING = 8
};

/// Constant 'NAVIGATION_STATUS_ERROR'.
enum
{
  navigation_interfaces_dummy__msg__NavigationStatus__NAVIGATION_STATUS_ERROR = 9
};

/// Struct defined in msg/NavigationStatus in the package navigation_interfaces_dummy.
typedef struct navigation_interfaces_dummy__msg__NavigationStatus
{
  int8_t status;
} navigation_interfaces_dummy__msg__NavigationStatus;

// Struct for a sequence of navigation_interfaces_dummy__msg__NavigationStatus.
typedef struct navigation_interfaces_dummy__msg__NavigationStatus__Sequence
{
  navigation_interfaces_dummy__msg__NavigationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation_interfaces_dummy__msg__NavigationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION_INTERFACES_DUMMY__MSG__DETAIL__NAVIGATION_STATUS__STRUCT_H_
