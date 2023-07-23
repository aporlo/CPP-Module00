#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contacts_number(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(void)
{
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string darkest_s;

	std::cout << "First Name:" << std::endl;
	while (fname.empty())
		std::getline (std::cin, fname);
	std::cout << "Last Name:" << std::endl;
	while (lname.empty())
		std::getline (std::cin, lname);
	std::cout << "Nickname:" << std::endl;
	while (nname.empty())
		std::getline (std::cin, nname);
	std::cout << "Phone Number:" << std::endl;
	while (phone.empty())
		std::getline (std::cin, phone);
	if(_check_number(phone) == "False")
	{
		std::cout << RED << "Phone number must be number!" << RESET << std::endl;
		add_contact();
	}
	else
	{
		std::cout << "Darkest secret:" << std::endl;
		while (darkest_s.empty())
			std::getline (std::cin, darkest_s);
		Contact contact(fname, lname, nname, phone, darkest_s);
		if (this->contacts_number < MAX_CNT) {
			this->_contacts[contacts_number] = contact;
			this->contacts_number++;
			if (this->contacts_number == MAX_CNT)
				this->contacts_number = 0;
		}
	}
}


void PhoneBook::_get_phone(std::string phone)
{
	std::cout << "Phone Number:" << std::endl;
	while (phone.empty())
	{
		std::getline (std::cin, phone);
		if(_check_number(phone) == "False")
		{
			std::cout << RED << "Phone number must be number!" << RESET << std::endl;
			
		}
	}
}

void PhoneBook::find_contact(void) const
{
	this->print_contacts();
	std::cout << GRAY << "Which contact do you want to see?" << std::endl;
	std::cout << "> " << RESET;
	int input;
	std::cin >> input;
	if (std::cin.fail() || input > (MAX_CNT - 1) || input < 0)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << RED << "no such index exists!" << RESET << std::endl;
		return ;
	}
	this->_contacts[input].print_infos();
	std::cin.ignore(10000, '\n');
}

void PhoneBook::print_contacts(void) const
{
	int i;
	std::cout << YELLOW << "----------------------------------------------" << std::endl;
	std::cout << YELLOW << "|" << std::setw(WIDTH) << std::right << "Index  " << "|";
	std::cout << YELLOW << std::setw(WIDTH) << std::right << "First Name" << "|";
	std::cout << YELLOW <<std::setw(WIDTH) << std::right << "Last Name" << "|";
	std::cout << YELLOW << std::setw(WIDTH) << std::right << "NickName " << "|" << std::endl;
	std::cout << YELLOW << "----------------------------------------------" << RESET << std::endl;
	i = 0;
	while (i < MAX_CNT)
	{
		std::cout << YELLOW << "|" << std::setw(WIDTH) << std::right << i << "|";
		this->_contacts[i].print_body();
		i++;
	}

}

std::string	PhoneBook::_check_number(std::string phone)
{
	int	len = phone.length();

	for( int i = 0; i < len; i++ ) {
      if( !isdigit( phone[i] )) {
         return "False";
      }
   }
   return "TRUE";
}