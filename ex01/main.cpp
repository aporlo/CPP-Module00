#include <iostream>
#include <cctype>
#include "Contact.hpp"
#include "Phonebook.hpp"

// void getcommand(std:string &command) {
// 	std::cout << "please enter your command: ";
// 	std::getline(std::sring);
// 	if (std::cin.eof()) {
// 		exit(0);
// 	}
// 	return command;
// }

int main()
{
    PhoneBook book;
    std::string command;

	while (true) {
		std::cout << "please enter your command: ";
		std::cout << command << std::endl;
		if (!std::getline(std::cin, command))
		{
			std::cin.clear();
			break;
		}
		if (command == "ADD") {
            book.add_contact();
		} else if (command == "SEARCH") {
			 std::cout << "SEARCH" << std::endl;
			 book.find_contact();
		} else if (command == "EXIT") {
			std::cout << "bye bye" << std::endl;
			break;
		}
		else {
			std::cout << "command must be ADD , SEARCH , EXIT" << std::endl;
		}
		std::cin.ignore(20, '\n');
		command.clear();
    }
	std::cin.clear();
    return 0;
}
