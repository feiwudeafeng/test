#define MANAGER_H
//#include <vector>
class Manager
{
//protected:
	//std::vector <Manager> manager;
public:
    Manager(unsigned short int time1,char command1,unsigned short int team1,unsigned short int num1,int argument3_1);
	void Save(unsigned short int time1,char command1,unsigned short int team1,unsigned short int num1,int argument3_1,unsigned int conum);
	int myMin(int a,int b) {if(a>b)return b;else return a;};
private:
	unsigned short int time;
	unsigned short int team;
	unsigned short int num;
	char command;
	int argument3;
};
