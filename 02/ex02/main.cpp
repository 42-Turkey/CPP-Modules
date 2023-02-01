// Created by Onur Dursun on 4/29/22.

#include "Fixed.hpp"

int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;

	a = Fixed (1);
	Fixed c (0.5f);
	std::cout << "Bits a: " << a.getRawBits() << std::endl << "Bits b: " << b.getRawBits() << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a + c: " << a + c << std::endl;
	std::cout << "a - c: " << a - c << std::endl;
	std::cout << "c - a: " << c - a << std::endl;
	std::cout << "a * c: " << a * c << std::endl;
	std::cout << "a / c: " << a / c << std::endl;

	std::cout << "a < c: " << (a < c) << std::endl;
	std::cout << "c < a: " << (c < a) << std::endl;
	std::cout << "c > a: " << (c > a) << std::endl;
	std::cout << "a > c: " << (a > c) << std::endl;
	std::cout << "a >= c: " << (a >= c) << std::endl;
	std::cout << "a <= c: " << (a <= c) << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "a != c: " << (a != c) << std::endl;
	std::cout << "a != c: " << (c != a) << std::endl;

	std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c): " << Fixed::max(a, c) << std::endl;

	return 0;
}