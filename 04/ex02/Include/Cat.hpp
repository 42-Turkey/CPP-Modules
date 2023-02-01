// Created by Onur Dursun on 12/26/22.

#pragma once

#include "AAnimal.hpp"

class Cat : public AAnimal {
private:
	Brain	*brain;

public:
	Cat ( void );
	Cat ( const Cat &c );
	virtual ~Cat ( void );

	Cat			&operator = ( Cat const &c );
	void		makeSound( void ) const;
	std::string	getType( void ) const;
	void		compareTo ( const Cat &other_cat ) const;

};
