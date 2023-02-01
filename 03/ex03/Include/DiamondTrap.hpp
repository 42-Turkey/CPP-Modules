// Created by Onur Dursun on 12/25/22.

#pragma once

#include <iostream>

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;
	using FragTrap::_hitPoints;
	using FragTrap::_attackDamage;
	using ScavTrap::_energyPoints;

public:
	DiamondTrap();
	DiamondTrap( const std::string& name_ );
	DiamondTrap( const DiamondTrap& a );
	virtual ~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& a);

	const std::string& getName(void) const;
	const std::string& getPairentName(void) const;
	using FragTrap::getHitPoints;
	using ScavTrap::getEnergyPoints;
	using FragTrap::getAttackDamage;

	using ScavTrap::attack;
	using FragTrap::takeDamage;
	using FragTrap::beRepaired;
	void whoAmI();
};
