#pragma once

# include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal ( void );
	Animal ( const Animal &a );
	virtual	~Animal ( void );

	Animal	&operator = ( const Animal &a );

	virtual void			makeSound ( void ) const;
	virtual std::string		getType ( void ) const;
};

std::ostream &operator << ( std::ostream &o, const Animal &a );
std::ostream &operator << ( std::ostream &o, const Animal *a );
