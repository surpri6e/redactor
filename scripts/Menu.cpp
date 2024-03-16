#include "../main.hpp"
#include "../headers/Menu.hpp"
#include "../headers/Win.hpp"
#include "../headers/Config.hpp"
#include "../headers/keywords.hpp"
#include "../headers/add.hpp"

void Menu::printMenu() {
	system( "cls" );
	Win::setConsoleCursorVisible( Config::isWriting );

	int y = Config::yMenu;

	for (std::size_t i = 0; i < Config::SIZE_OF_MENU; i++) {
		if (i == Config::activeMenu)
			SetConsoleTextAttribute(Win::ConsoleOutput, Config::MAIN_COLOR);
		else
			SetConsoleTextAttribute(Win::ConsoleOutput, Config::MAIN_COLOR_LIGHTEN);

		Win::setCursorPosition(Config::xMenu, y++);
		std::cout << Config::Menu[i] << std::endl;
	}

	y = Config::yMenu;
}

void Menu::navigationMenu() {
	switch (Config::CHAR) {
	case EKeywords::UP:
		if (!(Config::activeMenu == 0)) Config::activeMenu--;
			break;
	case EKeywords::DOWN:
		if(!(Config::activeMenu == Config::SIZE_OF_MENU - 1)) Config::activeMenu++;
			break;

	case EKeywords::ESC:
		exit(9090);
		break;
	case EKeywords::ENTER:
		switch (Config::activeMenu) {
		case 0:
			add::createFile();
			break;
		case 1:
			add::openFile();
			break;
		case 2:
			exit(9080);
			break;
		}
		break;
	}

}