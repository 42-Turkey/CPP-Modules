// Created by Onur Dursun on 12/26/22.

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal( void ): type( "WrongAnimal" ) {
	std::cout << "Default WrongAnimal: " << type << " was born." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &w ) {
	std::cout << "WrongAnimal cloned from " << w.type << " was born." << std::endl;
	*this = w;
}

WrongAnimal &WrongAnimal::operator= ( const WrongAnimal &w ) {
	std::cout << "WrongAnimal will now be the same as " << w.type << std::endl;
	if ( this != &w )
		this->type = w.type;
	return *this;
}

WrongAnimal::~WrongAnimal ( void ) {
	std::cout << "Deconstructor WrongAnimal: " << type << " died. " << std::endl;
}

void			WrongAnimal::makeSound ( void ) const {
	std::cout << "... generic WrongAnimal sound ..." << std::endl;
}

std::string		WrongAnimal::getType() const { return this->type; }

std::ostream	&operator << ( std::ostream &o, const WrongAnimal *w ) {
	o << "I am an WrongAnimal of type: " << w->getType() << std::endl;
	return o;
}

std::ostream	&operator << ( std::ostream &o, const WrongAnimal &w ) {
	o << "I am an WrongAnimal of type: " << w.getType() << std::endl;
	return o;
}
