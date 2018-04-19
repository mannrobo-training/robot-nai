#pragma config(Sensor, dgtl6,  ledYellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledRed,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Sensor, dgtl11, quadRight,      sensorQuadEncoder)
#pragma config(Motor,  port1,           claw,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           leftCLeft,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftMGLift,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           drvTopLeft,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           drvBottomLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           drvBottomRight, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           drvTopRight,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightMGLift,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightCLift,    tmotorVex393_MC29, openLoop)



// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  bStopTasksBetweenModes = true;
}


task autonomous()
{
  AutonomousCodePlaceholderForTesting();
}


int left;
int right;


void drivin()
{
	motor[drvTopLeft]  = (vexRT[Ch2] + vexRT[Ch1])/2;
	motor[drvTopRight] = (vexRT[Ch2] - vexRT[Ch1])/2;


}


void buttons()
{
	if (vexRT[Btn6U] = 1)
	{
		motor[leftMGLift] = 127
		motor[rightMGLift] = 127
	}

	if (vexRT[Btn6D] = 1)
	{
		motor[leftMGLift] = -127
		motor[rightMGLift] = -127
	}
}


task usercontrol()
{

  while (true)
  {
  	void drivin()
  	void buttons()
  }
}
