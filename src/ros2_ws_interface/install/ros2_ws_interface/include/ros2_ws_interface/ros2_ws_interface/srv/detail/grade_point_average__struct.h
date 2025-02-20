// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_ws_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__STRUCT_H_
#define ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GradePointAverage in the package ros2_ws_interface.
typedef struct ros2_ws_interface__srv__GradePointAverage_Request
{
  int64_t grade_1;
  int64_t grade_2;
  int64_t grade_3;
} ros2_ws_interface__srv__GradePointAverage_Request;

// Struct for a sequence of ros2_ws_interface__srv__GradePointAverage_Request.
typedef struct ros2_ws_interface__srv__GradePointAverage_Request__Sequence
{
  ros2_ws_interface__srv__GradePointAverage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_ws_interface__srv__GradePointAverage_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GradePointAverage in the package ros2_ws_interface.
typedef struct ros2_ws_interface__srv__GradePointAverage_Response
{
  double gpa;
} ros2_ws_interface__srv__GradePointAverage_Response;

// Struct for a sequence of ros2_ws_interface__srv__GradePointAverage_Response.
typedef struct ros2_ws_interface__srv__GradePointAverage_Response__Sequence
{
  ros2_ws_interface__srv__GradePointAverage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_ws_interface__srv__GradePointAverage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__STRUCT_H_
