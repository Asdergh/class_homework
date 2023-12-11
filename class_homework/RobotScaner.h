#pragma once
#include<string>
#include<vector>
#include<math.h>
#include<iostream>
#include<format>

class RobotScaner
{
private:

	int robot_scaners_count;
	std::string robot_scaner_type;
	std::string robot_scaner_msg;
	int max_lidar_data = 100;
 
public:

	std::string scaner_name = std::format("scaner {}_{}", robot_scaner_type, robot_scaners_count);
	RobotScaner(std::string robot_scaner_type = "camera") :
		robot_scaners_count(robot_scaners_count), robot_scaner_type(robot_scaner_type)
	{
		robot_scaners_count += 1;
	}

	std::vector<std::string> generate_random_msg(std::string);
	std::vector<float> get_curent_position_command();
	std::vector<float> get_curent_orientation_command();
	void set_connection_with_limb(std::string);

};

