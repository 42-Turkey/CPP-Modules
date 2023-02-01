// Created by Onur Dursun on 12/25/22.

#include <FragTrap.hpp>

int main(){
	FragTrap	bot("Hasan");

	bot.attack("Mehmet");
	bot.takeDamage(2);
	std::cout << bot << std::endl;
	bot.beRepaired(1);
	std::cout << bot << std::endl;
	bot.takeDamage(25);
	bot.highFivesGuys();
	std::cout << bot << std::endl;

	return (0);
}
