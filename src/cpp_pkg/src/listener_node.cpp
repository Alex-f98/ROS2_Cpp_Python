#include "std_msgs/msg/string.hpp"
//#include "example_interfaces/msg/string.hpp"
#include "rclcpp/rclcpp.hpp"
using std::placeholders::_1;

class ListenerNode : public rclcpp::Node {
public:
  ListenerNode() : Node("listener_cpp") {
    RCLCPP_INFO(this->get_logger(), "Listener C++ node has been started");
    RCLCPP_INFO(this->get_logger(), "nodo Listener C++ fue iniciado");

    /**
    std::bind es una función que permite llamar por referencia a otra función
    (&TalkerNode), sin estar obligado a declarar todos los argumentos de la
    función. Estos pueden ser reemplazados por std::placeholder, como vemos en
    ListenerNode. También puede ser reemplazado por std::function
    **/

    subscriber_ = this->create_subscription<std_msgs::msg::String>(
        "my_topic", 10, std::bind(&ListenerNode::listener_callback, this, _1));
  }

private:
  void listener_callback(const std_msgs::msg::String &msg) const {
    RCLCPP_INFO(this->get_logger(), "The message is '%s': ", msg.data.c_str());
  }

  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv) {

  rclcpp::init(argc, argv);
  auto node = std::make_shared<ListenerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}