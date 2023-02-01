// Created by Onur Dursun on 10/16/22.

#include "Fixed.hpp"

Fixed::Fixed( void ): _value( 0 ) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int inputValue ) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = floatToFixed( inputValue );
}

Fixed::Fixed( float inputValue ) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = floatToFixed( inputValue );
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed	&Fixed::operator=( const Fixed &a ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &a )
		this->_value = a.getRawBits();
	return ( *this );
}

int		Fixed::getRawBits( void ) const {
	return ( this->_value );
}

void	Fixed::setRawBits( const int raw ) {
	this->_value = raw;
}

int		Fixed::toInt( void ) const {
	return ( this->_value >> this->_point );
}

float	Fixed::toFloat( void ) const {
	return ( fixedToFloat( this->_value ) );
}

std::ostream	&operator << ( std::ostream &os, const Fixed &a ){
	return ( os << a.toFloat() );
}
