// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_ws_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice
#include "ros2_ws_interface/srv/detail/grade_point_average__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_ws_interface/srv/detail/grade_point_average__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_ws_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
cdr_serialize(
  const ros2_ws_interface::srv::GradePointAverage_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: grade_1
  cdr << ros_message.grade_1;
  // Member: grade_2
  cdr << ros_message.grade_2;
  // Member: grade_3
  cdr << ros_message.grade_3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_ws_interface::srv::GradePointAverage_Request & ros_message)
{
  // Member: grade_1
  cdr >> ros_message.grade_1;

  // Member: grade_2
  cdr >> ros_message.grade_2;

  // Member: grade_3
  cdr >> ros_message.grade_3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
get_serialized_size(
  const ros2_ws_interface::srv::GradePointAverage_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: grade_1
  {
    size_t item_size = sizeof(ros_message.grade_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grade_2
  {
    size_t item_size = sizeof(ros_message.grade_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grade_3
  {
    size_t item_size = sizeof(ros_message.grade_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
max_serialized_size_GradePointAverage_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: grade_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: grade_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: grade_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_ws_interface::srv::GradePointAverage_Request;
    is_plain =
      (
      offsetof(DataType, grade_3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GradePointAverage_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_ws_interface::srv::GradePointAverage_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GradePointAverage_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_ws_interface::srv::GradePointAverage_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GradePointAverage_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_ws_interface::srv::GradePointAverage_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GradePointAverage_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GradePointAverage_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GradePointAverage_Request__callbacks = {
  "ros2_ws_interface::srv",
  "GradePointAverage_Request",
  _GradePointAverage_Request__cdr_serialize,
  _GradePointAverage_Request__cdr_deserialize,
  _GradePointAverage_Request__get_serialized_size,
  _GradePointAverage_Request__max_serialized_size
};

static rosidl_message_type_support_t _GradePointAverage_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GradePointAverage_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ros2_ws_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_ws_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_ws_interface::srv::GradePointAverage_Request>()
{
  return &ros2_ws_interface::srv::typesupport_fastrtps_cpp::_GradePointAverage_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_ws_interface, srv, GradePointAverage_Request)() {
  return &ros2_ws_interface::srv::typesupport_fastrtps_cpp::_GradePointAverage_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_ws_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
cdr_serialize(
  const ros2_ws_interface::srv::GradePointAverage_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gpa
  cdr << ros_message.gpa;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_ws_interface::srv::GradePointAverage_Response & ros_message)
{
  // Member: gpa
  cdr >> ros_message.gpa;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
get_serialized_size(
  const ros2_ws_interface::srv::GradePointAverage_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gpa
  {
    size_t item_size = sizeof(ros_message.gpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_ws_interface
max_serialized_size_GradePointAverage_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: gpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_ws_interface::srv::GradePointAverage_Response;
    is_plain =
      (
      offsetof(DataType, gpa) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GradePointAverage_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2_ws_interface::srv::GradePointAverage_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GradePointAverage_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_ws_interface::srv::GradePointAverage_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GradePointAverage_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_ws_interface::srv::GradePointAverage_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GradePointAverage_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GradePointAverage_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GradePointAverage_Response__callbacks = {
  "ros2_ws_interface::srv",
  "GradePointAverage_Response",
  _GradePointAverage_Response__cdr_serialize,
  _GradePointAverage_Response__cdr_deserialize,
  _GradePointAverage_Response__get_serialized_size,
  _GradePointAverage_Response__max_serialized_size
};

static rosidl_message_type_support_t _GradePointAverage_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GradePointAverage_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ros2_ws_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_ws_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_ws_interface::srv::GradePointAverage_Response>()
{
  return &ros2_ws_interface::srv::typesupport_fastrtps_cpp::_GradePointAverage_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_ws_interface, srv, GradePointAverage_Response)() {
  return &ros2_ws_interface::srv::typesupport_fastrtps_cpp::_GradePointAverage_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ros2_ws_interface
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GradePointAverage__callbacks = {
  "ros2_ws_interface::srv",
  "GradePointAverage",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_ws_interface, srv, GradePointAverage_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_ws_interface, srv, GradePointAverage_Response)(),
};

static rosidl_service_type_support_t _GradePointAverage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GradePointAverage__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ros2_ws_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_ws_interface
const rosidl_service_type_support_t *
get_service_type_support_handle<ros2_ws_interface::srv::GradePointAverage>()
{
  return &ros2_ws_interface::srv::typesupport_fastrtps_cpp::_GradePointAverage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_ws_interface, srv, GradePointAverage)() {
  return &ros2_ws_interface::srv::typesupport_fastrtps_cpp::_GradePointAverage__handle;
}

#ifdef __cplusplus
}
#endif
