// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros2_ws_interface:srv/GradePointAverage.idl
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
#include "ros2_ws_interface/srv/detail/grade_point_average__struct.h"
#include "ros2_ws_interface/srv/detail/grade_point_average__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_ws_interface__srv__grade_point_average__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("ros2_ws_interface.srv._grade_point_average.GradePointAverage_Request", full_classname_dest, 68) == 0);
  }
  ros2_ws_interface__srv__GradePointAverage_Request * ros_message = _ros_message;
  {  // grade_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "grade_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grade_1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // grade_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "grade_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grade_2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // grade_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "grade_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grade_3 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_ws_interface__srv__grade_point_average__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GradePointAverage_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_ws_interface.srv._grade_point_average");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GradePointAverage_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_ws_interface__srv__GradePointAverage_Request * ros_message = (ros2_ws_interface__srv__GradePointAverage_Request *)raw_ros_message;
  {  // grade_1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->grade_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grade_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grade_2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->grade_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grade_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grade_3
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->grade_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grade_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ros2_ws_interface/srv/detail/grade_point_average__struct.h"
// already included above
// #include "ros2_ws_interface/srv/detail/grade_point_average__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros2_ws_interface__srv__grade_point_average__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("ros2_ws_interface.srv._grade_point_average.GradePointAverage_Response", full_classname_dest, 69) == 0);
  }
  ros2_ws_interface__srv__GradePointAverage_Response * ros_message = _ros_message;
  {  // gpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gpa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros2_ws_interface__srv__grade_point_average__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GradePointAverage_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros2_ws_interface.srv._grade_point_average");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GradePointAverage_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros2_ws_interface__srv__GradePointAverage_Response * ros_message = (ros2_ws_interface__srv__GradePointAverage_Response *)raw_ros_message;
  {  // gpa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
