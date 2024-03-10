#include "../main.hpp"

#include <fstream>
#include <filesystem>

#include "../headers/Redactor.hpp"

//ADD HERE OPTIONS
void Redactor::saveFile(const std::vector<std::string>& text, const std::string& name, const std::string& path) {
	bool pathExists = std::filesystem::is_directory(path);

	if (pathExists) {
		std::ofstream fileOut(path + name);

		if (!fileOut.is_open()) {

			std::cerr << "Incorrect file name." << std::endl;
			exit(201);
		}

		for (int i = 0; i < text.size(); i++) {
			fileOut << text[i] << '\n';
		}

		fileOut.close();
	} else {
		std::filesystem::create_directory(path);
		std::ofstream fileOut(path + name);

		if (!fileOut.is_open()) {

			std::cerr << "Can't open file." << std::endl;
			exit(202);
		}

		for (int i = 0; i < text.size(); i++) {
			fileOut << text[i] << '\n';
		}

		fileOut.close();
	}
}
