from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_ws_interface',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_ws_interface', 'ros2_ws_interface.*')),
)
