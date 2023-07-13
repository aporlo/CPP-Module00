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

    // std::cout << "please enter your command: ";
    // std::getline(std::cin >> std::ws, command);
	while (true) {
		std::cout << "please enter your command: ";
		if (!std::getline(std::cin,command))
			break;
		if (command.empty())
			continue;
		if (command == "ADD") {
            book.add_contact();
            // if(!book.add_new_contact())
            //     std::cout << "Error: too many contacts" << std::endl;
		} else if (command == "SEARCH") {
			 std::cout << "SEARCH" << std::endl;
			 book.find_contact();
		} else if (command == "EXIT") {
			std::cout << "bye bye" << std::endl;
			break;
		} else {
			std::cout << "command must be ADD , SEARCH , EXIT" << std::endl;
		}
		std::cin.clear();
    }
	std::cin.clear();
    return 0;
}
