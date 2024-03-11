#include "../main.hpp"
#include "../headers/parallel.hpp"
#include "../headers/Redactor.hpp"

void parallel::checker(const std::vector<std::string>& text, const std::string& name, const std::string& path) {
	while (true) {
		if (GetKeyState(121) & 0x8000) {
			Redactor::saveFile(text, name, path);
		}
	}
}