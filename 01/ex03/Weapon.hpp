// Created by Onur Dursun on 10/6/22.

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	_weapon;

public:
	Weapon ( void );
	Weapon (std::string type_ );
	~Weapon ( void );

	const std::string	&getType ( void ) const;
	void				setType ( std::string type_ );
};

#endif