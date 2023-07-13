#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>


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

class Contact {
	//Constuctors
public:
	Contact();
	Contact(std::string fname,
		std::string lname,
		std::string nname,
		std::string phone,
		std::string darkest_s);
	//Destructor
	~Contact();

	void print_head(void) const;
	void print_infos(void) const;
	
private:
	std::string _fname;
	std::string _lname;
	std::string _nname;
	std::string _phone;
	std::string _darkest_s;


};

#endif
