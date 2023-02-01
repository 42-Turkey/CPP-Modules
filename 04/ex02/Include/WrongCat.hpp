// Created by Onur Dursun on 12/26/22.

#pragma once

#include <WrongAnimal.hpp>

class WrongCat : virtual public WrongAnimal {
public:
	WrongCat ( void );
	WrongCat ( const WrongCat &c );
	virtual ~WrongCat ( void );

	WrongCat			&operator = ( WrongCat const &c );
	void		makeSound( void ) const;
	std::string	getType( void ) const;
};
