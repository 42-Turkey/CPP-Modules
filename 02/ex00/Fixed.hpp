// Created by Onur Dursun on 10/13/22.

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int                 _value;
	static const int    _fractionalBits = 8;

public:
	Fixed ( void );
	Fixed ( const Fixed &other );
	Fixed	&operator = ( const Fixed &other );
	~Fixed ( void );

	int getRawBits ( void ) const;
	void setRawBits ( int const raw );
};

#endif //FIXED_HPP
