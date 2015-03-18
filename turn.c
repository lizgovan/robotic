task main()
{
	
nMotorPIDSpeedCtrl[motorB]=mtrSpeedReg;	
nMotorPIDSpeedCtrl[motorC]=mtrSpeedReg;	

nMotorEncoderTarget[motorB] = 187;
nMotorEncoderTarget[motorC] = -187;
motor[motorB]=40;
motor[motorC]=-40;

while( nMotorRunState[motorC]!=runStateIdle)
{
	


}
motor[motorB]=0;
motor[motorB]=0;
}
