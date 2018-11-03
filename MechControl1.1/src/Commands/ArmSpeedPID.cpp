/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "ArmSpeedPID.h"
#include "ResetArm.cpp"

ArmSpeedPID::ArmSpeedPID() //: speedPID(new WVPIDController(1, 0, 0, arm->getPosition(), false))
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(arm);
}

// Called just before this Command runs the first time
void ArmSpeedPID::Initialize() {
	//double targetSpeed = oi->getArmStick()->GetY();

}

// Called repeatedly when this Command is scheduled to run
void ArmSpeedPID::Execute() {
	//if (!arm->whenyouarerunningabuttoncommanditistrue) {
		//speedPID->SetSetPoint(oi->getArmStick()->GetY());
		double targetSpeed = m_oi->getArmStick()->GetY();
		//double adjSpeed = speedPID->Tick(targetSpeed);
		arm->move(-targetSpeed);
		std::cout << "Position: " << arm->getPosition() << std::endl;

}

// Make this return true when this Command no longer needs to run execute()
bool ArmSpeedPID::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArmSpeedPID::End() {
	//arm->move(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmSpeedPID::Interrupted() {

}
