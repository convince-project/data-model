from setuptools import find_packages
from setuptools import setup

setup(
    name='scheduler_interfaces_dummy',
    version='0.0.0',
    packages=find_packages(
        include=('scheduler_interfaces_dummy', 'scheduler_interfaces_dummy.*')),
)
