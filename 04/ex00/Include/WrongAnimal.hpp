#pragma once

# include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal ( void );
	WrongAnimal ( const WrongAnimal &w );
	~WrongAnimal ( void );

	WrongAnimal	&operator = ( const WrongAnimal &w );

	void			makeSound ( void ) const;
	std::string		getType ( void ) const;
};

std::ostream &operator << ( std::ostream &o, const WrongAnimal *w );
std::ostream &operator << ( std::ostream &o, const WrongAnimal &w );
