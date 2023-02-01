// Created by Onur Dursun on 10/6/22.

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon 		&_weapon;

public:
	HumanA( std::string name_, Weapon &type_ );
	~HumanA( void );
	void	attack( void ) const;
};

#endif //HUMAN_A_HPP