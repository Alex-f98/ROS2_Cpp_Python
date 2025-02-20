#include "example_interfaces/srv/add_two_ints.hpp"
#include "rclcpp/rclcpp.hpp"

class SumClientNode : public rclcpp::Node {
public:
  SumClientNode() : Node("sum_client_node") {
    RCLCPP_INFO(this->get_logger(), "Service client C++ node has been created");

    // Parameters for AddTwoInts
    a_ = 4;
    b_ = 7;
    threads_.push_back(
        std::thread(std::bind(&SumClientNode::CallSumServer, this, a_, b_)));
  }
  void CallSumServer(int a, int b) {
    // create client
    client_ =
        this->create_client<example_interfaces::srv::AddTwoInts>("sum_service");
    while (!client_->wait_for_service(std::chrono::seconds(1))) {
      RCLCPP_WARN(this->get_logger(), "Waiting for the Server...");
    }

    // create request message
    auto request =
        std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    request->a = a;
    request->b = b;

    // future = client.call_async
    auto future = client_->async_send_request(request);
    try {
      auto response = future.get();
      RCLCPP_INFO(this->get_logger(), "%d + %d = %d", a, b, (int)response->sum);
    } catch (const std::exception &e) {
      RCLCPP_ERROR(this->get_logger(), "Service call failed");
    }
  }

private:
  rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client_;
  // La principal diferencia con la implementación de Python se encuentra en
  // Line14 y Line41, donde declaramos  std::vector threads_, un vector de hilos
  // al que agregamos todas las llamadas a funciones de CallSumServer, que se
  // procesarán de forma asincrónica en hilos separados.
  std::vector<std::thread> threads_;
  int a_, b_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<SumClientNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
