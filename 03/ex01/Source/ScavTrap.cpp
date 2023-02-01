// Created by Onur Dursun on 12/25/22.

#include <ScavTrap.hpp>

ScavTrap::ScavTrap ( void ) {
	std::cout << "ScavTrap constructor called." << std::endl;
	this->_name =  "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap ( std::string name_ ) {
	std::cout << "ScavTrap name constructor called." << std::endl;
	this->_name =  name_ ;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap ( const ScavTrap &s ) {
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = s;
}

ScavTrap::~ScavTrap ( void ) {
	std::cout << "ScavTrap deconstructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {
	std::cout << "ScavTrap operator overload called." << std::endl;
	if (this != &s ) {
		this->_name = s._name;
		this->_attackDamage = s._attackDamage;
		this->_energyPoints = s._energyPoints;
		this->_hitPoints = s._hitPoints;
	}
	return *this;
}

void	ScavTrap::attack( const std::string &target ) {
	( (int)getHitPoints() > 0 && (int)getEnergyPoints() > 0 ) ?
	--_energyPoints, std::cout << getGreen() << "["<< _name << "]" << getReset() << " attack this "
	<< getBlue() << _attackDamage << getReset() << " target -> " << target << std::endl :
	std::cout << getRed() << "No more energy. Cannot attack." << getReset() << std::endl;
}

void	ScavTrap::guardGate() {
	( (int)getHitPoints() > 0 && (int)getEnergyPoints() > 0 ) ?
	std::cout << getGreen() << "ScavTrap [" << _name << "]" << getReset() << " is now in Gate keeper mode" << std::endl
	: std::cout << getGreen() << "[" << _name << "]" << getReset() << " cant in guard mode because is dead or mana out" << std::endl;
}

std::ostream	&operator << (std::ostream &o, const ScavTrap &c ){
	o << getGreen() << "[" << c.getName() << "]" << getReset() << " has " << getBlue() << c.getHitPoints() << getReset() << " health points, " <<
	  getBlue() << c.getEnergyPoints() << getReset() << " energy, " << getBlue() << c.getAttackDamage() << getReset() << " attack damage.";
	return  (o);
}