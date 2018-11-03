/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RightSpinRight.h"

RightSpinRight::RightSpinRight(double rightPower) {
	Requires (Robot::drive);
	rightDrive=rightPower;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void RightSpinRight::Initialize() {
	SetTimeout(5);
}

// Called repeatedly when this Command is scheduled to run
void RightSpinRight::Execute() {
	Robot::drive->rightSpinRight(rightDrive);
}

// Make this return true when this Command no longer needs to run execute()
bool RightSpinRight::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void RightSpinRight::End() {
	Robot::drive->rightSpinRight(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RightSpinRight::Interrupted() {

}
