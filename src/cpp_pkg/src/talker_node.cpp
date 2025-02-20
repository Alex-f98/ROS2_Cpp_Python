//#include "example_interfaces/msg/string.hpp"
#include "rclcpp/publisher.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/detail/string__struct.hpp"
#include "std_msgs/msg/string.hpp"

/**
Estilo K & R(Kernighan &Ritchie)
**/

class TalkerNode : public rclcpp::Node {

public:
  TalkerNode() : Node("Talker_cpp"), count_(0) {
    RCLCPP_INFO(this->get_logger(), "Talker c++ node has been started");
    RCLCPP_INFO(this->get_logger(), "Nodo Talker C++ fue iniciado");

    publish_ = this->create_publisher<std_msgs::msg::String>("my_topic", 10);

    /**
       std::bind es una función que permite llamar por referencia a otra función
       (&TalkerNode), sin estar obligado a declarar todos los argumentos de la
       función. Estos pueden ser reemplazados por std::placeholder, como veremos
       en ListenerNode. También puede ser reemplazado por std::function
    **/

    timer_ =
        this->create_wall_timer(std::chrono::milliseconds(500),
                                std::bind(&TalkerNode::talker_callback, this));
  }

private:
  void talker_callback() {
    auto msg = std_msgs::msg::String();
    msg.data = std::string("Hello") + std::to_string(count_++);
    publish_->publish(msg);
  }

  rclcpp::TimerBase::SharedPtr timer_;
  // rclcpp::Publisher<std_msgs::msg::String>::SharePtr publish_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publish_;
  size_t count_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TalkerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}