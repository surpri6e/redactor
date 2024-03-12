#pragma once

#include "../main.hpp"

class Redactor {
public:
	static void saveFile(const std::vector<char>&);

	static bool isFileExist();
};