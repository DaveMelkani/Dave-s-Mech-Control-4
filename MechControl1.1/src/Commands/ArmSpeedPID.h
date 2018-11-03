/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#ifndef ArmSpeedPID_H
#define ArmSpeedPID_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Utilities/WVPIDController.h"

class ArmSpeedPID : public CommandBase {

private:
	//WVPIDController* speedPID;

public:
	ArmSpeedPID();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
