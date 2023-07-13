#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(void)
{
	static int i;
	i = 0;

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
	this->_contacts[i] = contact;
	i++;
	std::cout << i << std::endl;
	if (i = 8)
		i = 0;
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

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "NickName" << "|";
	std::cout << "--------------------------------------------" << std::endl;
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
