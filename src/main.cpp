#include <iostream>

int main(int argc, char* argv[]) {
    if (argc == 1) {
		std::cerr << "\x1b[1;31mInvalid number of arguments, please try trin help\n\x1b[1;0m";
		return -1;
	}

    std::string Command(argv[1]);

    if (Command == "help") {
        std::cout << "\x1b[1;39mTriangle is a package manager for the language Hexagn.\n\x1b[1;0m"
                     "Usage: \x1b[1;39mtrin <commands> [args..]     \n"
                     "                                              \n"
                     "Avalible commands:                            \n"
                     "  - install       (Installs a package)        \n"
                     "  - uninstall     (Uninstalls a package)      \n"
                     "  - update        (Updates a package)         \n"
                     "  - help          (Displays a help message)   \n"
                     "  - version       (Displays the version)      \n\x1b[1;0m"
        ;
    } else {
		std::cerr << "\x1b[1;31mInvalid command, please try trin help\n\x1b[1;0m";
    }
}