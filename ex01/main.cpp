#include <iostream>
#include <cctype>
#include <cmath>
#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    PhoneBook book;
    std::string command;

	while (true) {
		std::cout << "please enter your command: ";
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
			std::cin.clear();
			break;
		}
		else {
			std::cout << "command must be ADD , SEARCH , EXIT" << std::endl;
			continue;
		}
		command.clear();
	}
	std::cin.clear();
	return 0;
}
