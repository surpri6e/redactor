#include "main.hpp"

#include <thread>

#include "./headers/add.hpp"
#include "./headers/Redactor.hpp"
#include "./headers/Win.hpp"
#include "./headers/parallel.hpp"
#include "./headers/config.hpp"

// VARIABLES
const int MAIN_COLOR = FOREGROUND_RED | FOREGROUND_BLUE;
const int MAIN_COLOR_LIGHTEN = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY;

const std::size_t HEIGHT_CONSOLE_COLS = 120;
const std::size_t WIDTH_CONSOLE_LINES = 40;

const std::string FILE_PATH = "C:\\mdredactor-result\\";

const std::string Menu[] = { "New file", "Open older", "Exit" };

bool isWriting = false;

std::string FILE_NAME = "";

std::vector<std::string> fullText = {};

// MAIN
int main() {
	config::setupConfig();
	Win::setConsoleCursorVisible(isWriting);
	
	int x = HEIGHT_CONSOLE_COLS / 2 - 10;
	int y = WIDTH_CONSOLE_LINES / 2 - 3;

	int activeMenu = 0;
	
	char ch;

	while (true) {
		if (!isWriting) {

			for (int i = 0; i < std::size(Menu); i++)
			{
				if (i == active_menu) {
					SetConsoleTextAttribute(Win::ConsoleOutput, MAIN_COLOR);
				}
				else SetConsoleTextAttribute(Win::ConsoleOutput, MAIN_COLOR_LIGHTEN);

				Win::setCursorPosition(x, y++);
				std::cout << Menu[i] << std::endl;
			}

			y = 12;
			ch = _getch();
			if (ch == -32) ch = _getch(); // Отлавливаем стрелочки
			switch (ch)
			{
			case 27:
				exit(0);
			case 72:
				active_menu--;
				break;
			case 80:
				active_menu++;
				break;
			}
		}
	}



	add::startUp(FILE_NAME);
	FILE_NAME += ".md";

	std::thread checkerTread(parallel::checker, std::ref(fullText), std::ref(FILE_NAME), std::ref(FILE_PATH));

	while (isWriting) {
		std::string word = " ";
		std::cin >> word;

		while (std::cin.get() != '\n') {
			std::string tmp = "";
			std::cin >> tmp;
			word += " " + tmp;
		}

		fullText.push_back(word);
	}

	checkerTread.join();

	return 0;
}

/*
	char ch;

	while (true)

	{

		ch = _getch();

		if (ch == -32) ch = _getch(); // Отлавливаем стрелочки

		std::cout << "Код " << (int)ch << std::endl;

	}
	*/