#include <cmake_practice2/TestLib.h>

#include <stdio.h>
#include <ros/ros.h>
#include <std_msgs/Int32.h>

std_msgs::Int32 ReturnInt(void){
	std_msgs::Int32 int_msg;
	int_msg.data = 10;
	return int_msg;
}
