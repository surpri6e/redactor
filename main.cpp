#include "main.hpp"

#include <thread>

#include "./headers/add.hpp"
#include "./headers/Redactor.hpp"


bool isWriting = true;

std::string FILE_NAME = "";
const std::string FILE_PATH = "C:\\mdredactor-result\\";

std::vector<std::string> fullText = {};

// DO OPEN OR CREATE FILE

// MAKE FILE IN SATIC DIRECTORY
// OPEN FILE WITH LAYOUT
// ANALYTICS CODE REVEIW

int main() {
	add::startUp(FILE_NAME);

	std::thread checkerTread(add::checker, std::ref(fullText), FILE_NAME + ".md", FILE_PATH);

	while (isWriting) {
		std::string word = " ";
		std::cin >> word;

		while (std::cin.get() != '\n') {
			std::string tmp = "";
			std::cin >> tmp;
			word += " " + tmp;
		}

		fullText.push_back(word);
	}

	checkerTread.join();

	return 0;
}