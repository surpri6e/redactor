#include "../main.hpp"

#include <fstream>
#include <filesystem>

#include "../headers/Redactor.hpp"
#include "../headers/Config.hpp"

void Redactor::saveFile(const std::vector<char>& text) {
	bool pathExists = std::filesystem::is_directory(Config::FILE_PATH);

	if (pathExists) {
		std::ofstream fileOut(Config::FILE_PATH + Config::FILE_NAME);

		if (!fileOut.is_open()) {
			std::cerr << "Incorrect file name." << std::endl;
			exit(201);
		}

		for (int i = 0; i < text.size(); i++) {
			fileOut << text[i] << '\n';
		}

		fileOut.close();

		return;
	}

	std::filesystem::create_directory(Config::FILE_PATH);
	std::ofstream fileOut(Config::FILE_PATH + Config::FILE_NAME);

	if (!fileOut.is_open()) {

		std::cerr << "Can't open file." << std::endl;
		exit(202);
	}

	for (int i = 0; i < text.size(); i++) {
		fileOut << text[i] << '\n';
	}

	fileOut.close();
}
