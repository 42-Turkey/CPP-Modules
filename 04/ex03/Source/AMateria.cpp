#include "../Include/AMateria.hpp"

AMateria::AMateria ( void ) : type("default type") {
	std::cout << "Abstract materia: Default constructor called" << std::endl;
}

AMateria::AMateria ( std::string const &type ) {
	this->type = type;
	std::cout << "Abstract materia: Name constructor called" << std::endl;
}

AMateria::AMateria( AMateria const &a ) {
	std::cout << "Abstract materia: Copy constructor called" << std::endl;
	this->type = a.type;
}

AMateria::~AMateria( void ) {
	std::cout << "Abstract materia: Deconstructor called" << std::endl;
}

AMateria &AMateria::operator=( const AMateria &a ) {
	std::cout << "Abstract materia: Copy assignment constructor called" << std::endl;
	if ( this != &a )
		type = a.type;
	return  ( *this );
}

std::string const &AMateria::getType() const { return ( this->type ); }

void AMateria::use( ICharacter &target ) { std::cout << "Materia used on target " << target.getName() << std::endl; }
