#pragma once

#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>

namespace BT
{

class DecoratorGetNextLocation : public SyncActionNode
{
public:
  DecoratorGetNextLocation(const std::string& name, const NodeConfig& config,
                           rclcpp::Logger logger)
    : SyncActionNode(name, config), logger_(logger)
  {}

  static PortsList providedPorts()
  {
    return { OutputPort<std::string>("location", "The next location to visit.") };
  }

  NodeStatus tick() override
  {
    std::string next_location;
    if(!config().blackboard->get("@last_visited_location", next_location))
    {
      RCLCPP_ERROR(logger_, "Last visited location not available yet");
      return NodeStatus::FAILURE;
    }

    setOutput("location", next_location);
    RCLCPP_INFO(logger_, "Next location: %s", next_location.c_str());
    return NodeStatus::SUCCESS;
  }

private:
  rclcpp::Logger logger_;
};

}  // namespace BT
