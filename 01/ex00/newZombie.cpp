// Created by Onur Dursun on 10/6/22.

#include "Zombie.hpp"

Zombie	*newZombie ( std::string name ) {
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}