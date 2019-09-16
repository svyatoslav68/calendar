/***************       Главный файл проекта             ****************
****************              main.cpp					****************
***********************************************************************/
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <termios.h>
#include "task.hpp"
#include "manager.hpp"


int main(int argc, char **argv){
	Task firstTask = Task();
	firstTask.print();
	ManagerCommand mainTerminal = ManagerCommand();
	mainTerminal.setCanonMode(false);
	//while(true){
		 //uint16_t sym = mainTerminal.readSymbol();
		 char sym = mainTerminal.readCommand();
		 if (sym == '0'){
			 exit(0);
			 //break;
			 }
		 //else
			 std::cout << sym;
	//}
	std::cout << std::endl;
	mainTerminal.setCanonMode(true);
	std::cout << "Конец программы" << std::endl;
}
