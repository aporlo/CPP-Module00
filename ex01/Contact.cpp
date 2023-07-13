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

void Contact::print_head(void) const
{
	std::string fname = this->_fname;
	std::string lname = this->_lname;
	std::string nname = this->_nname;
	if (fname.length() > 10)
		fname = fname.substr(8, 9) + ".";
	if (lname.length() > 10)
		lname = lname.substr(8, 9) + ".";
	if (nname.length() > 10)
		nname = nname.substr(8, 9) + ".";
	std::cout << std::setw(10) << std::right << fname << "|";
	std::cout << std::setw(10) << std::right << lname << "|";
	std::cout << std::setw(10) << std::right << nname << std::endl;

}

void Contact::print_infos(void) const {
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "First Name: " << this->_fname << std::endl;
	std::cout << "Last Name: " << this->_lname << std::endl;
	std::cout << "Nickname: " << this->_nname << std::endl;
	std::cout << "Phone Numver: " << this->_phone << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_s << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}
