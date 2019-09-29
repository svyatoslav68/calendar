/***************       Главный файл проекта             ****************
****************              main.cpp					****************
***********************************************************************/
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <termios.h>
#include <stack>
#include "task.hpp"
#include "terminal.hpp"
#include "menu.hpp"

int main(int argc, char **argv){
	Task firstTask = Task();
	firstTask.print();
	Terminal mainTerminal = Terminal();
	mainTerminal.setCanonMode(false);
	/*while(true){
		 //uint16_t sym = mainTerminal.readSymbol();
		 char sym;
		 std::cin >> sym;
		 if (sym == '0'){
			 //exit(0);
			 break;
			 }
		 //else
			 std::cout << sym;
	}*/
	MainMenu main_menu;
	Menu::enterMenu(&main_menu);
	Menu::activeMenu()->main_loop();
	std::cout << std::endl;
	mainTerminal.setCanonMode(true);
	std::cout << "Конец программы" << std::endl;
}
