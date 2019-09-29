/************* Файл реализация класса Terminal *********
******************************************************************/
#include <string>
#include <iostream>
#include <cstdio>
#include <termios.h>
#include "terminal.hpp"

Terminal::Terminal(){
	std_in = 0;
	std_out = 1;
	std::cout<<	"Создание объекта терминала" << std::endl;
	tcgetattr(std_in, &begin_setting);
}

Terminal::~Terminal(){
	std::cout<<	"Восстановленя параметров терминала" << std::endl;
	tcsetattr(std_in, TCSANOW, &begin_setting);
}

void Terminal::setCanonMode(bool mode){
	struct termios nocanon_setting;
	nocanon_setting = begin_setting;
	if (mode)
		nocanon_setting.c_lflag |= (ICANON|ECHO);
	else
		nocanon_setting.c_lflag &= ~(ICANON|ECHO);
	tcsetattr(std_in, TCSANOW, &nocanon_setting);
}
