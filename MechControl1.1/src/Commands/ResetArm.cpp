/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ResetArm.h"
#include "../Robot.h"

ResetArm::ResetArm(double timeout): timer(0) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::arm);
	//timer = timeout;

}

// Called just before this Command runs the first time
void ResetArm::Initialize() {
	//SetTimeout(timer);
}

// Called repeatedly when this Command is scheduled to run
void ResetArm::Execute() {
	//Robot::arm->getArmMotor()->SetSelectedSensorPosition(0,0,10);
	Robot::arm->MoveArm(-0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool ResetArm::IsFinished() {
	if(Robot::arm->getArmMotor()->GetSensorCollection().IsFwdLimitSwitchClosed()) {
		return true;
	}
	else
		return false;


	//return IsTimedOut;
}

// Called once after isFinished returns true
void ResetArm::End() {
Robot::arm->reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ResetArm::Interrupted() {

}
