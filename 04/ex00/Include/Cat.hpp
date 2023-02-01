// Created by Onur Dursun on 12/26/22.

#pragma once

#include <Animal.hpp>


class Cat : public Animal {
public:
	Cat ( void );
	Cat ( const Cat &c );
	virtual ~Cat ( void );

	Cat			&operator = ( Cat const &c );
	void		makeSound( void ) const;
	std::string	getType( void ) const;
};
