#include "../main.hpp"
#include "../headers/config.hpp"
#include "../headers/Win.hpp"

void config::setupConfig() {
	system("title MDRedactor");
	system("mode con cols=120 lines=40");

	std::ios::sync_with_stdio(false);

	Win::helloMessageBox();
}