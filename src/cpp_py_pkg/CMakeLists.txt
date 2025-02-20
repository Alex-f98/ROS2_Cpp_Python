cmake_minimum_required(VERSION 3.8)
project(cpp_py_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)

set(dependencies rclcpp rclpy)

####################################################################
########################### C++ ####################################
####################################################################
# Include Cpp "include" directory
include_directories(include)

add_executable(simple_node_cpp src/simple_node.cpp)
ament_target_dependencies(simple_node_cpp ${dependencies})

install(TARGETS
  simple_node_cpp
  DESTINATION lib/${PROJECT_NAME})

####################################################################
############################ py ####################################
####################################################################
ament_python_install_package(${PROJECT_NAME})

#install python executables
install(PROGRAMS
  scripts/simple_node.py
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(${dependencies})
ament_package()
