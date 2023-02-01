#include "../Include/Ice.hpp"
//#include <Ice.hpp>

Ice::Ice() : _type("ice") {
	std::cout << "Ice: Default " << this->_type << " constructed." << std::endl;
}

Ice::Ice(Ice const & ref){
	this->_type = ref.getType();
	std::cout << "Ice: Copy constructed from " << this->_type;
}

Ice & Ice::operator=(Ice const & ref)
{
	if (this != &ref)
		this->_type = ref.getType();
	std::cout << "Ice: Assigned from " << ref.getType() << std::endl;
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice: Deconstructor " << getType() << " destroyed." << std::endl;
}

std::string const & Ice::getType( void ) const { return (this->_type); }

Ice *Ice::clone() const {
	Ice	*ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target) {
	std::string target_name = target.getName();
	std::cout << "* shoots an ice bolt at " << target_name << "*" << std::endl;
}
