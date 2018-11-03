/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#ifndef ArmPositionPID_H
#define ArmPositionPID_H

#include "../CommandBase.h"
#include "../Utilities/WVPIDController.h"

class ArmPositionPID : public CommandBase {
private:
	WVPIDController* armPositionPid;
	double absolutePosition;
	double speed;

public:
	ArmPositionPID();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ArmPositionPID_H
