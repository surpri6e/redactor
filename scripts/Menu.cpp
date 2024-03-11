#include "../main.hpp"
#include "../headers/Menu.hpp"
#include "../headers/Win.hpp"
#include "../headers/Config.hpp"
#include "../headers/keywords.hpp"

void Menu::printMenu(int& activeMenu) {
	int y = Config::yMenu;

	for (std::size_t i = 0; i < Config::SIZE_OF_MENU; i++) {
		if (i == activeMenu)
			SetConsoleTextAttribute(Win::ConsoleOutput, Config::MAIN_COLOR);
		else
			SetConsoleTextAttribute(Win::ConsoleOutput, Config::MAIN_COLOR_LIGHTEN);

		Win::setCursorPosition(Config::xMenu, y++);
		std::cout << Config::Menu[i] << std::endl;
	}

	y = Config::yMenu;
}

void Menu::navigationMenu(char& ch, int& activeMenu) {
	switch (ch) {
	case EKeywords::UP:
		if (!(activeMenu == 0)) activeMenu--;
			break;
	case EKeywords::DOWN:
		if(!(activeMenu == Config::SIZE_OF_MENU - 1)) activeMenu++;
			break;
	}
}