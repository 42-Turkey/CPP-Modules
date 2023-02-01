// Created by Onur Dursun on 10/16/22.

#include "Fixed.hpp"

// Constructor Functions
Fixed::Fixed( void ): _value( 0 ) {}

Fixed::Fixed( int inputValue ) {
	this->_value = floatToFixed( inputValue );
}

Fixed::Fixed( float inputValue ) {
	this->_value = floatToFixed( inputValue );
}

Fixed::~Fixed( void ) {}

Fixed::Fixed( const Fixed &other ) {
	*this = other;
}

Fixed	&Fixed::operator = ( const Fixed &a ) {
	if ( this != &a )
		this->_value = a.getRawBits();
	return ( *this );
}

bool	Fixed::operator == (const Fixed &a) const {
	return ( getRawBits() == a.getRawBits() );
}

bool	Fixed::operator != (const Fixed &a) const {
	return ( getRawBits() != a.getRawBits() );
}

bool	Fixed::operator < (const Fixed &a) const {
	return ( getRawBits() < a.getRawBits() );
}

bool	Fixed::operator > (const Fixed &a) const {
	return ( getRawBits() > a.getRawBits() );
}

bool	Fixed::operator >= (const Fixed &a) const {
	return ( getRawBits() >= a.getRawBits() );
}

bool	Fixed::operator <= (const Fixed &a) const {
	return (getRawBits() <= a.getRawBits());
}

Fixed	Fixed::operator + ( const Fixed &a ) const {
	return ( this->toFloat() + a.toFloat() );
}

Fixed	Fixed::operator - ( const Fixed &a ) const {
	return ( this->toFloat() - a.toFloat() );
}

Fixed	Fixed::operator * ( const Fixed &a ) const {
	return ( this->toFloat() * a.toFloat() );
}

Fixed	Fixed::operator / ( const Fixed &a ) const {
	return ( this->toFloat() / a.toFloat() );
}

Fixed	Fixed::operator++ ( int ) {
	Fixed	ret ( *this );

	++*this;
	return ( ret );
}

Fixed	&Fixed::operator++ ( void ) {
	this->_value++;
	return ( *this );
}

Fixed	Fixed::operator-- ( int ) {
	Fixed	ret ( *this );

	--*this;
	return ( ret );
}

Fixed	&Fixed::operator-- ( void ) {
	--this->_value;
	return ( *this );
}

Fixed			&Fixed::min( Fixed &a, Fixed &b ) {
	return ( a <= b ? a : b );
}

const Fixed		&Fixed::min( const Fixed &a, const Fixed &b ) {
	return ( a <= b ? a : b );
}

Fixed			&Fixed::max( Fixed &a, Fixed &b ) {
	return ( a >= b ? a : b );
}

const Fixed		&Fixed::max( const Fixed &a, const Fixed &b ) {
	return ( a >= b ? a : b );
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
