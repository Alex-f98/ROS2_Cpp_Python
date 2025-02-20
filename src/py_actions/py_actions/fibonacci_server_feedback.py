#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_ws_interface.action import Fibonacci
from rclpy.action import ActionServer
import time

class FibonacciServerNode(Node):
    def __init__(self):
        super().__init__('fibonacci_server_node')

        self.action_server_ = ActionServer(self, Fibonacci, 'fibonacci_action', execute_callback=self.execute_callback)

        self.get_logger().info('fibonacci action server has been started')
    

    def execute_callback(self, goal_handle):
        """
        int8 STATUS_UNKNOWN   =  0
        int8 STATUS_ACCEPTED  =  1
        int8 STATUS_EXECUTING =  2
        int8 STATUS_CANCELING =  3
        int8 STATUS_SUCCEEDED =  4
        int8 STATUS_CANCELED  =  5
        int8 STATUS_ABORTED   =  6
        action_msgs/msg/GoalInfo goal_info
        int8                     status


        Execute the action and return the result
            
        # Goal
        int64 order
        ---
        # Result
        int64[] result_sequence
        ---
        # Feedback
        int64[] partial_sequence

        """

        self.get_logger().info('executing the goal')

        # get goal request value
        order = goal_handle.request.order

        # initialize feedback
        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        # process Fibonacci 
        for i in range(1, order):

            feedback_msg.partial_sequence.append(feedback_msg.partial_sequence[i] + feedback_msg.partial_sequence[i-1])

            self.get_logger().info(f'Feedback: {feedback_msg.partial_sequence}')

            goal_handle.publish_feedback(feedback_msg)

            time.sleep(1.0)

        # set the goal state as succeeded
        goal_handle.succeed()

        # return the result
        result = Fibonacci.Result()
        result.result_sequence = feedback_msg.partial_sequence
        
        return result

    
def main(args=None):
    rclpy.init(args=args)
    node = FibonacciServerNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=='__main__':
    main()