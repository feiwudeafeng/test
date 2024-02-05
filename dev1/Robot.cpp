#include "Robot.h"

Robot::Robot(unsigned short int team1,unsigned short int num1)
{
	team=team1;
	num=num1;
}
 void Robot::healthset()
{
	health=50*(levels-1)+100;
}
 void Robot::levelsset(int levels1)
{
	levels=levels1;
	healthset();
}
void Robot::heatset(int heat1)
{
	heat=heat1;
}