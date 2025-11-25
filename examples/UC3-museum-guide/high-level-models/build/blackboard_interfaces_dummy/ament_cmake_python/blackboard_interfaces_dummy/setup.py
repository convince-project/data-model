from setuptools import find_packages
from setuptools import setup

setup(
    name='blackboard_interfaces_dummy',
    version='0.0.0',
    packages=find_packages(
        include=('blackboard_interfaces_dummy', 'blackboard_interfaces_dummy.*')),
)
