#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

"""
ros2  service call  /sum_service  example_interfaces/srv/AddTwoInts  "{'a': 4, 'b': 7}"

ros2 run <pkg_name> <node_name> –ros-args -p <param1_name>:=<value> -p <param2_name>:=<value>

"""

class SumClientNode(Node):
    def __init__(self):
        super().__init__('sum_client_node')
        self.get_logger().info('Sum Client Python node has been created')

        #ROS2 Part 6 -----------------------------------
        #a_ = 6
        #b_ = 7

        # declare parameters
        self.declare_parameter('a', 0) #default
        self.declare_parameter('b', 0) #default
        
        #get parameters
        a_ = self.get_parameter('a').get_parameter_value().integer_value
        b_ = self.get_parameter('b').get_parameter_value().integer_value
        
        self.get_logger().info(f'El valor de a es: {a_}')
        self.get_logger().info(f'El valor de b es: {b_}')
        #-----------------------------------
        
        self.call_sum_server(a_, b_)
    
    def call_sum_server(self, a, b):
        #client = self.create_client(<ServiceType>, <ServiceName>)
        client = self.create_client(AddTwoInts, 'sum_service')
        #Luego de crear el cliente, debemos esperar hasta que el Servicio esté activo, es decir, el nodo Servidor esté ejecutándose.
        while not client.wait_for_service(1.0):
            self.get_logger().info('Waiting for the Server...')

        # create request
        request = AddTwoInts.Request()
        request.a = a
        request.b = b


        #send request asynchronously
        future = client.call_async(request)

        # La llamada asincrónica devolverá un objeto de la clase rclpy.task.Future, que indicará si la llamada 
        # y la respuesta han finalizado o no, a través de la función add_done_callback en la siguiente línea.
        future.add_done_callback(partial(self.sum_service_callback, a=a, b=b))

    def sum_service_callback(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info(f'{a} + {b} = {response.sum}')
        except Exception as e:
            self.get_logger().info(f'Service call failed {e}')

def main(args=None):
    rclpy.init(args=args)
    node = SumClientNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=='__main__':
    main()