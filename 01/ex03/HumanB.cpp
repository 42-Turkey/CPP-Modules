// Created by Onur Dursun on 10/6/22.

#include "HumanB.hpp"

HumanB::HumanB ( void ) {}

HumanB::HumanB ( std::string name_ ): _name( name_ ), _weapon(NULL) {}

HumanB::~HumanB ( void ) {}

void	HumanB::attack ( void ) const {
	if ( !this->_weapon )
		std::cout << _name << " has no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon_ ) {
	_weapon = &weapon_;
}