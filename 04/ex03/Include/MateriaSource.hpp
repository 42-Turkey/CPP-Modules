// Created by Onur Dursun on 12/26/22.

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_inventory[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & ref);
	~MateriaSource();
	MateriaSource & operator=(MateriaSource const & ref);
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};
