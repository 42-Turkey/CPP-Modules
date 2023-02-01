// Created by Onur Dursun on 12/26/22.

#pragma once

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {
public:
	WrongCat ( void );
	WrongCat ( const WrongCat &c );
	~WrongCat ( void );

	WrongCat			&operator = ( WrongCat const &c );
	void		makeSound( void ) const;
	std::string	getType( void ) const;
};
