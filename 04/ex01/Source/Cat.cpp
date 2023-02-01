// Created by Onur Dursun on 12/26/22.

#include <Cat.hpp>

Cat::Cat ( void ) {
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Default Cat: " << type << " was born" << std::endl;
}

Cat::Cat ( const Cat &c ) {
	this->brain = new Brain ( *(c.brain) );
	std::cout << "Cat cloned from " << c.type << " was born." << std::endl;
	*this = c;
}


Cat 		&Cat::operator = ( const Cat &c ) {
	std::cout << "Cat will now be the same as " << c.type << std::endl;
	if ( this->brain )
		delete this->brain;
	this->brain = new Brain ( *(c.brain) );
	if ( this != &c )
		this->type = c.type;
	return *this;
}

Cat::~Cat ( void ) {
	delete	brain;
	std::cout << "Deconstructor Cat: " << type << " died." << std::endl;
}

void		Cat::makeSound( void ) const {
	std::cout << "Meoooow" << std::endl;
}

void	Cat::compareTo ( const Cat &other_cat ) const {
	std::cout << "Now comparing two " << this->type << std::endl;
	std::cout << "My Brain's heap address: " << &this->type << std::endl;
	std::cout << "Other's heap address: " << &other_cat.type << std::endl;
	std::cout << std::endl;

	std::cout << "My brain's ideas \t | \t\t Other brain's ideas" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t | \t\t" << ((other_cat.brain)->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}

std::string Cat::getType( void ) const { return this->type; }
