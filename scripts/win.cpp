#include "../main.hpp"
#include "../headers/Win.hpp"

HANDLE Win::Console = GetStdHandle(STD_OUTPUT_HANDLE);

/*
void GoToXY(HANDLE& con, short x, short y) {
	SetConsoleCursorPosition(con, { x, y });
}

void ConsoleCursorVisible(HANDLE& con, bool show, short size) {

	CONSOLE_CURSOR_INFO structCursorInfo;

	GetConsoleCursorInfo(con, &structCursorInfo);

	structCursorInfo.bVisible = show; // измен€ем видимость курсора

	structCursorInfo.dwSize = size; // измен€ем размер курсора

	SetConsoleCursorInfo(con, &structCursorInfo);

}
*/

void Win::helloMessageBox() {
	MessageBox(NULL, "Thanks for choosing our redactor!", "MDRedactor info", MB_OK);
}



	//SetConsoleTextAttribute(Console, BACKGROUND_BLUE);
	//system("CLS");
	//SetConsoleScreenBufferSize(Console, {1920, 1080});

	//HWND hWindowConsole = GetConsoleWindow();
	//RECT r;
	//GetWindowRect(hWindowConsole, &r); //stores the console's current dimensions
	//MoveWindow(hWindowConsole, r.left, r.top, 1920, 1080, TRUE);

	//SetConsoleDisplayMode(Console, CONSOLE_FULLSCREEN_MODE, 0);

	//::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

	/*
	char ch;

	while (true)

	{

		ch = _getch();

		if (ch == -32) ch = _getch(); // ќтлавливаем стрелочки

		std::cout << " од " << (int)ch << std::endl;

	}
	*/


	//ConsoleCursorVisible(Console, false, 100);
	//GoToXY(Console, 10, 10);
	// 
	// 
	//COORD cursorPosition;
	//cursorPosition.X = 10;
	//cursorPosition.Y = 10;

	//SetConsoleCursorPosition(Console, cursorPosition);
