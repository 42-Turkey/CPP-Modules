// Created by Onur Dursun on 10/5/22.

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>

class Zombie {
public:
	Zombie( std::string name_ );
	~Zombie( void );
	void	announce( void );
	void	setName( std::string name_ );

private:
	std::string _name;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif //ZOMBIE_HPP
