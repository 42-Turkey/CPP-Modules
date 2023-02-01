#pragma once

# include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal ( void );
	WrongAnimal ( const WrongAnimal &w );
	virtual	~WrongAnimal ( void );

	WrongAnimal	&operator = ( const WrongAnimal &w );

	virtual void			makeSound ( void ) const;
	virtual std::string		getType ( void ) const;
};

std::ostream &operator << ( std::ostream &o, const WrongAnimal *w );
std::ostream &operator << ( std::ostream &o, const WrongAnimal &w );
