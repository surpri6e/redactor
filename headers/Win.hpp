#pragma once 

#include "../main.hpp"

class Win {
public:
	static HANDLE ConsoleOutput;
	static HWND ConsoleWindow;
	static void helloMessageBox();
	static void setCursorPosition(short, short);
	static void setConsoleCursorVisible(bool);
};