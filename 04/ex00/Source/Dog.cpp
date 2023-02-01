// Created by Onur Dursun on 12/26/22.

#include <Dog.hpp>

Dog::Dog ( void ) {
	this->type = "Dog";
	std::cout << "Default Dog: " << type << " was born" << std::endl;
}

Dog::Dog ( const Dog &d ) {
	std::cout << "Dog cloned from " << d.type << " was born." << std::endl;
	*this = d;
}

Dog::~Dog ( void ) {
	std::cout << "Deconstructor Dog: " << type << " died." << std::endl;
}

Dog 		&Dog::operator = ( const Dog &d ) {
	std::cout << "Dog will now be the same as " << d.type << std::endl;
	if ( this != &d )
		this->type = d.type;
	return  *this;
}

void		Dog::makeSound( void ) const {
	std::cout << "Haaaauf" << std::endl;
}

std::string Dog::getType( void ) const {return this->type; }
