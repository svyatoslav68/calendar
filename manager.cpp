/************* Файл реализация класса ManagerCommand *********
******************************************************************/
#include <string>
#include <iostream>
#include <cstdio>
#include <termios.h>
#include "manager.hpp"

ManagerCommand::ManagerCommand(){
	std_in = 0;
	std_out = 1;
	std::cout<<	"Инициализация терминала" << std::endl;
	tcgetattr(std_in, &begin_setting);
}

ManagerCommand::~ManagerCommand(){
	std::cout<<	"Восстановленя параметров терминала" << std::endl;
	tcsetattr(std_in, TCSANOW, &begin_setting);
}

void ManagerCommand::setCanonMode(bool mode){
	struct termios nocanon_setting;
	nocanon_setting = begin_setting;
	if (mode)
		nocanon_setting.c_lflag |= (ICANON|ECHO);
	else
		nocanon_setting.c_lflag &= ~(ICANON|ECHO);
	tcsetattr(std_in, TCSANOW, &nocanon_setting);
}

char ManagerCommand::readCommand(){
	char bufread;
	//read(std_in, &bufread, 1);
	std::cin >> bufread;
	return bufread;
}

std::string ManagerCommand::readString(){
	std::string bufread;
	std::cin >> bufread;
	return bufread;
}

