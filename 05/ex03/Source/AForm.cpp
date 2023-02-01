// Created by Onur Dursun on 12/27/22.

#include "../Include/AForm.hpp"

AForm::AForm(): _name( "default" ), isSign( false ), _requireToSign( 150 ), _execToSign( 150 ) {
	std::cout << "AForm: Default Constructor called." << std::endl;
}

AForm::AForm( const std::string name_ ): _name( name_ ), isSign( false ), _requireToSign( 150 ), _execToSign( 150 ) {
	std::cout << "AForm: Name Constructor called." << std::endl;
}

AForm::AForm( const std::string name_, int requireToSign_, int execToSign_ ): _name( name_ ), isSign( false ), _requireToSign( requireToSign_ ), _execToSign( execToSign_ ) {
	std::cout << "AForm: Name and Other Constructor called." << std::endl;
}

AForm::AForm(const AForm &var) {
	std::cout << "AForm: Copy Const called." << std::endl;
	if ( this != &var ) {
		this->getName() = var.getName();
		this->_requireToSign = var.getRequireToSign();
		this->_execToSign = var.getExecToSign();
	}
	std::cout << "Value address: " << &this->_name << std::endl;
	std::cout << "Value address: " << &var._name << std::endl;
}

AForm &AForm::operator=(const AForm &var) {
	std::cout << "AForm: Copy assignment Const called." << std::endl;
	if ( this != &var ) {
		this->getName() = var.getName();
		this->_requireToSign = var.getRequireToSign();
		this->_execToSign = var.getExecToSign();
	}
	std::cout << "Value address: " << &this->_name << std::endl;
	std::cout << "Value address: " << &var._name << std::endl;
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm: Deconstructor called." << std::endl;

}

void AForm::beSigned(const Bureaucrat &var) const {
	if ( var.getGrade() <= getRequireToSign() ) {
		this->isSign = true;
		std::cout << "This " << var.getName() << " signed " << this->getName() << std::endl;
	} else {
		std::cout << "This " << var.getName() << " couldn't sign " << this->_name << " because to Low Then Sign Grade." << std::endl;
		throw GradeTooLowException();
	}
}

std::string	AForm::getName() const { return this->_name; }

int 		AForm::getRequireToSign() const { return this->_requireToSign; }

int 		AForm::getExecToSign() const { return this->_execToSign; }

bool		AForm::isSigned() const { return this->isSign; }

std::ostream &operator<<(std::ostream &o , const AForm& var) {
	o << var.getName() + " AForm is " << (var.isSigned() ? "signed," : "not signed,")
	<< " requires grade " << var.isSigned() << " to sign and grade "
	<< var.getExecToSign() << " to execute";
	return (o);
}
