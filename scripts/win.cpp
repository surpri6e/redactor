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

void Win::setConsoleCursorVisible(bool show, short size) {
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(Win::ConsoleOutput, &structCursorInfo);

	structCursorInfo.bVisible = show; 
	structCursorInfo.dwSize = size;

	SetConsoleCursorInfo(Win::ConsoleOutput, &structCursorInfo);
}

void Win::setConsoleSize() {
	RECT rect;
	GetWindowRect(Win::ConsoleWindow, &rect);
	MoveWindow(Win::ConsoleWindow, rect.left, rect.top, 1000, 600, TRUE);
}

