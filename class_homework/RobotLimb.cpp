#include "RobotLimb.h"
#include<math.h>
#

void RobotLimb::make_move(float coordinate_x, float coordinate_y, float coordinate_z)
{
	limb_position.at(0) = coordinate_x;
	limb_position.at(1) = coordinate_y;
	limb_position.at(2) = coordinate_z;
}

std::vector<float> RobotLimb::get_position() {
	return limb_position;
}

std::vector<float> RobotLimb::get_orientation() {
	return limb_orientation;
}

void RobotLimb::set_position(std::vector<float> position_vector)
{
	limb_position.at(0) = position_vector.at(0);
	limb_position.at(1) = position_vector.at(1);
	limb_position.at(2) = position_vector.at(2);
}

void RobotLimb::set_orientation(std::vector<float> angles_vector)
{
	limb_orientation.at(0) = angles_vector.at(0);
	limb_orientation.at(1) = angles_vector.at(1);
	limb_orientation.at(2) = angles_vector.at(2);

}

void RobotLimb::set_connection_with_scaner(std::string scaner_name)
{
	std::cout << "\n[Limb : " << scaner_name << "connected with" << scaner_name << "True]\n";
}