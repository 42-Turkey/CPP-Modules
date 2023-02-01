// Created by Onur Dursun on 12/26/22.

#include <Cat.hpp>

Cat::Cat ( void ) {
	this->type = "Cat";
	std::cout << "Default Cat: " << type << " was born" << std::endl;
}

Cat::Cat ( const Cat &c ) {
	std::cout << "Cat cloned from " << c.type << " was born." << std::endl;
	*this = c;
}


Cat 		&Cat::operator = ( const Cat &c ) {
	std::cout << "Cat will now be the same as " << c.type << std::endl;
	if ( this != &c )
		this->type = c.type;
	return *this;
}

Cat::~Cat ( void ) {
	std::cout << "Deconstructor Cat: " << type << " died." << std::endl;
}

void		Cat::makeSound( void ) const {
	std::cout << "Meoooow" << std::endl;
}

std::string Cat::getType( void ) const { return this->type; }
