#ifndef ROBOT2_H
#define ROBOT2_H
#include "Robot.h"
#include <vector>
class Robot2 : public Robot
{
public:
	Robot2(unsigned short int team1,unsigned short int num1,int time1);
	virtual void levelsset(int levels1);
	virtual void heatset(int heat1);
	virtual void healthset();
	//std::vector <Robot2> robot2;
//private:
	unsigned short int team;
	unsigned short int num;
	int health;
	int heat;
	int levels;
	int time;

};
#endif