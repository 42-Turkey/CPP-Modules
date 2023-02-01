// Created by Onur Dursun on 12/26/22.

#include <Dog.hpp>

Dog::Dog ( void ) {
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Default Dog: " << type << " was born" << std::endl;
}

Dog::Dog ( const Dog &d ) {
	std::cout << "Dog cloned from " << d.type << " was born." << std::endl;
	this->brain = new Brain ( *d.brain );
	*this = d;
}

Dog::~Dog ( void ) {
	delete this->brain;
	std::cout << "Deconstructor Dog: " << type << " died." << std::endl;
}

Dog 		&Dog::operator = ( const Dog &d ) {
	std::cout << "Dog will now be the same as " << d.type << std::endl;
	if ( this->brain )
		delete this->brain;
	this->brain = new Brain ( *(d.brain) );
	if ( this != &d )
		this->type = d.type;
	return  *this;
}

void		Dog::makeSound( void ) const {
	std::cout << "Haaaauf" << std::endl;
}

void	Dog::compareTo ( const Dog &other ) const {
	std::cout << "Now comparing two " << this->type << std::endl;
	std::cout << "My Brain's heap address: " << &this->type << std::endl;
	std::cout << "Other's heap address: " << &other.type << std::endl;
	std::cout << std::endl;

	std::cout << "My brain's ideas \t | \t\t Other brain's ideas" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t | \t\t" << ((other.brain)->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}

std::string Dog::getType( void ) const {return this->type; }
