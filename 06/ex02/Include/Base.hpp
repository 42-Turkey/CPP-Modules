#pragma once

#include <iostream>

class Base {
public:
	Base ( void );
	virtual ~Base ( void );
};

Base	*generate ( void );
void	identify ( Base *p );
void	identify ( Base &a );
