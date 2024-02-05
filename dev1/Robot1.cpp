#include "Robot1.h"

Robot1::Robot1(unsigned short int team1,unsigned short int num1,int time1):Robot(team1,num1)
{
	time=time1;
	team=team1;
	num=num1;
}
void Robot1::healthset()
{
	health=300;
}
void Robot1::levelsset(int levels1)
{
	levels=levels1;
	healthset();
}
void Robot1::heatset(int heat1)
{
	heat=heat1;
}
