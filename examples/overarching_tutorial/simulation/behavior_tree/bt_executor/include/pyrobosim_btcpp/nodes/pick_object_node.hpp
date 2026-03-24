#pragma once

#include <behaviortree_ros2/bt_action_node.hpp>
#include <pyrobosim_msgs/action/execute_task_action.hpp>
#include "execute_task_node.hpp"

namespace BT
{

class PickObject : public ExecuteTaskNode
{
public:
  PickObject(const std::string& name, const NodeConfig& conf, const RosNodeParams& params)
    : ExecuteTaskNode(name, conf, params)
  {}

  // specify the ports offered by this node
  static BT::PortsList providedPorts()
  {
    return ExecuteTaskNode::appendProvidedPorts(
        { BT::InputPort<std::string>("object"), BT::InputPort<std::string>("object_id") });
  }

  // Implement the method that sends the goal
  bool setGoal(TaskAction& action) override
  {
    std::string object;
    if((!getInput("object", object) || object.empty()) &&
       (!getInput("object_id", object) || object.empty()))
    {
      if(!config().blackboard || !config().blackboard->get("default_object_id", object) ||
         object.empty())
      {
        object = "butter0";
      }
      RCLCPP_DEBUG(logger(), "[%s] missing [object]/[object_id], using fallback object '%s'",
                   name().c_str(), object.c_str());
    }
    // prepare the goal message
    action.type = "pick";
    action.object = object;
    return true;
  }
};

}  // namespace BT
