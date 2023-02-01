// Created by Onur Dursun on 10/6/22.

#include "HumanA.hpp"

HumanA::HumanA ( std::string name_, Weapon &weapon_ ): _name( name_ ), _weapon( weapon_ ) {}

HumanA::~HumanA ( void ) {}

void	HumanA::attack ( void ) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}