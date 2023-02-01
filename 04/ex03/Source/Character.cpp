//#include <Character.hpp>
#include "../Include/Character.hpp"

Character::Character ( std::string const &name ) {
	_name = name;
	std::cout << "Character: Name " << _name << " constructor called" << std::endl;
	for ( unsigned int i= -1; ++i < 4;)
		materia[i] = 0;
}

Character::Character ( const Character &src ) {
	std::cout << "Character: Copy constructor called" << std::endl;
	for ( unsigned int i = 0; i < 4; i++)
		if (src.materia[i])
			this->materia[i] = src.materia[i]->clone();
}

Character::~Character ( void )
{
	std::cout << "Character: Deconstructor called" << std::endl;
	for ( unsigned int i = 0; i < 4; i++ )
		if ( materia[i] )
			delete materia[i];
}

Character &Character::operator=(const Character &src) {
	std::cout << "Character: Copy assignment constructor called" << std::endl;
	if ( this != &src ) {
		for (unsigned int i = 0; i < 4; i++) {
			if (this->materia[i])
				delete this->materia[i];
			if ( src.materia[i] )
				this->materia[i] = src.materia[i]->clone();
		}
	}
	return *this;
}

void Character::equip(AMateria *m) {
	int	i = 0;
	if (!m)
		std::cout << _name << " tried to equip nothing and it did nothing" << std::endl;
	else {
		while ((this->materia[i]) && i < 4)
			i++;
		if (i >= 4)
			std::cout << _name << " cant equip more than 4 Materia" << std::endl;
		else {
			this->materia[i] = m;
			std::cout << _name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		std::cout << this->_name << " tried to unequip nothing at slot " << idx << " and it did nothing" << std::endl;
	else if (!this->materia[idx])
		std::cout << this->_name << " has nothing equipped at slot " << idx << " so he can't unequip it" << std::endl;
	else {
		AMateria *ptr = materia[idx];
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
		this->materia[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target) {
	std::string	name = this->getName();
	if ( idx < 0 || idx >= 4 || !this->materia[idx] )
		std::cout << "Nothing found to index " << idx << std::endl;
	else {
		std::cout << name;
		materia[idx]->use(target);
	}
}

AMateria	*Character::getMateriaFromInvertory (int idx) { return this->materia[idx]; }

const std::string &Character::getName() const { return  this->_name; }
