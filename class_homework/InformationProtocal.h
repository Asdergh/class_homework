#pragma once
#include"RobotScaner.h"
#include"RobotLimb.h"
class InformationProtocal : public RobotLimb, public RobotScaner
{
private:

	int protocals_count;
	std::string protocal_type;

public:

	InformationProtocal(std::string protocal_type = "SCANER===>LIMB") : RobotLimb(), RobotScaner(), protocal_type(protocal_type)
	{
		protocals_count += 1;
	}

	
	void show_info_scaners();
	void send_info_scaner_to_limb();


};

