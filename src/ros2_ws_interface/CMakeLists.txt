cmake_minimum_required(VERSION 3.8)
project(ros2_ws_interface)

# Configuración del compilador
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Encuentra las dependencias necesarias
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Genera las interfaces personalizadas
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Student.msg"
  "srv/GradePointAverage.srv"
  "action/Fibonacci.action"
)

# Exporta las dependencias necesarias para otros paquetes que utilicen esta interfaz
ament_export_dependencies(rosidl_default_runtime)

# Instrucción para declarar este paquete
ament_package()
