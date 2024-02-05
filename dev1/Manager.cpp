#include <iostream>
#include <vector>
#include "Manager.h"
#include "Robot1.h"
#include "Robot2.h"

Manager::Manager(unsigned short int time1,char command1,unsigned short int team1,unsigned short int num1,int argument3_1)
{
    time=time1;
	command=command1;
	team=team1;
	num=num1;
	argument3=argument3_1;
}
void Manager::Save(unsigned short int time1,char command1,unsigned short int team1,unsigned short int num1,int argument3_1,unsigned int conum)
{
	std::vector <Manager> manager;
	std::vector <Robot1> robot1;
	std::vector <Robot2> robot2;
	for(unsigned int i=0;i<conum;i++)
	{
		manager.push_back(Manager(time1,command1,team1,num1,argument3_1));
	}
	for (auto it=manager.begin();it!=manager.end();++it)
	{
       const Manager& obj=*it;
	   if(obj.command=='A')
	   {
		   if(obj.argument3==0)
		   {
			   robot1.push_back(Robot1(team,num,time));
		   }
		   else
		   {
			   robot2.push_back(Robot2(team,num,time));
		   }
	   }
	   else if(obj.command=='U')
	   {
		   for (auto it=robot2.begin();it!=robot2.end();++it)
		   {
				Robot2& infantry=*it;
				if(infantry.team==obj.team&&infantry.num==obj.num)
				{
					infantry.levelsset(obj.argument3);
				}
		   }
	   }
	   else if(obj.command=='H')
	   {
		   for (auto it=robot2.begin();it!=robot2.end();++it)
		   {
				Robot2& infantry=*it;
				if(infantry.team==obj.team&&infantry.num==obj.num)
				{
					infantry.heatset(infantry.heat-obj.time+infantry.time);
					if(infantry.heat<0)
					{
						infantry.heatset(0);
					}
					infantry.heatset(infantry.heat+obj.argument3);
					infantry.time=obj.time;
				}
		   }
	   }
	   else// if(obj.command=='F')
	   {
		   for (auto it=robot2.begin();it!=robot2.end();++it)
		   {
				Robot2& infantry=*it;
				if(infantry.team==obj.team&&infantry.num==obj.num)
				{
					infantry.health=infantry.health-obj.argument3;
					if(infantry.health<=0)
					{
						std::cout<<"D  "<<infantry.team<<"  "<<infantry.num<<std::endl;
						robot2.erase(it);
					}
				}
		   }
		   for (auto it=robot1.begin();it!=robot1.end();++it)
		   {
				Robot1& project=*it;
				if(project.team==obj.team&&project.num==obj.num)
				{
					project.health=project.health-obj.argument3;
					if(project.health<=0)
					{
						std::cout<<"D  "<<project.team<<"  "<<project.num<<std::endl;
						robot1.erase(it);
					}
				}
		   }
	   }
	   for(auto it=robot1.begin();it!=robot1.end();++it)
		{
			Robot1& project=*it;
			if(project.team==obj.team&&project.num==obj.num)
			{
				project.health=project.health+project.time-obj.time;
				if(project.health<=0)
				{
					std::cout<<"D  "<<project.team<<"  "<<project.num<<std::endl;
					robot1.erase(it);
				}
			}
		}
	    for (auto it=robot2.begin();it!=robot2.end();++it)
		 {
			Robot2& infantry=*it;
			if(infantry.team==obj.team&&infantry.num==obj.num)
			{
				if(infantry.heat>100*infantry.levels)
				{
					infantry.health=infantry.health+myMin(obj.time-infantry.time,infantry.heat-100*infantry.levels);
					infantry.heat=infantry.heat-myMin(obj.time-infantry.time,infantry.heat-100*infantry.levels);
					if(infantry.health<=0)
					{
						std::cout<<"D  "<<infantry.team<<"  "<<infantry.num<<std::endl;
						robot2.erase(it);
					}
				}
			}

    }
}
