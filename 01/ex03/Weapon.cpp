// Created by Onur Dursun on 10/6/22.

# include "Weapon.hpp"

Weapon::Weapon ( void ) {}

Weapon::Weapon ( std::string name_ ): _weapon( name_ ) {}

Weapon::~Weapon( void ) {}

void	Weapon::setType ( std::string name_ ) {
	_weapon = name_;
}

const std::string &Weapon::getType ( void ) const {
	return ( _weapon );
}
