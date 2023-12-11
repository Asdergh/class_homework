#include "RobotScaner.h"

std::vector<std::string> RobotScaner::generate_random_msg(std::string msg_type)
{
	if (robot_scaner_type == "lidar")
	{
		std::vector<float> point_vector;
		std::vector<std::vector<float>> lidar_points_cores(max_lidar_data, point_vector);
		std::vector<std::string> lidar_msg_string_tensor(max_lidar_data);

		for (int iter_i{ 0 }; iter_i < max_lidar_data; iter_i ++)
		{
			lidar_points_cores[iter_i][0] = rand() % 100;
			lidar_points_cores[iter_i][1] = rand() % 100;
			lidar_points_cores[iter_i][2] = rand() % 100;
		}
		for (int iter_i{ 0 }; iter_i < max_lidar_data; iter_i++)
		{
			std::cout << "\n[POINT VECTOR]:[" << "X:\t" << lidar_points_cores[iter_i][0] << "Y:\t" << lidar_points_cores[iter_i][1] << "Z:\t" << lidar_points_cores[iter_i][2] << "]\n";
			std::cout << "NEXT POINT";
			lidar_msg_string_tensor[iter_i] = std::format("[X: {}, Y: {}, Z: {}]", lidar_points_cores[iter_i][0], lidar_points_cores[iter_i][1], lidar_points_cores[iter_i][2]);
		}
		return lidar_msg_string_tensor;
	}
	else if (robot_scaner_type == "camera")
	{
		int image_size_x{ 214 };
		int image_size_y{ 214 };
		std::vector<std::string> result_image_info_string;
		std::vector<float> color_vector(3);
		std::vector<std::vector<float>> image_cols_pix(image_size_y, color_vector);
		std::vector<std::vector<std::vector<float>>> result_image(image_size_x, image_cols_pix);

		for (int iter_i{ 0 }; iter_i < image_size_x; iter_i++)
		{
			for (int iter_j{ 0 }; iter_j < image_size_y; iter_j++)
			{
				result_image[iter_i][iter_j][0] = rand() % 256;
				result_image[iter_i][iter_j][1] = rand() % 256;
				result_image[iter_i][iter_j][2] = rand() % 256;
			}
		}
		for (int iter_i{ 0 }; iter_i < image_size_x; iter_i++)
		{
			result_image_info_string[iter_i] = std::format("COLOR VECTOR: [R: {}, G: {}, B: {}]", result_image[iter_i][iter_i][0], result_image[iter_i][iter_i][1], result_image[iter_i][iter_i][2]);
			std::cout << "[ DIOGANAL VALUES <===> PIX_x INDEX:\t" << iter_i << "PIX_Y:\t" << iter_i << result_image[iter_i] << "\n";

		}

		return result_image_info_string;
	}
}

std::vector<float> RobotScaner::get_curent_position_command()
{
	std::vector<float> control_vector_position(3);

	control_vector_position.at(0) = static_cast<float>(rand() % 100);
	control_vector_position.at(1) = static_cast<float>(rand() % 100);
	control_vector_position.at(2) = static_cast<float>(rand() % 100);
}

std::vector<float> RobotScaner::get_curent_orientation_command()
{
	std::vector<float> control_vector_orientation(3);

	control_vector_orientation.at(0) = static_cast<float>(rand() % 100) * (3.14 / 180.0);
	control_vector_orientation.at(1) = static_cast<float>(rand() % 100) * (3.14 / 180.0);
	control_vector_orientation.at(2) = static_cast<float>(rand() % 100) * (3.14 / 180.0);
}

void RobotScaner::set_connection_with_limb(std::string limb_name)
{
	std::cout << "\n[Scaner name: " << scaner_name << "connected with" << limb_name << "True]\n";
}