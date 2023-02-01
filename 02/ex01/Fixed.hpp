// Created by Onur Dursun on 10/16/22.

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# ifndef floatToFixed
# define floatToFixed( x ) ( roundf(x * (1 << _point) ) )
# endif

# ifndef fixedToFloat
# define fixedToFloat( x ) ( (float)x / (float)(1 << _point) )
# endif

class Fixed {
private:
	static const int	_point = 8;
	int					_value;
public:
	Fixed ( void );
	Fixed ( int inputValue );
	Fixed ( float inputValue );
	Fixed ( const Fixed &a );
	~Fixed ( void );

	Fixed	&operator = ( const Fixed &a );
	int		getRawBits ( void ) const;
	void	setRawBits ( const int raw );
	float	toFloat ( void ) const;
	int 	toInt ( void ) const;
};

std::ostream	&operator << ( std::ostream &os, const Fixed &a );

#endif //FIXED_HPP
