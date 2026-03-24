#pragma once

#include <behaviortree_ros2/bt_action_node.hpp>
#include <pyrobosim_msgs/action/execute_task_action.hpp>
#include "execute_task_node.hpp"

namespace BT
{

class NavigateAction : public ExecuteTaskNode
{
public:
  NavigateAction(const std::string& name, const NodeConfig& conf, const RosNodeParams& params)
    : ExecuteTaskNode(name, conf, params)
  {}

  // specify the ports offered by this node
  static BT::PortsList providedPorts()
  {
    return ExecuteTaskNode::appendProvidedPorts(
        { BT::InputPort<std::string>("target"), BT::InputPort<std::string>("location") });
  }

  // Implement the method that sends the goal
  bool setGoal(TaskAction& action) override
  {
    std::string location;
    if((!getInput("target", location) || location.empty()) &&
       (!getInput("location", location) || location.empty()))
    {
      RCLCPP_ERROR(logger(), "[%s] missing required input [target] or [location]", name().c_str());
      return false;
    }

    // Accept quoted literals from BT XML, e.g. 'fridge' or "fridge".
    if(location.size() >= 2)
    {
      const char first = location.front();
      const char last = location.back();
      if((first == '\'' && last == '\'') || (first == '"' && last == '"'))
      {
        location = location.substr(1, location.size() - 2);
      }
    }

    // prepare the goal message
    action.type = "navigate";
    action.target_location = location;
    return true;
  }
};

}  // namespace BT
