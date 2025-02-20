#usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class TalkerNode(Node):
    def __init__(self):
        self.counter = 0
        super().__init__('talker_node_py')

        # En nuestro caso, el perfil de QoS = 10 para el editor es el perfil de Qos predeterminado para 
        # la comunicación entre editor y suscriptor, y usaremos el mismo para la suscripción. 
        # Su valor define que la política de Historial se ha establecido en Mantener último, con un 
        # valor de profundidad de cola de 10, lo que significa que la política de historial solo 
        # almacena hasta 10 mensajes en caso de copia de seguridad.
        self.publisher_ = self.create_publisher(String, 'my_topic', 10)

        self.timer = self.create_timer(0.5, self.publish_callback)
        self.get_logger().info("Talker node has been started")
        self.get_logger().info("nodo Talker a sido iniciado")


    def publish_callback(self):
        msg = String()
        msg.data = f"Hello {self.counter}"
        self.publisher_.publish(msg)
        self.counter += 1


def main(args = None):
    rclpy.init(args = args)
    node = TalkerNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()