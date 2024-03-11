#include "../main.hpp"
#include "../headers/add.hpp"
#include "../headers/Redactor.hpp"

void add::startUp(std::string& fn) {
	std::cout << "Welcome to MD Redactor. Press F10 - to save your file." << std::endl;
	std::cout << "[c]reate new file or [r]edactor older?: ";

	char _command;

	while (true) {
		_command = _getch();

		if ((int)_command != 99 && (int)_command != 114) {
			system("cls");
			std::cout << "INCORRENT COMMAND!" << std::endl << std::endl;
			std::cout << "Welcome to MD Redactor. Press F10 - to save your file." << std::endl;
			std::cout << "[c]reate new file or [r]edactor older?: ";
			continue;
		} else {
			system("cls");
			std::cout << "Welcome to MD Redactor. Press F10 - to save your file." << std::endl;
			std::cout << "[c]reate new file or [r]edactor older?: ";
			std::cout << _command;
			break;
		}
	}

	/*
	if (command == 'c') { // 99



	}
	if (command == 'r') {


	}
	*/

	//CHECK ON EXIST FILE


	std::cout << std::endl;

	std::string name;

	std::cout << "Enter name of file: ";
	std::cin >> name;


	//Redactor.save() default
	std::cout << std::endl;

	fn = name;
	
	//Handle error;
}

void add::checker(const std::vector<std::string>& text, const std::string& name, const std::string& path) {
	while (true) {
		if (GetKeyState(121) & 0x8000) {
			Redactor::saveFile(text, name, path);
		}
	}
}