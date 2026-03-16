// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from pyrobosim_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "pyrobosim_msgs/msg/detail/world_state__struct.h"
#include "pyrobosim_msgs/msg/detail/world_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "pyrobosim_msgs/msg/detail/hallway_state__functions.h"
#include "pyrobosim_msgs/msg/detail/location_state__functions.h"
#include "pyrobosim_msgs/msg/detail/object_state__functions.h"
#include "pyrobosim_msgs/msg/detail/robot_state__functions.h"
// end nested array functions include
bool pyrobosim_msgs__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pyrobosim_msgs__msg__robot_state__convert_to_py(void * raw_ros_message);
bool pyrobosim_msgs__msg__location_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pyrobosim_msgs__msg__location_state__convert_to_py(void * raw_ros_message);
bool pyrobosim_msgs__msg__hallway_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pyrobosim_msgs__msg__hallway_state__convert_to_py(void * raw_ros_message);
bool pyrobosim_msgs__msg__object_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * pyrobosim_msgs__msg__object_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool pyrobosim_msgs__msg__world_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("pyrobosim_msgs.msg._world_state.WorldState", full_classname_dest, 42) == 0);
  }
  pyrobosim_msgs__msg__WorldState * ros_message = _ros_message;
  {  // robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robots'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!pyrobosim_msgs__msg__RobotState__Sequence__init(&(ros_message->robots), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pyrobosim_msgs__msg__RobotState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pyrobosim_msgs__msg__RobotState * dest = ros_message->robots.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pyrobosim_msgs__msg__robot_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // locations
    PyObject * field = PyObject_GetAttrString(_pymsg, "locations");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'locations'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!pyrobosim_msgs__msg__LocationState__Sequence__init(&(ros_message->locations), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pyrobosim_msgs__msg__LocationState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pyrobosim_msgs__msg__LocationState * dest = ros_message->locations.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pyrobosim_msgs__msg__location_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // hallways
    PyObject * field = PyObject_GetAttrString(_pymsg, "hallways");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'hallways'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!pyrobosim_msgs__msg__HallwayState__Sequence__init(&(ros_message->hallways), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pyrobosim_msgs__msg__HallwayState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pyrobosim_msgs__msg__HallwayState * dest = ros_message->hallways.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pyrobosim_msgs__msg__hallway_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!pyrobosim_msgs__msg__ObjectState__Sequence__init(&(ros_message->objects), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create pyrobosim_msgs__msg__ObjectState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    pyrobosim_msgs__msg__ObjectState * dest = ros_message->objects.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!pyrobosim_msgs__msg__object_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * pyrobosim_msgs__msg__world_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WorldState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("pyrobosim_msgs.msg._world_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WorldState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  pyrobosim_msgs__msg__WorldState * ros_message = (pyrobosim_msgs__msg__WorldState *)raw_ros_message;
  {  // robots
    PyObject * field = NULL;
    size_t size = ros_message->robots.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pyrobosim_msgs__msg__RobotState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->robots.data[i]);
      PyObject * pyitem = pyrobosim_msgs__msg__robot_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // locations
    PyObject * field = NULL;
    size_t size = ros_message->locations.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pyrobosim_msgs__msg__LocationState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->locations.data[i]);
      PyObject * pyitem = pyrobosim_msgs__msg__location_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "locations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hallways
    PyObject * field = NULL;
    size_t size = ros_message->hallways.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pyrobosim_msgs__msg__HallwayState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->hallways.data[i]);
      PyObject * pyitem = pyrobosim_msgs__msg__hallway_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "hallways", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects
    PyObject * field = NULL;
    size_t size = ros_message->objects.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    pyrobosim_msgs__msg__ObjectState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects.data[i]);
      PyObject * pyitem = pyrobosim_msgs__msg__object_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
