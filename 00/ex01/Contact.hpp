// Created by Onur Dursun on 9/9/22.

#ifndef CONTACT_HPP
# define CONTACT_HPP


# include <iostream>
# include <iomanip>
# include "utils.hpp"

using std::cout;
using std::string;
using std::setw;
using std::endl;

class Contact
{
private:
	std::string	_name;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	void	addContact( void );
	void	printContact( int idx );
	std::string	getName( void );
	std::string	getLastName( void );
	std::string	getNickName( void );
};


#endif
