#include "../main.hpp"
#include "../headers/add.hpp"
#include "../headers/Redactor.hpp"

void add::printStartUpMessages() {
	std::cout << "Welcome to MD Redactor. Press F10 - to save your file." << std::endl;
	std::cout << "[c]reate new file or [r]edactor older?: ";
}

void add::setupConfig() {

}

void add::startUp(std::string& fn) {
	add::printStartUpMessages();

	char _command;

	while (true) {
		_command = _getch();

		if ((int)_command != 99 && (int)_command != 114) {
			Sleep(200);
			system("cls");
			std::cout << "INCORRENT COMMAND!" << std::endl << std::endl;
			add::printStartUpMessages();
			continue;
		} else {
			system("cls");
			add::printStartUpMessages();
			std::cout << _command;
			break;
		}
	}

	/*
	if (command == 'c') { // 99
		//CHECK ON EXIST FILE


	}
	if (command == 'r') {


	}
	*/


	std::cout << std::endl;

	std::string name;

	std::cout << "Enter name of file: ";
	std::cin >> name;


	//Redactor.save() default
	std::cout << std::endl;

	fn = name;
	
	//Handle error;
}