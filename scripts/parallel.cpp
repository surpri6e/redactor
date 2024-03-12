#include "../main.hpp"
#include "../headers/parallel.hpp"
#include "../headers/Redactor.hpp"
#include "../headers/Config.hpp"

void parallel::checker() {
	while (Config::isWriting) {
		if (GetKeyState(121) & 0x8000) {
			Redactor::saveFile(Config::TEXT);
		}
	}
}