#usr/bin/sev python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class ListenerNode(Node):
    def __init__(self):
        super().__init__("listener_node_py")
        self.get_logger().info("Listener node has been created !")
        self.get_logger().info("nodo Listener fue creado !")
        self.subscriber_ = self.create_subscription(String, 'my_topic', self.subscriber_callback, 10)

    def subscriber_callback(self, msg):
        data = msg.data
        self.get_logger().info(f'recived data: {data}')
        self.get_logger().info(f'recived msg: {msg}')


def main(args=None):
    rclpy.init(args=args)
    node = ListenerNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
    