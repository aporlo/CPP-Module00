#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{

public:
	PhoneBook();

	~PhoneBook();

	void add_contact(void);
	void print_contacts(void) const;
	void find_contact(void) const;

private:
	Contact _contacts[8];
};

#endif
