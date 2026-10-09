#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>

#include "logic.h"

namespace Logic {

    std::vector<std::string> Compare(const std::filesystem::path& file_patch, const int& text) {
		std::vector<std::string> find_lines;

		if (!std::filesystem::exists(file_patch))
			std::cerr << "\nError: The File Not Exists in the File Patch.\n";

		std::ifstream file(file_patch);
		if (!file.is_open())
			std::cerr << "\nError: to Open File to Read.\n";

		std::string line;
		std::string text_str = std::to_string(text);

		while (std::getline(file, line)) {
			if (line.find(text_str) != std::string::npos)
				find_lines.push_back(line);
		}; // while.

		file.close();
		return find_lines;
	} // Compare.

} // Namespace Compare.
