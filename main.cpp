#include "main.hpp"

#include <thread>

#include "./headers/add.hpp"
#include "./headers/Redactor.hpp"
#include "./headers/Win.hpp"


bool isWriting = true;

std::string FILE_NAME = "";
const std::string FILE_PATH = "C:\\mdredactor-result\\";

std::vector<std::string> fullText = {};

int main() {
	system("title MDRedactor");
	std::ios::sync_with_stdio(false);

	win::helloMessageBox();

	add::startUp(FILE_NAME);
	FILE_NAME += ".md";

	std::thread checkerTread(add::checker, std::ref(fullText), std::ref(FILE_NAME), std::ref(FILE_PATH));

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