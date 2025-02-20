// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_ws_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__BUILDER_HPP_
#define ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_ws_interface/srv/detail/grade_point_average__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_ws_interface
{

namespace srv
{

namespace builder
{

class Init_GradePointAverage_Request_grade_3
{
public:
  explicit Init_GradePointAverage_Request_grade_3(::ros2_ws_interface::srv::GradePointAverage_Request & msg)
  : msg_(msg)
  {}
  ::ros2_ws_interface::srv::GradePointAverage_Request grade_3(::ros2_ws_interface::srv::GradePointAverage_Request::_grade_3_type arg)
  {
    msg_.grade_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_ws_interface::srv::GradePointAverage_Request msg_;
};

class Init_GradePointAverage_Request_grade_2
{
public:
  explicit Init_GradePointAverage_Request_grade_2(::ros2_ws_interface::srv::GradePointAverage_Request & msg)
  : msg_(msg)
  {}
  Init_GradePointAverage_Request_grade_3 grade_2(::ros2_ws_interface::srv::GradePointAverage_Request::_grade_2_type arg)
  {
    msg_.grade_2 = std::move(arg);
    return Init_GradePointAverage_Request_grade_3(msg_);
  }

private:
  ::ros2_ws_interface::srv::GradePointAverage_Request msg_;
};

class Init_GradePointAverage_Request_grade_1
{
public:
  Init_GradePointAverage_Request_grade_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GradePointAverage_Request_grade_2 grade_1(::ros2_ws_interface::srv::GradePointAverage_Request::_grade_1_type arg)
  {
    msg_.grade_1 = std::move(arg);
    return Init_GradePointAverage_Request_grade_2(msg_);
  }

private:
  ::ros2_ws_interface::srv::GradePointAverage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_ws_interface::srv::GradePointAverage_Request>()
{
  return ros2_ws_interface::srv::builder::Init_GradePointAverage_Request_grade_1();
}

}  // namespace ros2_ws_interface


namespace ros2_ws_interface
{

namespace srv
{

namespace builder
{

class Init_GradePointAverage_Response_gpa
{
public:
  Init_GradePointAverage_Response_gpa()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_ws_interface::srv::GradePointAverage_Response gpa(::ros2_ws_interface::srv::GradePointAverage_Response::_gpa_type arg)
  {
    msg_.gpa = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_ws_interface::srv::GradePointAverage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_ws_interface::srv::GradePointAverage_Response>()
{
  return ros2_ws_interface::srv::builder::Init_GradePointAverage_Response_gpa();
}

}  // namespace ros2_ws_interface

#endif  // ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__BUILDER_HPP_
