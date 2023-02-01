// Created by Onur Dursun on 12/26/22.

//#include "../Include/Brain.hpp"
#include <Brain.hpp>

Brain::Brain ( void ) {
	this->ideas = new std::string [100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Brainy brain";
	std::cout << "A Brain has been constructed and filled with" << std::endl;
}

Brain::Brain(const Brain &b) {
	std::cout << "Brain: Copy constructor called." << std::endl;
	std::string	*ref = b.getIdeas();
	this->ideas = new std::string [100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref[i] + " stolen";
	std::cout << "A Brain has been copy constructored and stole the other's ideas" << std::endl;
}

Brain::~Brain( void ) {
	delete[] ideas;
	std::cout << "A Brain has been destroyed." << std::endl;
}

Brain &Brain::operator=(const Brain &b) {
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = b.ideas[i];
	return *this;
}

std::string *Brain::getIdeas() const { return this->ideas; }
