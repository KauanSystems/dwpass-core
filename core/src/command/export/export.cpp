#include <algorithm>
#include <fstream>
#include <filesystem>
#include <string>

#include "command.h"
#include "program.h"

namespace Command {
    
   void Export(const std::string& word, const std::string& folder_path = "") {
    
    std::filesystem::path file_path;

    if (folder_path.empty()) {
        file_path = FILE_NAME;
    } else {
        std::filesystem::path dir(folder_path);
        file_path = dir / FILE_NAME;
    }

    if (file_path.has_parent_path() && !std::filesystem::exists(file_path.parent_path())) {
        std::filesystem::create_directories(file_path.parent_path());
    }

    std::ofstream file(file_path, std::ios::app);

    if (file.is_open()) {
        file << word << std::endl;
        file.close();
    }
} // Export().

} // Namespace Command.
