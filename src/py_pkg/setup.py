from setuptools import find_packages, setup

package_name = 'py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'simple_node_py = py_pkg.simple_node:main',
        'talker_py      = py_pkg.talker:main',
        'listener_py    = py_pkg.listener:main',
        'sum_client_py  = py_pkg.sum_client:main',
        'sum_server_py  = py_pkg.sum_server:main',
        ],
    },
)
