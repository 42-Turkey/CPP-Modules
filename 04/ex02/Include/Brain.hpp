// Created by Onur Dursun on 12/26/22.

#pragma once

#include <iostream>

class Brain {
private:
	std::string	*ideas;
public:
	Brain ( void );
	Brain ( const Brain &b );
	~Brain ( void );

	Brain 			&operator = ( const Brain &b );
	std::string		*getIdeas ( void ) const;
};

std::ostream &operator << ( std::ostream &o, const Brain &b );
