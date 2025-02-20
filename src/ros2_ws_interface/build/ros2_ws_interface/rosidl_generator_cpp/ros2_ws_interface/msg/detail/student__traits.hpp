// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_ws_interface:msg/Student.idl
// generated code does not contain a copyright notice

#ifndef ROS2_WS_INTERFACE__MSG__DETAIL__STUDENT__TRAITS_HPP_
#define ROS2_WS_INTERFACE__MSG__DETAIL__STUDENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_ws_interface/msg/detail/student__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_ws_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Student & msg,
  std::ostream & out)
{
  out << "{";
  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << ", ";
  }

  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Student & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }

  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Student & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_ws_interface

namespace rosidl_generator_traits
{

[[deprecated("use ros2_ws_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_ws_interface::msg::Student & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_ws_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_ws_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_ws_interface::msg::Student & msg)
{
  return ros2_ws_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_ws_interface::msg::Student>()
{
  return "ros2_ws_interface::msg::Student";
}

template<>
inline const char * name<ros2_ws_interface::msg::Student>()
{
  return "ros2_ws_interface/msg/Student";
}

template<>
struct has_fixed_size<ros2_ws_interface::msg::Student>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_ws_interface::msg::Student>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_ws_interface::msg::Student>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_WS_INTERFACE__MSG__DETAIL__STUDENT__TRAITS_HPP_
