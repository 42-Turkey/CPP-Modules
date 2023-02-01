// Created by Onur Dursun on 10/6/22.

#include "Zombie.hpp"

int	main( void )
{
	Zombie *horde;

	horde = zombieHorde(3, "zombie");
	for ( int i = 0; i < 3; i++ )
		horde->announce();
	delete[] horde;
	return (0);
}