// Created by Onur Dursun on 12/25/22.

#pragma once

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap {
public:
	ScavTrap ( void );
	ScavTrap ( std::string name_ );
	ScavTrap ( const ScavTrap &s );
	~ScavTrap ( void );

	ScavTrap	&operator = ( const ScavTrap &s );

	void		guardGate ( void );
	void		attack ( const std::string &target );

};

std::ostream	&operator << ( std::ostream &o, const ScavTrap &s );