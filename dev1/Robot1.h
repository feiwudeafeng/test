#ifndef ROBOT1_H
#define ROBOT1_H
#include "Robot.h"
#include <vector>
class Robot1 : public Robot//(unsigned short int team1,unsigned short int num1)
{
public:
	Robot1(unsigned short int team1,unsigned short int num1,int time1);
	virtual void levelsset(int levels1);
	virtual void heatset(int heat1);
	virtual void healthset();
	//std::vector <Robot1> robot1;
//private:
	unsigned short int team;
	unsigned short int num;
	int health;
	int heat;
	int levels;
	int time;
};
#endif