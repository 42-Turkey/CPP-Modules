// Created by Onur Dursun on 12/25/22.

#include <ScavTrap.hpp>

int main(){
	ScavTrap a("Frans Kafka");
	a.attack("Metroid");
	std::cout << a << std::endl;
	a.takeDamage(9);
	std::cout << a << std::endl;
	a.beRepaired(10);
	std::cout << a << std::endl;
	a.guardGate();

	a.takeDamage(100);
	std::cout << a << std::endl;
	a.attack("Metroid");
	a.takeDamage(2);

	return (0);
}
