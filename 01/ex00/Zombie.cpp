// Created by Onur Dursun on 10/5/22.

#include "Zombie.hpp"

Zombie::Zombie (std::string name_ ): _name ( name_ ) {}

Zombie::~Zombie() {
	std::cout << "[" << _name << "] " << "is destroyed." << std::endl;
}

void	Zombie::setName( std::string name_ ) {
	 name_ = _name;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
