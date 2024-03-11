#include "main.hpp"

#include <thread>

#include "./headers/add.hpp"
#include "./headers/Redactor.hpp"
#include "./headers/Win.hpp"
#include "./headers/parallel.hpp"
#include "./headers/Config.hpp"
#include "./headers/Menu.hpp"

int main() {
	Config::setupConfig();
	Win::setConsoleCursorVisible(Config::isWriting);
	
	int activeMenu = 0;
	
	char ch;

	while (true) {
		if (!Config::isWriting) {
			Menu::printMenu(activeMenu);
			ch = _getch();
			Menu::navigationMenu(ch, activeMenu);
		}
	}

	/*

	add::startUp(FILE_NAME);
	FILE_NAME += ".md";

	std::thread checkerTread(parallel::checker, std::ref(fullText), std::ref(FILE_NAME), std::ref(FILE_PATH));

	checkerTread.join();

	return 0;
	*/
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