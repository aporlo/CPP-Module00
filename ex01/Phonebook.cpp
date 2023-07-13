#include "Phonebook.hpp"

PhoneBook::PhoneBook() : contacts_number(0) , i(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(void)
{
	// int i;
	// i = 0;

	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string darkest_s;

	std::cout << "First Name:" << std::endl;
	while (fname.empty())
		std::cin >> fname;
	std::cout << "Last Name:" << std::endl;
	while (lname.empty())
		std::cin >> lname;
	std::cout << "Nickname:" << std::endl;
	while (nname.empty())
		std::cin >> nname;
	std::cout << "Phone Numver:" << std::endl;
	while (phone.empty())
		std::cin >> phone;
	std::cout << "Darkest secret:" << std::endl;
	while (darkest_s.empty())
		std::cin >> darkest_s;
	Contact contact(fname, lname, nname, phone, darkest_s);
	// if (i < 8)
	// {
	if (this->contacts_number < 8) {
		this->_contacts[contacts_number] = contact;
		this->contacts_number++;
		std::cout << contacts_number << std::endl;
	}
	else if (this->contacts_number == 8 && i << 8)
	{
		std::cout << i << std::endl;
		std::cout << "hollw" << std::endl;
		this->_contacts[contacts_number - i] = contact;
		i++;
		if (i == 8)
			i = 0;
	}
	// 	i++;
	// }
	// std::cout << i << std::endl;
}

void PhoneBook::find_contact(void) const
{
	this->print_contacts();
	std::cout << "type the index of the contact you want to see" << std::endl;
	std::cout << "> ";
	int input;
	std::cin >> input;
	if (std::cin.fail() || input > 7 || input < 0)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	this->_contacts[input].print_infos();
}

void PhoneBook::print_contacts(void) const
{
	int i;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "NickName" << "|" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	// std::cout << std::setw(10) << std::right << "Phone Number" << "|";
	// std::cout << std::setw(10) << std::right << "darkest secret" << "|";
	i = 0;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		this->_contacts[i].print_head();
		i++;
	}

}
