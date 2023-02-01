// Created by Onur Dursun on 9/9/22.
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

#include <sstream>

class PhoneBook
{
private:
	Contact	list[8];
	void printTable( void );
public:
	void addContact( int idx );
	void SearchContact(void);
};

#endif
