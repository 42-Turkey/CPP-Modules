// Created by Onur Dursun on 12/26/22.

#include <WrongCat.hpp>

WrongCat::WrongCat ( void ) {
	this->type = "Wrong Cat";
	std::cout << "Default WrongCat: " << type << " was born" << std::endl;
}

WrongCat::WrongCat ( const WrongCat &c ) {
	std::cout << "WrongCat cloned from " << c.type << " was born." << std::endl;
	*this = c;
}


WrongCat 		&WrongCat::operator = ( const WrongCat &c ) {
	std::cout << "WrongCat will now be the same as " << c.type << std::endl;
	if ( this != &c )
		this->type = c.type;
	return *this;
}

WrongCat::~WrongCat ( void ) {
	std::cout << "Deconstructor WrongCat: " << type << " died." << std::endl;
}

void		WrongCat::makeSound( void ) const {
	std::cout << "Wrong meoow" << std::endl;
}

std::string WrongCat::getType( void ) const {return this->type; }
