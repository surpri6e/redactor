#include "../main.hpp"
#include "../headers/add.hpp"
#include "../headers/Redactor.hpp"
#include "../headers/Config.hpp"
#include "../headers/Win.hpp"
#include "../headers/keywords.hpp"

void add::printMessages() {
	std::cout << "Welcome to MD Redactor. Press F10 - to save your file. Press ESC - to leave to menu." << std::endl;
	std::cout << "Enter name of your file: ";
}

void add::redactoringFile() {
	while()


	//esc -> save -> isWriting =false
}

void add::createFile() {
	Config::isWriting = true;
	Config::TEXT.clear();
	system("cls");

	add::printMessages();
	Win::setConsoleCursorVisible(true);

	std::string name;

	while (true) {
		Config::CHAR = _getch();
		if (Config::CHAR == EKeywords::ESC) {
			Config::isWriting = false;
			break;
		}
		if (Config::CHAR == EKeywords::ENTER && name.length() != 0) {
			Config::FILE_NAME = name += ".md";
			break;
		}
		if (isCorrectSymbol()) {
			name.push_back( Config::CHAR );
			std::cout << Config::CHAR;
		}
	}

	std::cout << std::endl;

	if (Redactor::isFileExist()) {
		std::cout << "This file already exist, are you sure for create new?[y/n]: ";
		while (true) {
			Config::CHAR = _getch();
			if (Config::CHAR == 'y') {
				Redactor::saveFile( {} );
				//redactoring file
				break;
			}
			if (Config::CHAR == 'n') {
				Config::isWriting = false;
				break;
			}
		}
	}
}

void add::openFile() {
	Config::isWriting = true;
	Config::TEXT.clear();
	system( "cls" );

	add::printMessages();
	Win::setConsoleCursorVisible( true );

	std::string name;

	while (true) {
		Config::CHAR = _getch();
		if (Config::CHAR == EKeywords::ESC) {
			Config::isWriting = false;
			break;
		}
		if (Config::CHAR == EKeywords::ENTER && name.length() != 0) {
			Config::FILE_NAME = name += ".md";
			break;
		}
		if (isCorrectSymbol()) {
			name.push_back( Config::CHAR );
			std::cout << Config::CHAR;
		}
	}

	std::cout << std::endl;

	// Наоборот
	if (!Redactor::isFileExist()) {
		std::cout << "This file doen't exist, create new file before redactorig him.";
		Sleep( 2000 );
		Config::isWriting = false;
	}
	else {
		//open file
		// redactoring file
	}
}

bool add::isCorrectSymbol() {
	if 
		(
			Config::CHAR == '1' ||
			Config::CHAR == '2' ||
			Config::CHAR == '3' ||
			Config::CHAR == '4' ||
			Config::CHAR == '5' ||
			Config::CHAR == '6' ||
			Config::CHAR == '7' ||
			Config::CHAR == '8' ||
			Config::CHAR == '9' ||
			Config::CHAR == '0' ||
			Config::CHAR == '-' ||
			Config::CHAR == '_' ||
			Config::CHAR == 'q' ||
			Config::CHAR == 'Q' ||
			Config::CHAR == 'w' ||
			Config::CHAR == 'W' ||
			Config::CHAR == 'e' ||
			Config::CHAR == 'E' ||
			Config::CHAR == 'r' ||
			Config::CHAR == 'R' ||
			Config::CHAR == 't' ||
			Config::CHAR == 'T' ||
			Config::CHAR == 'y' ||
			Config::CHAR == 'Y' ||
			Config::CHAR == 'u' ||
			Config::CHAR == 'U' ||
			Config::CHAR == 'i' ||
			Config::CHAR == 'I' ||
			Config::CHAR == 'o' ||
			Config::CHAR == 'O' ||
			Config::CHAR == 'p' ||
			Config::CHAR == 'P' ||
			Config::CHAR == 'a' ||
			Config::CHAR == 'A' ||
			Config::CHAR == 's' ||
			Config::CHAR == 'S' ||
			Config::CHAR == 'd' ||
			Config::CHAR == 'D' ||
			Config::CHAR == 'f' ||
			Config::CHAR == 'F' ||
			Config::CHAR == 'g' ||
			Config::CHAR == 'G' ||
			Config::CHAR == 'h' ||
			Config::CHAR == 'H' ||
			Config::CHAR == 'j' ||
			Config::CHAR == 'J' ||
			Config::CHAR == 'k' ||
			Config::CHAR == 'K' ||
			Config::CHAR == 'l' ||
			Config::CHAR == 'L' ||
			Config::CHAR == 'z' ||
			Config::CHAR == 'Z' ||
			Config::CHAR == 'x' ||
			Config::CHAR == 'X' ||
			Config::CHAR == 'c' ||
			Config::CHAR == 'C' ||
			Config::CHAR == 'v' ||
			Config::CHAR == 'V' || 
			Config::CHAR == 'b' ||
			Config::CHAR == 'B' ||
			Config::CHAR == 'n' ||
			Config::CHAR == 'N' ||
			Config::CHAR == 'm' ||
			Config::CHAR == 'M'
		) 
	{
		return true;
	}

	return false;
}