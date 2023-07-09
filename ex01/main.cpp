#include <iostream>

std::string getcommand() {
    std::string	command;

	std::cout << "please enter your command: ";
	std::getline(std::cin, command);
	if (std::cin.eof()) {
		exit(0);
	}
	return command;
}

class Contacts
{
	public:
    	std::string fname;
		std::string lname;
		std::string nname;
		std::string phone;
		std::string darkest_s;

	Contacts(std::string fname, std::string lname, std::string nname, std::string phone, std::string darkest_s)
	{
		this->fname = fname;
		this->lname = lname;
		this->nname = nname;
		this->phone = phone;
		this->darkest_s = darkest_s;
	}


    public:
        void set_contact()
        {
            std::cout <<"enter firstname:";
			std::getline(std::cin, fname);
            std::cout <<"enter lastname:";
            std::getline(std::cin, lname);
            std::cout <<"enter nickname:";
            std::getline(std::cin, nname);
            std::cout <<"enter phone number:";
            std::getline(std::cin, phone);
            std::cout <<"enter darkest secret:";
            std::getline(std::cin, darkest_s);
        }

        void display_contact()
        {
            std::cout <<fname<<"\t"<<lname<<"\t"<<nname<<"\t"<<phone<<"\t"<<darkest_s<<"\t" << std::endl;
        }
};

int main()
{
    Contacts Contacts;
    std::string command;

    // std::cout << "please enter your command: ";
    // std::getline(std::cin >> std::ws, command);
	while (true) {
		command = getcommand();
		if (command.empty())
			continue;
		if (command == "EXIT") {
			std::cout << "bye bye" << std::endl;
			break;
		} else if (command == "ADD") {
            Contacts.set_contact();
        } else if (command == "SEARCH") {
			 std::cout << "SEARCH" << std::endl;
			 Contacts.display_contact();
		} else {
			std::cout << "command must be ADD , SEARCH , EXIT" << std::endl;
		}
    }
    return 0;
}
