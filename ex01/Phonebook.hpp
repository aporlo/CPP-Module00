#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <cctype>
#include "Contact.hpp"

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define MAGENTA	"\033[0;35m"
# define CYAN		"\033[0;36m"
# define GRAY		"\033[0;37m"
# define LRED		"\033[0;91m"
# define BOLD		"\033[1m"
# define GBOLD		"\033[1;37m"
# define RESET		"\033[0m"

# define MAX_CNT			8
# define WIDTH				10

class PhoneBook
{

public:
	PhoneBook();

	~PhoneBook();

	void add_contact(void);
	bool add_new_contact();
	void print_contacts(void) const;
	void find_contact(void) const;

private:
	int			contacts_number;
	Contact _contacts[MAX_CNT];
	std::string	_check_number(std::string phone);
	void 		_get_phone(std::string phone);
};

#endif
