// Created by Onur Dursun on 12/25/22.

#include <DiamondTrap.hpp>

int main(){
	DiamondTrap a("Frans Kafka");
	std::cout << a << std::endl;
	a.whoAmI();
	a.attack("Metroid");
	a.takeDamage(9);
	std::cout << a << std::endl;
	a.beRepaired(10);

	a.takeDamage(10);
	std::cout << a << std::endl;
	a.attack("Metroid");
	return (0);


}


