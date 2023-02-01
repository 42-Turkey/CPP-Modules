#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB();
	HumanB( std::string name_ );
	~HumanB();
	void	attack( void ) const;
	void	setWeapon ( Weapon &weapon_ );

};

#endif //HUMAN_B_HPP