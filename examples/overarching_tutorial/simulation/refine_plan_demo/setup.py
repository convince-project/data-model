from setuptools import find_packages, setup
from glob import glob
import os

package_name = "refine_plan_demo"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        (
            os.path.join("share", package_name, "launch"),
            glob(os.path.join("launch", "*launch.[pxy][yma]*")),
        ),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="charlie",
    maintainer_email="me@charliestreet.net",
    description="A REFINE-PLAN demo in Pyrobosim for the CONVINCE project.",
    license="Apache-2.0",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": ["policy_executor = refine_plan_demo.policy_executor:main"],
    },
)
