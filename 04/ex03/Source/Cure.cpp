//#include <Cure.hpp>
#include "../Include/Cure.hpp"

Cure::Cure( void ) : _type("cure") {
	std::cout << "Cure: Default" << this->_type << " constructed" << std::endl;
}

Cure::Cure( Cure const & ref ) {
	this->_type = ref.getType();
	std::cout << "Cure: Copy constructed from" << this->_type << std::endl;
}

Cure &Cure::operator=(Cure const & ref) {
	if ( this != &ref )
		this->_type = ref.getType();
	std::cout << "Cure: Assigned from " << ref.getType() << std::endl;
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure: Deconstructor " << getType() << " destroyed" << std::endl;
}

std::string const & Cure::getType( void ) const { return (this->_type); }

Cure *Cure::clone() const {
	Cure *ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target) {
	std::string target_name = target.getName();
	std::cout << "* heals " << target_name << "\'s wounds *" << std::endl;
}
