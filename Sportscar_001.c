#pragma config(Motor,  port1,           Drive,         tmotorVex393, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
//add your motors by going to Robot -> Motor and Sensor Setup -> Motors,
//pragma code will be automatically generated (do not erase it)

int GO = 0;

	motor[port1] = 0; //copy paste every instance of motor[port#] for every motor that you have

	while(true)
	{
		GO = vexRT[Btn7D];
		if(GO == 1)
		{
			motor[port1] = 127; //change "port#" to the port that your motors are plugged into
			wait1Msec(3000);
			motor[port1] = 0; //copy paste every instance of motor[port#] for every motor that you have
		}
	}
}