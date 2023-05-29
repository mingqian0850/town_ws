/*
    ros2运行该节点的入口函数
    编写ROS2节点的一般步骤
    1. 导入库文件
    2. 初始化客户端库
    3. 新建节点对象
    4. spin循环节点
    5. 关闭客户端库
*/
#include "rclcpp/rclcpp.hpp"

class SingleDogNode : public rclcpp::Node
{

public:
    SingleDogNode(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "Hello Everyone, i'm %s.", name.c_str());
    }
private:

};

int main(int argc,char ** argv)
{
    rclcpp::init(argc,argv);

    auto node = std::make_shared<SingleDogNode>("wang2");

    // RCLCPP_INFO(node->get_logger(), "Hellow everyone, i'm wang2");

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;

}

