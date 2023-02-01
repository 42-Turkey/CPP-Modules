// Created by Onur Dursun on 12/25/22.

#include <ClapTrap.hpp>

ClapTrap::ClapTrap ( void ) : _name( "default" ), _hitPoints ( 100 ), _energyPoints ( 50 ), _attackDamage ( 20 ) {
	std::cout << "ClapTrap: Default constructor called." << std::endl;
}

ClapTrap::ClapTrap ( std::string name_ ) : _name ( name_ ), _hitPoints ( 100 ), _energyPoints ( 50 ), _attackDamage ( 20 ){
	std::cout << "ClapTrap: Name constructor called." << std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap &c ) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
 	*this = c;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
	std::cout << "ClapTrap operator overload called." << std::endl;
	if (this != &c ) {
		this->_name = c._name;
		this->_attackDamage = c._attackDamage;
		this->_energyPoints = c._energyPoints;
		this->_hitPoints = c._hitPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap ( void ) {
	std::cout << "ClapTrap deconstructor called." << std::endl;
}

void	ClapTrap::attack ( const std::string &target ) {
	( (int)_energyPoints > 0 && (int)_hitPoints > 0 ) ? --_energyPoints, std::cout << getRed() << " ClapTrap [" << _name << "]" << getReset() << "attacks "
		<< target << ", causing " << _attackDamage << " points of damage!" << std::endl :
		std::cout << "No more enegery." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount_ ) {
	if ( (int)_energyPoints > 0 && (int)_hitPoints > 0 ) {
		--_energyPoints;
		_hitPoints += amount_;
	} else
		std::cout << getGreen() << "[" << _name << getReset() << " don't have enough energy to repair." << std::endl;}

void	ClapTrap::takeDamage( unsigned int amount_ ) {
	if ( (int)( _hitPoints - amount_ ) <= 0 ) {
		_hitPoints = 0;
		std::cout << getRed() << "[" << _name << "]" << " died."<< getReset() << std::endl;
	} else {
		_hitPoints -= amount_;
		std::cout << getGreen() << "[" << _name << "]" << getReset() << " has taken " << getBlue() << amount_ << getReset() << " points of damage!" << std::endl;
	}
}

unsigned int		ClapTrap::getAttackDamage() const { return _attackDamage; }

unsigned int		ClapTrap::getEnergyPoints() const { return _energyPoints; }

unsigned int		ClapTrap::getHitPoints() const { return _hitPoints; }

const std::string	&ClapTrap::getName() const { return _name; }

std::ostream &operator << (std::ostream &o, const ClapTrap &c ) {
	o << getGreen() << "[" << c.getName() << "]" << getReset() << " has " << getBlue() << c.getHitPoints() << getReset() << " health points, " <<
	  getBlue() << c.getEnergyPoints() << getReset() << " energy, " << getBlue() << c.getAttackDamage() << getReset() << " attack damage.";
	return  (o);
}
