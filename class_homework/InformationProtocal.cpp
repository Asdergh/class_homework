#include "InformationProtocal.h"

void InformationProtocal::send_info_scaner_to_limb()
{
	std::vector<float> position_vector(3);
	std::vector<float> orientation_vector(3);

	position_vector = get_curent_position_command();
	orientation_vector = get_curent_orientation_command();
	
	set_position(position_vector);
	set_orientation(orientation_vector);

}

void InformationProtocal::show_info_scaners()
{
	std::vector<float> position_vector{ get_curent_position_command() };
	std::vector<float> orientation_vector{ get_curent_orientation_command() };

	std::cout << " position vector\t[X: " << position_vector[0] << "Y: " << position_vector[1] << "Z: " << position_vector[2] << "]\n";
	std::cout << "orientation vector\t[theta: " << orientation_vector[0] << "sigma: " << orientation_vector[1] << "gamma: " << orientation_vector[2] << "]\n";
}