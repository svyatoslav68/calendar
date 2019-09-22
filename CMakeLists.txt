cmake_minimum_required(VERSION 3.5)

project(Calendar VERSION 0.0.1)

configure_file(
		config.h.in #Взять шаблонный файл указанный в этой строке
		${CMAKE_CURRENT_BINARY_DIR}/config.h
)

set(TARGET
		calendar)

set(SOURCES
		main.cpp task.cpp terminal.cpp menu.cpp
	)

set(HEADERS
		task.hpp terminal.hpp menu.hpp
	)

add_executable(${TARGET} ${SOURCES} ${HEADERS}) #Собрать файл calendar из файла main.cpp
set_target_properties(
	${TARGET} PROPERTIES
	PRIVATE
	CXX_STANDARD 11	#Собирать в соответствии со стандартом c11
	CXX_STANDARD_REQUIRED ON # cmake запускает на компиляции код, который работает только на c11 стандарте и если он работает, то можно собирать. 
	${CMAKE_CURRENT_BINARY_DIR}
)

