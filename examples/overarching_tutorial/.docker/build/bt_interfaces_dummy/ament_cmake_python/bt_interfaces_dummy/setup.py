from setuptools import find_packages
from setuptools import setup

setup(
    name='bt_interfaces_dummy',
    version='0.0.0',
    packages=find_packages(
        include=('bt_interfaces_dummy', 'bt_interfaces_dummy.*')),
)
