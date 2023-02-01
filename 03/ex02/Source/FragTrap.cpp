// Created by Onur Dursun on 12/25/22.

#include <FragTrap.hpp>

FragTrap::FragTrap( void ) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const std::string& name_ ) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name_ ;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& a ) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = a;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor of " << getName() << " called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& a ) {
	this->_name = a.getName();
	this->_hitPoints = a.getHitPoints();
	this->_energyPoints = a.getEnergyPoints();
	this->_attackDamage = a.getAttackDamage();
	return *this;
}

void FragTrap::attack( const std::string& target ) {
	( (int)_energyPoints > 0 && (int)_hitPoints > 0 ) ?
	--_energyPoints, std::cout << getGreen() << "FragTrap " << "[" << _name << "]" << getReset() << " attacks "
	<< target << ", causing " << getBlue() << _attackDamage << getReset() << " points of damage!" << std::endl :
	std::cout << "No more enegery." << std::endl;
}

void FragTrap::takeDamage( unsigned int amount_ ) {
	if ((int) (_hitPoints - amount_) <= 0) {
		_hitPoints = 0;
		std::cout << getRed() << "[" << _name << "]" << " died." << getReset() << std::endl;
	} else {
		_hitPoints -= amount_;
		std::cout << getGreen() << "[" << _name << "]" << getReset() << " has taken " << getBlue() << amount_
				  << getReset() << " points of damage!" << std::endl;
	}
}

void FragTrap::beRepaired( unsigned int amount_ ) {
	if ( (int)_energyPoints > 0 && (int)_hitPoints > 0 ) {
		--_energyPoints;
		_hitPoints += amount_;
		std::cout << getGreen() << "FragTrap " << "[" << _name << "]" << getReset() << " is repaired " << amount_ <<
		", hit points to " << getBlue() << _hitPoints << getReset() << std::endl;
	} else
		std::cout << getGreen() << "[" << _name << getReset() << " don't have enough energy to repair." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << getGreen() << "FragTrap " << getName() << getReset() << " said. Give me a high five! Please!" << std::endl;
}
