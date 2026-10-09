#include <iostream>

#include "command.h"

namespace Command {

    void System() {
        #if defined(__linux__)
            std::cout << "\n[Operating System]: Linux Detected - [Using getrandom].\n\n";
        #elif defined(_WIN32) || defined(_WIN64)
            std::cout << "\n[Operating System]: Windows Detected - [Using BCryptGenRandom].\n\n";
        #else
            std::cout << "\n[Operating System]: Not Detected - Unknown.\n\n";
        #endif
    } // System()

} // Namespace Command.
