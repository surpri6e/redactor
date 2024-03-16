#include "main.hpp"

#include <thread>

#include "./headers/parallel.hpp"
#include "./headers/Config.hpp"

int main() {
	Config::setupConfig();
		
	std::thread checkerThread( parallel::checker );
	std::thread menuPrinterThread( parallel::menuPrinter );

	checkerThread.join();
	menuPrinterThread.join();

	return 0;
}
