from launch import LaunchDescription
from launch_ros.actions import Node

"""
The executable argument need to be the name of the executable we picked for the nodes, i.e. 
the name we gave and installed the nodes as in CMakeList.txt for cpp nodes and  in setup.py for python nodes

If when launching the files we get an error of type:


“Caught exception in launch (see debug for traceback): executable ‘xxxx’ not found on the 
libexec directory ‘/home/username/my_ros2ws/install/packagename/lib/package_name”


just check the executable names and make sure you’re using the correct ones. 
If changes are made, make also sure to rebuild the packages in which you made the changes.
"""

# exactly this name!
def generate_launch_description():

    #instantiate a LaunchDescription object
    ld = LaunchDescription()

    topic_remap = ['', '']      # topic name, new topic name
    service_remap = ['', '']    # service name, new service name

    first_node = Node(

        package = '',     # package name

        executable = '',  # node's executable name

        name = '',        # if we want to remap the node name

        remappings = [topic_remap,
                      service_remap],     # if we want to remap topics or services names


        parameters = [{'parameter1': '',
                       'parameter2': ''}]  # declare parameters of the node <parameter_name> <default value> 
                                           # (if the value is not string, omit quotes
        )

    second_node = Node(
        ## same structure
    )

    # add as much nodes needed for your application

    # launch description
    ld.add_action(first_node)
    ld.add_action(second_node)

    return ld