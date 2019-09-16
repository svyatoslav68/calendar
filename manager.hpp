/********************** Заголовочный файл класса Terminal, ******************
*********************** задача которого установить режимы  ******************
*********************** работы системного терминала        ******************
***********************            manager.hpp            ******************
****************************************************************************/
class ManagerCommand {
private:
	uint8_t std_in;
	uint8_t std_out;
	std::string name_file_terminal;
	struct termios begin_setting;
	uint32_t baudrate;
public:
	ManagerCommand();
	~ManagerCommand();
	void setCanonMode(bool mode=false);
	char readCommand();
	std::string readString();
};

