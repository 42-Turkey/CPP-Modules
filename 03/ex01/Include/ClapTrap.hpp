// Created by Onur Dursun on 12/24/22.

#pragma once

# include <iostream>
# include <utils.hpp>

class ClapTrap {

protected:
	std::string			_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap ( void );
	ClapTrap ( std::string name_ );
	ClapTrap ( const ClapTrap &c );
	~ClapTrap ( void );

	ClapTrap &operator = ( const ClapTrap &c );

	void attack ( const std::string& target );
	void takeDamage ( unsigned int amount );
	void beRepaired ( unsigned int amount );

	unsigned int	getHitPoints ( void ) const;
	unsigned int	getAttackDamage ( void ) const;
	unsigned int	getEnergyPoints ( void ) const;
	const std::string	&getName() const;
};

std::ostream &operator << ( std::ostream &out, const ClapTrap &c );
