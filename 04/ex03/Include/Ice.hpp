#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string _type;
public:
	Ice ( void );
	Ice ( Ice const &i );
	~Ice ( void );

	Ice &operator = ( const Ice &i );
	Ice	*clone() const;
	void  use ( ICharacter &target );
	std::string const	&getType( void ) const;
};
