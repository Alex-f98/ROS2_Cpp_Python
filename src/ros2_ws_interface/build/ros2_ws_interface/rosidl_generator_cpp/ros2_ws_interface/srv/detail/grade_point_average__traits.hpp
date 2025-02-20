// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_ws_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TRAITS_HPP_
#define ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_ws_interface/srv/detail/grade_point_average__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_ws_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GradePointAverage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: grade_1
  {
    out << "grade_1: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_1, out);
    out << ", ";
  }

  // member: grade_2
  {
    out << "grade_2: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_2, out);
    out << ", ";
  }

  // member: grade_3
  {
    out << "grade_3: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GradePointAverage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grade_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grade_1: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_1, out);
    out << "\n";
  }

  // member: grade_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grade_2: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_2, out);
    out << "\n";
  }

  // member: grade_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grade_3: ";
    rosidl_generator_traits::value_to_yaml(msg.grade_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GradePointAverage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros2_ws_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_ws_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_ws_interface::srv::GradePointAverage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_ws_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_ws_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_ws_interface::srv::GradePointAverage_Request & msg)
{
  return ros2_ws_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_ws_interface::srv::GradePointAverage_Request>()
{
  return "ros2_ws_interface::srv::GradePointAverage_Request";
}

template<>
inline const char * name<ros2_ws_interface::srv::GradePointAverage_Request>()
{
  return "ros2_ws_interface/srv/GradePointAverage_Request";
}

template<>
struct has_fixed_size<ros2_ws_interface::srv::GradePointAverage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_ws_interface::srv::GradePointAverage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_ws_interface::srv::GradePointAverage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros2_ws_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GradePointAverage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: gpa
  {
    out << "gpa: ";
    rosidl_generator_traits::value_to_yaml(msg.gpa, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GradePointAverage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpa: ";
    rosidl_generator_traits::value_to_yaml(msg.gpa, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GradePointAverage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros2_ws_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_ws_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_ws_interface::srv::GradePointAverage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_ws_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_ws_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros2_ws_interface::srv::GradePointAverage_Response & msg)
{
  return ros2_ws_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_ws_interface::srv::GradePointAverage_Response>()
{
  return "ros2_ws_interface::srv::GradePointAverage_Response";
}

template<>
inline const char * name<ros2_ws_interface::srv::GradePointAverage_Response>()
{
  return "ros2_ws_interface/srv/GradePointAverage_Response";
}

template<>
struct has_fixed_size<ros2_ws_interface::srv::GradePointAverage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_ws_interface::srv::GradePointAverage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_ws_interface::srv::GradePointAverage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_ws_interface::srv::GradePointAverage>()
{
  return "ros2_ws_interface::srv::GradePointAverage";
}

template<>
inline const char * name<ros2_ws_interface::srv::GradePointAverage>()
{
  return "ros2_ws_interface/srv/GradePointAverage";
}

template<>
struct has_fixed_size<ros2_ws_interface::srv::GradePointAverage>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_ws_interface::srv::GradePointAverage_Request>::value &&
    has_fixed_size<ros2_ws_interface::srv::GradePointAverage_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_ws_interface::srv::GradePointAverage>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_ws_interface::srv::GradePointAverage_Request>::value &&
    has_bounded_size<ros2_ws_interface::srv::GradePointAverage_Response>::value
  >
{
};

template<>
struct is_service<ros2_ws_interface::srv::GradePointAverage>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_ws_interface::srv::GradePointAverage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_ws_interface::srv::GradePointAverage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__TRAITS_HPP_
