/*
 * gazebo_bridge.h
 *
 *  Created on: Mar 7, 2016
 *      Author: joao
 */

#ifndef INCLUDE_SOMA_UR5_GAZEBO_BRIDGE_H_
#define INCLUDE_SOMA_UR5_GAZEBO_BRIDGE_H_

#include <ros/ros.h>
#include <trajectory_msgs/JointTrajectory.h>
#include <sensor_msgs/JointState.h>
#include <std_msgs/Float64.h>
#include <ctime>

class GazeboBridge {

public:
	GazeboBridge();
	ros::NodeHandle *nh;    
    void run();

protected:
    void vel_callback(const trajectory_msgs::JointTrajectory::ConstPtr &msg);
    ros::Subscriber sub_comm;
    std::vector<ros::Publisher> pub_vels;
    ros::Time last;



};

#endif /* INCLUDE_SOMA_UR5_GAZEBO_BRIDGE_H_ */