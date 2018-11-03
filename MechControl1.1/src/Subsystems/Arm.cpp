/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Arm.h"
#include "Commands/moveArm.h"

Arm::Arm() : Subsystem("Arm"),  arm(new TalonSRX(ArmMotorPort)) {
	//armEncoder->Reset();
	arm->ConfigSelectedFeedbackSensor(FeedbackDevice::Analog, 0, 10);
			// left->ConfigEncoderCodesPerRev(360);
	arm->SetSelectedSensorPosition(0,0,10);

	arm->SetInverted(false);
}

void Arm::InitDefaultCommand() {
	SetDefaultCommand(new moveArm());
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Arm::MoveArm(double armValue) {
arm->Set(ControlMode::PercentOutput, armValue);

}
Arm::~Arm() {
	if (arm != nullptr) {
		delete arm;
		arm = nullptr;
	}
}

void Arm::reset() {
	arm->SetSelectedSensorPosition(0, 0, 10);
}
TalonSRX* Arm::getArmMotor() {
	return arm;
}

double Arm::getPosition() {
	return double(arm->GetSelectedSensorPosition(0));
}







