from setuptools import find_packages
from setuptools import setup

setup(
    name='notify_user_interfaces_dummy',
    version='0.0.0',
    packages=find_packages(
        include=('notify_user_interfaces_dummy', 'notify_user_interfaces_dummy.*')),
)
