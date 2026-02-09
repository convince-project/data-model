from setuptools import find_packages
from setuptools import setup

setup(
    name='overarching_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('overarching_msgs', 'overarching_msgs.*')),
)
