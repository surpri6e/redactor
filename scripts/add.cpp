#include "../main.hpp"
#include "../headers/add.hpp"
#include "../headers/Redactor.hpp"
#include "../headers/Config.hpp"
#include "../headers/Win.hpp"

void add::printMessages() {
	std::cout << "Welcome to MD Redactor. Press F10 - to save your file." << std::endl;
	std::cout << "Enter name of your new file: ";
}

void add::createFile() {
	system("cls");

	add::printMessages();
	Win::setConsoleCursorVisible(true);

	std::string name;
	std::cin >> name;
	Config::FILE_NAME = name;

	std::cout << std::endl;

	//TAKE OF COMMAND YES OR NO IN CYCLE

	// EXIST FILE!!
	//Redactor.save() default
}

void add::openFile() {
	system("cls");

	add::printMessages();
	Win::setConsoleCursorVisible(true);

	std::string name;
	std::cin >> name;
	Config::FILE_NAME = name;

	std::cout << std::endl;

	// EXIST FILE!!
	//Redactor.save() default
}