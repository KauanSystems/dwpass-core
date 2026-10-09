#include <iostream>
#include <vector>
#include <stdexcept>
#include <random>
#include <string>

#if defined(__linux__)
    #include <sys/random.h>
#elif defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    #include <bcrypt.h>
    #pragma comment(lib, "bcrypt.lib")
#else
    #error "Operating system not supported for secure encryption generation."
#endif

#include "logic.h"

namespace Logic {

    void SafeBytes(unsigned char* buffer, size_t size) {
    #if defined(__linux__)
        ssize_t bytes_read = getrandom(buffer, size, 0);
        if (bytes_read < 0 || static_cast<size_t>(bytes_read) != size) {
            throw std::runtime_error("Failed to obtain secure entropy from the Linux kernel [ getrandom ].");
        }
    #elif defined(_WIN32) || defined(_WIN64)
        if (BCryptGenRandom(NULL, buffer, static_cast<ULONG>(size), BCRYPT_USE_SYSTEM_PREFERRED_RNG) != 0) {
            throw std::runtime_error("Failed to obtain secure entropy from Windows [ BCryptGenRandom ].");
        }
    #endif
    } // SafeBytes().

    int GenSafeInt(int min_val, int max_val) {
        if (min_val > max_val) {
            throw std::invalid_argument("min_val must be less than or equal to max_val.");
        }

        unsigned int range = static_cast<unsigned int>(max_val - min_val + 1);
        unsigned int limit = 256 - (256 % range);
        unsigned char byte;

        do {
            SafeBytes(&byte, 1);
        } while (byte >= limit);

        return min_val + (byte % range);
    } // GenSafeInt().

	int Roll_dice() {
		return GenSafeInt(1, 6);
	} // Roll_dice().

	int Generate_data() {
		std::string text = "";
		int convert = 0;

		for (int i = 0; i < 5; i++) {
			int sort_num = Roll_dice();
			text += std::to_string(sort_num);
		}

		convert = std::stoi(text);

		return convert;
	} // Generate_data().

} // Namespace Generator.
