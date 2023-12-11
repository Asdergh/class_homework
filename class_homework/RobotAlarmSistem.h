#pragma once
#include"RobotScaner.h"
#include"RobotLimb.h"
#include"InformationProtocal.h"
#include<string>
class RobotAlarmSistem: public RobotLimb, public RobotScaner, public InformationProtocal
{
public:

	std::string alarm_protocol_type;

private:

	RobotAlarmSistem(std::string alarm_protocol_type_ = "General") :
		RobotScaner(), RobotLimb(), InformationProtocal()
	{
		std::cout << "[ALLARM PROTOCAL HAS BEING ACTIVATED]!!!";
	}
	void show_allarm_message(std::string, std::string);
};

