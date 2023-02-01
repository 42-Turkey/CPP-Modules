#pragma once

#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : virtual public ICharacter
{
public:
	Character ( std::string const &name );
	Character ( Character const &src );
	~Character ( void );

	Character &operator = (Character const &src );

	std::string const	&getName() const;
	void				equip( AMateria *m );
	void				unequip ( int idx );
	void				use ( int idx, ICharacter &target );
	AMateria			*getMateriaFromInvertory( int idx );
private:
	AMateria *materia[4];
	std::string _name;
};

void	AddFloor ( AMateria *item );
