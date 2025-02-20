#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_ws_interface.action import Fibonacci
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle

import time

class FibonacciClientNode(Node):
    def __init__(self):
        super().__init__('fibonacci_client_node')

        self.action_client_ = ActionClient(self, Fibonacci, 'fibonacci_action')

        # get goal parameter value
        self.declare_parameter('order', 2) # default 2
        self.order = self.get_parameter('order').value

        self.get_logger().info('Fibonacci action client has been started')

  
    def send_goal(self, order):
        """the action client sends the goal"""

        # wait for the server
        timeout_ = 1.0
        self.action_client_.wait_for_server(timeout_sec=timeout_)

        # create a goal
        goal = Fibonacci.Goal()
        goal.order = order

        # send the goal
        self.get_logger().info(f'sending the goal: {order}')

        # send_goal_async. It returns future. when future is returned, we can add a callback
        self.action_client_.send_goal_async(goal).add_done_callback(self.goal_response_callback)
        # Note: always use send_goal_async and not send_goal to ensure asynchronous communication between ActionServer and ActionClient


    def goal_response_callback(self, future):
        """checks if the goal request was accepted"""

        self.goal_handle_ : ClientGoalHandle = future.result()

        # checks if the goal has been accepted
        if not self.goal_handle_.accepted:
            self.get_logger().info('Goal rejected ')
            return 
        
        # if the goal has been accepted we can request for the result
        self.get_logger().info('Goal accepted')

        self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback) 

    
    def goal_result_callback(self, future):
        """gets the result """
        result = future.result().result
        fibonacci_sequence = result.result_sequence

        self.get_logger().info(f'result: {fibonacci_sequence}')



def main(args=None):
    rclpy.init(args=args)
    node = FibonacciClientNode()
    
    # send goal
    node.send_goal(node.order)

    rclpy.spin(node)

    try:
        rclpy.shutdown()
    except:
        pass

if __name__=='__main__':
    main()
