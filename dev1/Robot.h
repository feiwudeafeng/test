#ifndef ROBOT_H
#define ROBOT_H

class Robot
{
public:
	Robot(unsigned short int team1,unsigned short int num1);
	virtual void levelsset(int levels1);
	virtual void heatset(int heat1);
	virtual void healthset();
private:
	unsigned short int team;
	unsigned short int num;
	int health;
	int heat;
	int levels;
};
#endif