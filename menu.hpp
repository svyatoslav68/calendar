#ifndef MENU_HPP
#define MENU_HPP
/**************************************************************************
 ***************** Заголовочный файл класса Menu **************************
 *****************           menu.hpp            **************************
 *************************************************************************/

class Menu {
	private:
		static std::stack <Menu*> menuStack; 
	public:
		Menu();
		~Menu();
		virtual void main_loop() = 0;
		static void enterMenu(Menu *m); 
		static void exitMenu() {menuStack.pop();}
		static Menu* activeMenu(); 
	protected:
		char getMenuSelection(const std::string str_menu,
				const std::string choices);
		void clearScreen();
};

class MainMenu:public Menu{
	public:
		MainMenu();
		void main_loop();

};

#endif // MENU_HPP

