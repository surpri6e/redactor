#pragma once 

#include "../main.hpp"

class Config {
public:
	static const int MAIN_COLOR;
	static const int MAIN_COLOR_LIGHTEN;

	static const std::size_t HEIGHT_CONSOLE_COLS;
	static const std::size_t WIDTH_CONSOLE_LINES;

	static const int xMenu;
	static const int yMenu;

	static const std::string FILE_PATH;

	static const std::size_t SIZE_OF_MENU;
	static const std::string Menu[];
	static int activeMenu;

	static bool isWriting;

	static std::string FILE_NAME;

	static std::vector<char> TEXT;

	static char CHAR;

	static void setupConfig();
};