import rclpy

from rclpy.node import Node

class WriterNode(Node):
    
    def __init__(self, name):
        super().__init__(name)
        self.get_logger().info("Hello everyone, i'm writer li4")

def main(args=None):

    """
    ros2运行该节点的入口函数
    编写ROS2节点的一般步骤
    1. 导入库文件
    2. 初始化客户端库
    3. 新建节点对象
    4. spin循环节点
    5. 关闭客户端库
    """

    rclpy.init(args=args)
    node = WriterNode("li4")
    # node.get_logger().info("Hello, I'm Li4")
    rclpy.spin(node)
    rclpy.shutdown() 