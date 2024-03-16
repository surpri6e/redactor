#include "../main.hpp"

#include <fstream>
#include <filesystem>

#include "../headers/Redactor.hpp"
#include "../headers/Config.hpp"

bool Redactor::isFileExist() {
	std::ifstream iff( Config::FILE_PATH + Config::FILE_NAME );
	if (!iff.is_open()) {
		iff.close();
		return false;
	}
	else {
		iff.close();
		return true;
	}
}

void Redactor::saveFile() {
	auto pathExists = std::filesystem::is_directory(Config::FILE_PATH);

	if (pathExists) {
		std::ofstream fileOut(Config::FILE_PATH + Config::FILE_NAME);

		if (!fileOut.is_open()) {
			std::cout << std::endl;
			std::cerr << "Error 201." << std::endl;
			exit(201);
		}

		for (int i = 0; i < Config::TEXT.size(); i++) {
			fileOut << Config::TEXT[i] << '\n';
		}

		fileOut.close();

		return;
	}

	std::filesystem::create_directory(Config::FILE_PATH);
	std::ofstream fileOut(Config::FILE_PATH + Config::FILE_NAME);

	if (!fileOut.is_open()) {
		std::cout << std::endl;
		std::cerr << "Error 202." << std::endl;
		exit(202);
	}

	for (int i = 0; i < Config::TEXT.size(); i++) {
		fileOut << Config::TEXT[i] << '\n';
	}

	fileOut.close();
}
