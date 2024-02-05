#include <iostream>
#include <sstream>
#include <string>
#include "Manager.h"

int main()
{
	int conum1;
	unsigned short int time;
    char command;
    unsigned short int team;
    unsigned short int num;
    int argument3;
	std::string input;
    std::cin>>conum1;
	std::getline(std::cin, input); 
    std::istringstream iss(input);
    iss>>time>>command>>team>>num>>argument3;

	// 打印提取出来的值
    std::cout << "Time: " << time << std::endl;
    std::cout << "Command: " << command << std::endl;
    std::cout << "Team: " << team << std::endl;
    std::cout << "Num: " << num << std::endl;
    std::cout << "Argument3: " << argument3 << std::endl;
    system("pause");
    return 0;
}