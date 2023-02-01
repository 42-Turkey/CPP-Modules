// Created by Onur Dursun on 10/6/22.

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*zombie = newZombie("Foo");

	zombie->announce();
	randomChump("Shawn");
	delete(zombie);
	return 0;
}