// Created by Onur Dursun on 12/26/22.

#include "../Include/AAnimal.hpp"

AAnimal::AAnimal( void ): type( "AAnimal" ) {
	std::cout << "Default AAnimal: " << type << " was born." << std::endl;
}

AAnimal::AAnimal( const AAnimal &a ) {
	std::cout << "AAnimal cloned from " << a.type << " was born." << std::endl;
	*this = a;
}

AAnimal &AAnimal::operator= ( const AAnimal &a ) {
	std::cout << "AAnimal will now be the same as " << a.type << std::endl;
	if ( this != &a )
		this->type = a.type;
	return *this;
}

AAnimal::~AAnimal ( void ) {
	std::cout << "Deconstructor AAnimal: " << type << " died. " << std::endl;
}

void			AAnimal::makeSound ( void ) const {
	std::cout << "... generic AAnimal sound ..." << std::endl;
}

std::string		AAnimal::getType() const { return this->type; }

std::ostream	&operator << ( std::ostream &o, const AAnimal &a ) {
	o << "I am an AAnimal of type: " << a.getType() << std::endl;
	return o;
}

std::ostream	&operator << ( std::ostream &o, const AAnimal *a ) {
	o << "I am an AAnimal of type: " << a->getType() << std::endl;
	return o;
}
