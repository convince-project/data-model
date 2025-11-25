from setuptools import find_packages
from setuptools import setup

setup(
    name='timer_interfaces_dummy',
    version='0.0.0',
    packages=find_packages(
        include=('timer_interfaces_dummy', 'timer_interfaces_dummy.*')),
)
