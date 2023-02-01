// Created by Onur Dursun on 12/26/22.

#pragma once

#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain	*brain;
public:
	Dog ( void );
	Dog ( const Dog &d );
	virtual ~Dog ( void );

	Dog			&operator = ( Dog const &d );
	void		makeSound( void ) const;
	std::string	getType( void ) const;
	void 		compareTo ( const Dog &other ) const;
};
