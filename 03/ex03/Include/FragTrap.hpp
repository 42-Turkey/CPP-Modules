// Created by Onur Dursun on 12/25/22.

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	FragTrap ( void );
	FragTrap ( const string &name_ );
	FragTrap ( const FragTrap &a );
	virtual ~FragTrap ( void );

	FragTrap &operator = ( const FragTrap &a );

	void	attack ( const string &target );
	void	takeDamage ( unsigned  int amount_ );
	void	beRepaired ( unsigned  int amount_ );
	void	highFivesGuys ( void );
};
