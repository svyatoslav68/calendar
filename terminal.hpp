/********************** Заголовочный файл класса Terminal, ******************
*********************** задача которого установить режимы  ******************
*********************** работы системного терминала        ******************
***********************            terminal.hpp            ******************
****************************************************************************/

class Terminal {
private:
	uint8_t std_in;
	uint8_t std_out;
	std::string name_file_terminal;
	struct termios begin_setting;
	uint32_t baudrate;
public:
	Terminal();
	~Terminal();
	void setCanonMode(bool mode=false);
};

