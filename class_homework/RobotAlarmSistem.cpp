#include "RobotAlarmSistem.h"

void RobotAlarmSistem::show_allarm_message(std::string limb_name, std::string scaner_name)
{
	std::cout << std::format("scaner: {} connected with limb: {} got some mistake!!!", scaner_name, limb_name);
}