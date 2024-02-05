#include "Robot2.h"

Robot2::Robot2(unsigned short int team1,unsigned short int num1,int time1):Robot(team1,num1)
{
	time=time1;
	team=team1;
	num=num1;
}
void Robot2::healthset()
{
	health=50*(levels-1)+100;
}
void Robot2::levelsset(int levels1)
{
	levels=levels1;
	healthset();
}
void Robot2::heatset(int heat1)
{
	heat=heat1;
}
