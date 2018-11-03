/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "moveArm.h"
#include "../Robot.h"
moveArm::moveArm() {
	Requires (Robot::drive);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void moveArm::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void moveArm::Execute() {
	double motorPower = Robot::m_oi->getMoveArmLeft()->GetY();
	Robot::arm->MoveArm(motorPower);
}

// Make this return true when this Command no longer needs to run execute()
bool moveArm::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void moveArm::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void moveArm::Interrupted() {

}
