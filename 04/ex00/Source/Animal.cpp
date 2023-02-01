// Created by Onur Dursun on 12/26/22.

#include "../Include/Animal.hpp"

Animal::Animal( void ): type( "Animal" ) {
	std::cout << "Default Animal: " << type << " was born." << std::endl;
}

Animal::Animal( const Animal &a ) {
	std::cout << "Animal cloned from " << a.type << " was born." << std::endl;
	*this = a;
}

Animal &Animal::operator= ( const Animal &a ) {
	std::cout << "Animal will now be the same as " << a.type << std::endl;
	if ( this != &a )
		this->type = a.type;
	return *this;
}

Animal::~Animal ( void ) {
	std::cout << "Deconstructor Animal: " << type << " died. " << std::endl;
}

void			Animal::makeSound ( void ) const {
	std::cout << "... generic animal sound ..." << std::endl;
}

std::string		Animal::getType() const { return this->type; }

std::ostream	&operator << ( std::ostream &o, const Animal &a ) {
	o << "I am an animal of type: " << a.getType() << std::endl;
	return o;
}

std::ostream	&operator << ( std::ostream &o, const Animal *a ) {
	o << "I am an animal of type: " << a->getType() << std::endl;
	return o;
}
