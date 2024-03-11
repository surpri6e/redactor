#include "../main.hpp"
#include "../headers/Config.hpp"
#include "../headers/Win.hpp"

const int Config::MAIN_COLOR = FOREGROUND_RED | FOREGROUND_BLUE;
const int Config::MAIN_COLOR_LIGHTEN = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY;

const std::size_t Config::HEIGHT_CONSOLE_COLS = 120;
const std::size_t Config::WIDTH_CONSOLE_LINES = 40;

const int Config::xMenu = Config::HEIGHT_CONSOLE_COLS / 2 - 10;
const int Config::yMenu = Config::WIDTH_CONSOLE_LINES / 2 - 3;

const std::string Config::FILE_PATH = "C:\\mdredactor-result\\";

const std::size_t Config::SIZE_OF_MENU = 3;
const std::string Config::Menu[] = { "New file", "Open older", "Exit" };

bool Config::isWriting = false;

std::string Config::FILE_NAME = "";

void Config::setupConfig() {
	system("title MDRedactor");
	system("mode con cols=120 lines=40");

	std::ios::sync_with_stdio(false);

	Win::helloMessageBox();
}