#include "../main.hpp"
#include "../headers/parallel.hpp"
#include "../headers/Redactor.hpp"
#include "../headers/Config.hpp"
#include "../headers/Menu.hpp"

void parallel::checker() {
	while (Config::isWriting) {
		if (GetKeyState(121) & 0x8000) {
			Redactor::saveFile();
		}
	}
}

void parallel::menuPrinter() {
	while(!Config::isWriting) {
		Menu::printMenu();
		Config::CHAR = _getch();
		Menu::navigationMenu();
	}
}