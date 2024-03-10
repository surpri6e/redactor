#include "../main.hpp"
#include "../headers/add.hpp"
#include "../headers/Redactor.hpp"

void add::startUp(std::string& fn) {
	std::cout << "Welcome to MD Redactor. Press F10 - to save your file." << std::endl;


	/*
	char command = ' ';

	std::cout << "[c]reate new file or [r]edactor older?: ";
	std::cin >> command;

	if (command == 'c') {



	}


	if (command == 'r') {


	}

	if (command != 'r' && command != 'r') {
		exit(202);
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