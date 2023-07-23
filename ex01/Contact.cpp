#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string darkest_s)
{
	this->_fname = fname;
	this->_lname = lname;
	this->_nname = nname;
	this->_phone = phone;
	this->_darkest_s = darkest_s;
}

Contact::~Contact()
{
}

std::string	Contact::_fill_text(std::string text) const
{
	if (text.length() > WIDTH) {
		return text.substr(0, (WIDTH - 1)) + ".";
	} else {
		return text;
	}
}

void Contact::print_body(void) const
{
	std::string fname = this->_fname;
	std::string lname = this->_lname;
	std::string nname = this->_nname;
	std::cout << std::setw(WIDTH) << std::right << _fill_text(fname) << "|";
	std::cout << std::setw(WIDTH) << std::right << _fill_text(lname) << "|";
	std::cout << std::setw(WIDTH) << std::right << _fill_text(nname) << "|";
	std::cout << std::endl;
}

void Contact::print_infos(void) const
{
	std::cout << CYAN << "------------------------------------------" << RESET << std::endl;
	std::cout << BOLD << "First Name: " << GREEN << this->_fname << RESET << std::endl;
	std::cout << BOLD << "Last Name: " << GREEN << this->_lname << RESET << std::endl;
	std::cout << BOLD << "Nickname: " << GREEN << this->_nname << RESET << std::endl;
	std::cout << BOLD << "Phone Numver: " << GREEN << this->_phone << RESET << std::endl;
	std::cout << BOLD << "Darkest Secret: " << GREEN << this->_darkest_s << RESET << std::endl;
	std::cout << CYAN << "------------------------------------------" << RESET << std::endl;
}
