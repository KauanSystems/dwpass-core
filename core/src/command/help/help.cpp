#include <iostream>
#include <iomanip>
#include <array>
#include <string_view>

#include "command.h"
#include "program.h"

namespace Command {

    struct Command {
		std::string_view command;
		std::string_view description;
		std::string_view type;
	};

	constexpr std::array COMMANDS = {
        Command {
            "-e, export",
            "Export Diceware File.",
            "Command"
        },

        Command {
            "-g, gen",
            "Generate Diceware.",
            "Command"
        },

        Command {
            "-i, input",
            "Input your Diceware Codes.",
            "Command"
        },

        Command {
            "-w, word",
            "Import a Diceware Wordlist.",
            "Command"
        },

        Command {
            "-h, --help",
            "Command Help.",
            "Flag"
        },

        Command {
            "-l, --logo",
            "View Program Logo.",
            "Flag"
        },
		
		Command {
            "-s, --system",
            "Detect Operacional System.",
            "Flag"
        },
        
        Command {
            "-v, --version",
            "View Program Version.",
            "Flag"
        }
	};

	void Help_Table() {
		std::cout << '\n'
			      << PROG_NAME
				  << " -> "
			      << PROG_VER
				  << "\n\n"
				  << "Usage:\n"
				  << " "
				  << '\t' << NAME
				  << " <command> [options]\n\n";

		std::string_view current_category;

		for (const auto cmd : COMMANDS) {
		    if (cmd.type != current_category) {
				current_category = cmd.type;
				std::cout << "\n" <<current_category << ":\n";
			}

			std::cout << "  "
			          << std::left << std::setw(25)
			          << cmd.command
			          << cmd.description
			          << "\n";
		}

		std::cout << "\n\n";
	} // Help.

} // Namespace Command.
