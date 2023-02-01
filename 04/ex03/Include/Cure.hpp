#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string 	_type;
public:
	Cure ( void );
	Cure ( Cure const &c );
	~Cure ( void );

	Cure &operator = ( Cure const &c );
	Cure				*clone() const;
	void				use( ICharacter &target );
	std::string const	&getType( void ) const;
};
