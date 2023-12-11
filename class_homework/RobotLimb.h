#pragma once
#include<string>
#include<vector>
#include<iostream>

class RobotLimb
{
private:

	int limbs_count;
	int limb_freedom_digree;
	std::string limb_manipulator_type;
	std::vector<float> limb_position;
	std::vector<float> limb_orientation;


public:
	
	std::string limb_name = std::format("limb {}_{}", limb_manipulator_type, limbs_count);
	RobotLimb(int limb_freedom_digree = 3, std::string limb_manipulator_type = "hand") : 
		limb_freedom_digree(limb_freedom_digree), limb_manipulator_type(limb_manipulator_type)
	{
		limbs_count += 1;
	};

	void make_move(float, float, float);
	std::vector<float> get_position();
	std::vector<float> get_orientation();
	void set_position(std::vector<float>);
	void set_orientation(std::vector<float>);
	void set_connection_with_scaner(std::string);
};

