// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef timer_interfaces_dummy__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef timer_interfaces_dummy__module = {
  PyModuleDef_HEAD_INIT,
  "_timer_interfaces_dummy_support",
  "_timer_interfaces_dummy_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  timer_interfaces_dummy__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
#include "timer_interfaces_dummy/srv/detail/start_timer__struct.h"
#include "timer_interfaces_dummy/srv/detail/start_timer__functions.h"

static void * timer_interfaces_dummy__srv__start_timer__request__create_ros_message(void)
{
  return timer_interfaces_dummy__srv__StartTimer_Request__create();
}

static void timer_interfaces_dummy__srv__start_timer__request__destroy_ros_message(void * raw_ros_message)
{
  timer_interfaces_dummy__srv__StartTimer_Request * ros_message = (timer_interfaces_dummy__srv__StartTimer_Request *)raw_ros_message;
  timer_interfaces_dummy__srv__StartTimer_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool timer_interfaces_dummy__srv__start_timer__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * timer_interfaces_dummy__srv__start_timer__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, StartTimer_Request);

int8_t
_register_msg_type__srv__start_timer__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__start_timer__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__start_timer__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__start_timer__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__start_timer__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, StartTimer_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__start_timer__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__functions.h"

static void * timer_interfaces_dummy__srv__start_timer__response__create_ros_message(void)
{
  return timer_interfaces_dummy__srv__StartTimer_Response__create();
}

static void timer_interfaces_dummy__srv__start_timer__response__destroy_ros_message(void * raw_ros_message)
{
  timer_interfaces_dummy__srv__StartTimer_Response * ros_message = (timer_interfaces_dummy__srv__StartTimer_Response *)raw_ros_message;
  timer_interfaces_dummy__srv__StartTimer_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool timer_interfaces_dummy__srv__start_timer__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * timer_interfaces_dummy__srv__start_timer__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, StartTimer_Response);

int8_t
_register_msg_type__srv__start_timer__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__start_timer__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__start_timer__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__start_timer__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__start_timer__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, StartTimer_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__start_timer__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__type_support.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/start_timer__functions.h"

static void * timer_interfaces_dummy__srv__start_timer__event__create_ros_message(void)
{
  return timer_interfaces_dummy__srv__StartTimer_Event__create();
}

static void timer_interfaces_dummy__srv__start_timer__event__destroy_ros_message(void * raw_ros_message)
{
  timer_interfaces_dummy__srv__StartTimer_Event * ros_message = (timer_interfaces_dummy__srv__StartTimer_Event *)raw_ros_message;
  timer_interfaces_dummy__srv__StartTimer_Event__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool timer_interfaces_dummy__srv__start_timer__event__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * timer_interfaces_dummy__srv__start_timer__event__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, StartTimer_Event);

int8_t
_register_msg_type__srv__start_timer__event(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__event__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__start_timer__event",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__event__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__start_timer__event",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__event__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__start_timer__event",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__start_timer__event__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__start_timer__event",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, StartTimer_Event),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__start_timer__event",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, StartTimer)();

int8_t
_register_srv_type__srv__start_timer(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, StartTimer)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__start_timer",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__type_support.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.h"
#include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"

static void * timer_interfaces_dummy__srv__is_timer_active__request__create_ros_message(void)
{
  return timer_interfaces_dummy__srv__IsTimerActive_Request__create();
}

static void timer_interfaces_dummy__srv__is_timer_active__request__destroy_ros_message(void * raw_ros_message)
{
  timer_interfaces_dummy__srv__IsTimerActive_Request * ros_message = (timer_interfaces_dummy__srv__IsTimerActive_Request *)raw_ros_message;
  timer_interfaces_dummy__srv__IsTimerActive_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool timer_interfaces_dummy__srv__is_timer_active__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * timer_interfaces_dummy__srv__is_timer_active__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, IsTimerActive_Request);

int8_t
_register_msg_type__srv__is_timer_active__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__is_timer_active__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__is_timer_active__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__is_timer_active__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__is_timer_active__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, IsTimerActive_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__is_timer_active__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__type_support.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"

static void * timer_interfaces_dummy__srv__is_timer_active__response__create_ros_message(void)
{
  return timer_interfaces_dummy__srv__IsTimerActive_Response__create();
}

static void timer_interfaces_dummy__srv__is_timer_active__response__destroy_ros_message(void * raw_ros_message)
{
  timer_interfaces_dummy__srv__IsTimerActive_Response * ros_message = (timer_interfaces_dummy__srv__IsTimerActive_Response *)raw_ros_message;
  timer_interfaces_dummy__srv__IsTimerActive_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool timer_interfaces_dummy__srv__is_timer_active__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * timer_interfaces_dummy__srv__is_timer_active__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, IsTimerActive_Response);

int8_t
_register_msg_type__srv__is_timer_active__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__is_timer_active__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__is_timer_active__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__is_timer_active__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__is_timer_active__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, IsTimerActive_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__is_timer_active__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__type_support.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__struct.h"
// already included above
// #include "timer_interfaces_dummy/srv/detail/is_timer_active__functions.h"

static void * timer_interfaces_dummy__srv__is_timer_active__event__create_ros_message(void)
{
  return timer_interfaces_dummy__srv__IsTimerActive_Event__create();
}

static void timer_interfaces_dummy__srv__is_timer_active__event__destroy_ros_message(void * raw_ros_message)
{
  timer_interfaces_dummy__srv__IsTimerActive_Event * ros_message = (timer_interfaces_dummy__srv__IsTimerActive_Event *)raw_ros_message;
  timer_interfaces_dummy__srv__IsTimerActive_Event__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool timer_interfaces_dummy__srv__is_timer_active__event__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * timer_interfaces_dummy__srv__is_timer_active__event__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, IsTimerActive_Event);

int8_t
_register_msg_type__srv__is_timer_active__event(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__event__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__is_timer_active__event",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__event__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__is_timer_active__event",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__event__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__is_timer_active__event",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&timer_interfaces_dummy__srv__is_timer_active__event__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__is_timer_active__event",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(timer_interfaces_dummy, srv, IsTimerActive_Event),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__is_timer_active__event",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, IsTimerActive)();

int8_t
_register_srv_type__srv__is_timer_active(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, timer_interfaces_dummy, srv, IsTimerActive)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__is_timer_active",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_timer_interfaces_dummy_s__rosidl_typesupport_introspection_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&timer_interfaces_dummy__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__srv__start_timer__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__start_timer__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__start_timer__event(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__start_timer(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__is_timer_active__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__is_timer_active__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__is_timer_active__event(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__is_timer_active(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
