#pragma once

# include <iostream>
#include "Brain.hpp"

class AAnimal {
protected:
	std::string type;
public:
	AAnimal ( void );
	AAnimal ( const AAnimal &a );
	virtual	~AAnimal ( void );

	AAnimal	&operator = ( const AAnimal &a );

	virtual void			makeSound ( void ) const = 0;
	virtual std::string		getType ( void ) const;
};

std::ostream &operator << ( std::ostream &o, const AAnimal &a );
std::ostream &operator << ( std::ostream &o, const AAnimal *a );
