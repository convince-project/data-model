from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, EmitEvent, RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.events import Shutdown
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    tree_arg = DeclareLaunchArgument(
        "tree",
        default_value="src/roaml/policy/bt_tree.xml",
        description="Behavior tree file path passed to bt_executor",
    )

    default_object_id_arg = DeclareLaunchArgument(
        "default_object_id",
        default_value="butter0",
        description="Fallback object id used by bt_executor when BT ports do not provide one",
    )

    simulator = Node(
        package="tutorial_sim",
        executable="run",
        name="tutorial_sim",
        output="screen",
        emulate_tty=True,
    )

    translator = Node(
        package="tutorial_sim",
        executable="translate_component",
        name="translate_component",
        output="screen",
        emulate_tty=True,
    )

    place_object_skill = Node(
        package="place_object_skill",
        executable="place_object_skill",
        name="place_object_skill",
        output="screen",
        emulate_tty=True,
    )

    bt_executor = Node(
        package="bt_executor",
        executable="btcpp_executor",
        name="btcpp_executor",
        output="screen",
        emulate_tty=True,
        parameters=[
            {
                "tree": LaunchConfiguration("tree"),
                "default_object_id": LaunchConfiguration("default_object_id"),
            }
        ],
    )

    shutdown_on_bt_exit = RegisterEventHandler(
        OnProcessExit(
            target_action=bt_executor,
            on_exit=[EmitEvent(event=Shutdown(reason="btcpp_executor finished"))],
        )
    )

    return LaunchDescription(
        [
            tree_arg,
            default_object_id_arg,
            simulator,
            translator,
            place_object_skill,
            bt_executor,
            shutdown_on_bt_exit,
        ]
    )