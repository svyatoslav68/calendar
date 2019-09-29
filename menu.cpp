/*****************************************************************
 ******************* Файл реализации класса Menu *****************
 *******************       menu.cpp              *****************
 ****************************************************************/

#include <iostream>
#include <string>
#include <stack>
#include "menu.hpp"

Menu::Menu(){
	std::cout << "Create object Menu" << std::endl;
}

Menu::~Menu(){
}

char Menu::getMenuSelection(const std::string str_menu, 
							const std::string choices){
	while (std::cin.good()){
		std::cout << str_menu;
		char selection = 0;
		std::cin >> selection;
	}
	return 0;
}

void Menu::enterMenu(Menu *m){
	menuStack.push(m);
}

Menu*	Menu::activeMenu() {
	return menuStack.top();
}

void Menu::clearScreen(){
	std::cout << "\f" << std::flush;
}

MainMenu::MainMenu(){
	std::cout << "Create object MainMenu" << std::endl;
}

void MainMenu::main_loop(){
	clearScreen();
	static const std::string menu = "(P)revious, (N)ext, (Q)uit";
	static const std::string choices = "PNQ";
	getMenuSelection(menu, choices);
}

std::stack <Menu *> Menu::menuStack;
