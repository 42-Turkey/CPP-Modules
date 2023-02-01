#pragma once

#include <iostream>
# include <cstdlib> //for srand() func in linux
# include <typeinfo> ////for bad_cast in linux

class Base {
public:
	Base ( void );
	virtual ~Base ( void );
};

Base	*generate ( void );
void	identify ( Base *p );
void	identify ( Base &a );
