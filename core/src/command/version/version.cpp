#include <iostream>

#include "command.h"
#include "program.h"

namespace Command {

    void Version() {
        std::string title = "        " + PROG_VER + "        ";
        int box_width = 25;

       	std::cout << "\n \u256D";
       	for (int i = 0; i < box_width; ++i) std::cout << "\u2500";
       	std::cout << "\u256E\n";

       	std::cout << " \u2502" << title;
       	int remaining_space = box_width - static_cast<int>(title.length());
       	for (int i = 0; i < remaining_space; ++i) std::cout << " ";
       	std::cout << "\u2502\n";

       	std::cout << " \u2570";
       	for (int i = 0; i < box_width; ++i) std::cout << "\u2500";
       	std::cout << "\u256F\n\n";
    }

} // Namespace Command.
