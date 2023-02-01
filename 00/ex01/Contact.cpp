// Created by Onur Dursun on 9/9/22.

#include "Contact.hpp"

void Contact::addContact( void ) {
	std::cout << "First Name: ";
	_name = takeInput();
	std::cout << "Last Name: ";
	_lastName = takeInput();
	std::cout << "Nickname: ";
	_nickName = takeInput();
	std::cout << "Phone Number: ";
	_phoneNumber = takeInput();
	std::cout << "Darkest Secret: ";
	_darkestSecret = takeInput();
}

void	Contact::printContact( int idx ) {
	std::cout << std::setw(10) << "Contact: " << idx << std::endl;
	std::cout << std::setw(10) << "Name: " << _name << std::endl;
	std::cout << std::setw(10) << "Last Name: " << _lastName << std::endl;
	std::cout << std::setw(10) << "Nick Name: " << _nickName << std::endl;
	std::cout << std::setw(10) << "Phone: " << _phoneNumber << std::endl;
	std::cout << std::setw(10) << "Secret: " << _darkestSecret << std::endl;
}

std::string Contact::getName( void ) {
	return _name;
}

std::string Contact::getLastName( void ) {
	return _lastName;
}
std::string Contact::getNickName( void ) {
	return _nickName;
}
