/********************** Файл реализация класса Task ****************************
********************************************************************************/
#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include "task.hpp"

Task::Task(){
	time_execute = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	title_task = "Задача";
}

Task::Task(std::time_t _time_execute, std::string _title_task){
	time_execute = _time_execute;
	title_task = _title_task;
}

void Task::print(){
	std::string strDate(std::ctime(&time_execute)); 
	strDate.pop_back();
	//std::cout << strDate.pop_back() << ":" << title_task << std::endl;
	std::cout << strDate << " : " << title_task << std::endl;
}
