/********************** Заголовочный файл класса Task, который ******************
*********************** реализует функциональность планируемой ******************
*********************** задачи.    task.hpp                    ******************
********************************************************************************/
class Task {
private:
	std::time_t time_execute;
	std::string title_task;
public:
	Task();						// конструктор по умолчанию
	Task(std::time_t _time_execute, std::string _title_task);
	void print();
};
