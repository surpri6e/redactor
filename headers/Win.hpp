#pragma once 

#include "../main.hpp"

class Win {
public:
	static HANDLE ConsoleOutput;
	static HWND ConsoleWindow;
	static void helloMessageBox();
	static void setCursorPosition(short x, short y);
	static void setConsoleCursorVisible(bool show, short size);
	static void setConsoleSize();
};