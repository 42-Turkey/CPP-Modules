// Created by Onur Dursun on 12/25/22.

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("no name_clap_name"), _name("no name") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name_) : ClapTrap(name_ + "_clap_name"), _name(name_) {
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& a) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = a;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor of " << _name << " called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& a) {
	_name = a.getName();
	this->ClapTrap::_name = a.getPairentName();
	_hitPoints = a.getHitPoints();
	_energyPoints = a.getEnergyPoints();
	_attackDamage = a.getAttackDamage();
	return *this;
}

const std::string& DiamondTrap::getName(void) const {
	return _name;
}

const std::string& DiamondTrap::getPairentName(void) const{
	return this->ClapTrap::_name;
}

void DiamondTrap::whoAmI() {
	std::cout << getGreen() << "My name is " << _name << getReset() <<  ", my pairent name is " << this->getPairentName() << std::endl;
}
