// Created by Onur Dursun on 10/6/22.

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie ( void );
	~Zombie( void );
	void	setName( std::string name_ );
	void	announce( void );
	
};

Zombie *zombieHorde ( int N , std::string name );

#endif //ZOMBIE_HPP