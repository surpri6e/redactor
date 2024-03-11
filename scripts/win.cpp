#include "../main.hpp"
#include "../headers/Win.hpp"

HANDLE Win::ConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
HWND Win::ConsoleWindow = GetConsoleWindow();

void Win::helloMessageBox() {
	MessageBox(NULL, "Thanks for choosing our redactor!", "MDRedactor info", MB_OK);
}

void Win::setCursorPosition(short x, short y) {
	SetConsoleCursorPosition(Win::ConsoleOutput, { x, y });
}

void Win::setConsoleCursorVisible(bool show) {
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(Win::ConsoleOutput, &structCursorInfo);

	structCursorInfo.bVisible = show; 

	SetConsoleCursorInfo(Win::ConsoleOutput, &structCursorInfo);
}

