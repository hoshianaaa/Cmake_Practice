#include <ros/ros.h>
#include <cmake_practice2/TestLib.h>
#include <std_msgs/Int32.h>

int main(int argc, char **argv){
	ros::init(argc, argv, "talker");
	ros::NodeHandle n;
	std_msgs::Int32 int_msg;
	int_msg = ReturnInt();
	std::cout << int_msg.data << std::endl;
	return 0;
}
