## 8 – Use the Custom .msg Interface in a ROS2 Node

To utilize our custom interface, we simply import it into our nodes and employ it as if it were a standard interface.

C++ import syntax:

#include “ros2_fndm_interface/msg/student.hpp”

Python import syntax:

from ros2_fndm_interface.msg import Student

Note:

It is good practice to dedicate the interface package we just created for interfaces purpose only. Do not use it to create nodes.