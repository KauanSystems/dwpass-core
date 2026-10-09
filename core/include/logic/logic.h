#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>

namespace Logic {

    int Run_data();
	int Generate_data();

	std::vector<std::string> Compare(const std::filesystem::path& file_patch, const int& text);

} // Namespace Logic.
