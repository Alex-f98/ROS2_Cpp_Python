// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_ws_interface:srv/GradePointAverage.idl
// generated code does not contain a copyright notice

#ifndef ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__STRUCT_HPP_
#define ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Request __declspec(deprecated)
#endif

namespace ros2_ws_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GradePointAverage_Request_
{
  using Type = GradePointAverage_Request_<ContainerAllocator>;

  explicit GradePointAverage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grade_1 = 0ll;
      this->grade_2 = 0ll;
      this->grade_3 = 0ll;
    }
  }

  explicit GradePointAverage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->grade_1 = 0ll;
      this->grade_2 = 0ll;
      this->grade_3 = 0ll;
    }
  }

  // field types and members
  using _grade_1_type =
    int64_t;
  _grade_1_type grade_1;
  using _grade_2_type =
    int64_t;
  _grade_2_type grade_2;
  using _grade_3_type =
    int64_t;
  _grade_3_type grade_3;

  // setters for named parameter idiom
  Type & set__grade_1(
    const int64_t & _arg)
  {
    this->grade_1 = _arg;
    return *this;
  }
  Type & set__grade_2(
    const int64_t & _arg)
  {
    this->grade_2 = _arg;
    return *this;
  }
  Type & set__grade_3(
    const int64_t & _arg)
  {
    this->grade_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Request
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Request
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GradePointAverage_Request_ & other) const
  {
    if (this->grade_1 != other.grade_1) {
      return false;
    }
    if (this->grade_2 != other.grade_2) {
      return false;
    }
    if (this->grade_3 != other.grade_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const GradePointAverage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GradePointAverage_Request_

// alias to use template instance with default allocator
using GradePointAverage_Request =
  ros2_ws_interface::srv::GradePointAverage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_ws_interface


#ifndef _WIN32
# define DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Response __declspec(deprecated)
#endif

namespace ros2_ws_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GradePointAverage_Response_
{
  using Type = GradePointAverage_Response_<ContainerAllocator>;

  explicit GradePointAverage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpa = 0.0;
    }
  }

  explicit GradePointAverage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpa = 0.0;
    }
  }

  // field types and members
  using _gpa_type =
    double;
  _gpa_type gpa;

  // setters for named parameter idiom
  Type & set__gpa(
    const double & _arg)
  {
    this->gpa = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Response
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_ws_interface__srv__GradePointAverage_Response
    std::shared_ptr<ros2_ws_interface::srv::GradePointAverage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GradePointAverage_Response_ & other) const
  {
    if (this->gpa != other.gpa) {
      return false;
    }
    return true;
  }
  bool operator!=(const GradePointAverage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GradePointAverage_Response_

// alias to use template instance with default allocator
using GradePointAverage_Response =
  ros2_ws_interface::srv::GradePointAverage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_ws_interface

namespace ros2_ws_interface
{

namespace srv
{

struct GradePointAverage
{
  using Request = ros2_ws_interface::srv::GradePointAverage_Request;
  using Response = ros2_ws_interface::srv::GradePointAverage_Response;
};

}  // namespace srv

}  // namespace ros2_ws_interface

#endif  // ROS2_WS_INTERFACE__SRV__DETAIL__GRADE_POINT_AVERAGE__STRUCT_HPP_
