/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#pragma once
#include "../Robot.h"
#include "OI.h"
#include <Commands/Command.h>
#include "Subsystems/DriveTrain.h"


class RightSpinRight : public frc::Command {
private:
	double rightDrive;
public:
	RightSpinRight(double rightPower);
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

