#pragma once
#include"RobotScaner.h"
#include"RobotLimb.h"
#include"InformationProtocal.h"
#include"RobotAlarmSistem.h"

class FreeConstructableRobot : public RobotScaner, public RobotLimb, public InformationProtocal, public RobotAlarmSistem
{
private:

	int limbs_count;
	int scaners_count;
	int protocols_count;

public:

	FreeConstructableRobot(int limbs_count = 4, int scaners_count = 4, int protocol_count = 4) : 
		RobotScaner(), RobotLimb(), InformationProtocal(), RobotAlarmSistem(), limbs_count(limbs_count), scaners_count(scaners_count), protocols_count(protocol_count)
	{}

	void construct_robot();
};


