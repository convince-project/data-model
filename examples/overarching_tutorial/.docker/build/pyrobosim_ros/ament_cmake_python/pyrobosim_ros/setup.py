from setuptools import find_packages
from setuptools import setup

setup(
    name='pyrobosim_ros',
    version='4.3.3',
    packages=find_packages(
        include=('pyrobosim_ros', 'pyrobosim_ros.*')),
)
