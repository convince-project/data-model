from setuptools import find_packages
from setuptools import setup

setup(
    name='people_detector_filter_interfaces_dummy',
    version='0.0.0',
    packages=find_packages(
        include=('people_detector_filter_interfaces_dummy', 'people_detector_filter_interfaces_dummy.*')),
)
