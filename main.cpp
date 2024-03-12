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
	
	int activeMenu = 0;
	
	char ch;

	std::thread checkerTread(parallel::checker);

	while (true) {
		Win::setConsoleCursorVisible(Config::isWriting);
		if (!Config::isWriting) {
			Menu::printMenu(activeMenu);
			ch = _getch();
			Menu::navigationMenu(ch, activeMenu);
		}
	}

	checkerTread.join();

	return 0;
}
