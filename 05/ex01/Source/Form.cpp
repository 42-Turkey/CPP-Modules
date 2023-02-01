// Created by Onur Dursun on 12/27/22.

#include "../Include/Form.hpp"

Form::Form(): _name( "default" ), isSign( false ), _requireToSign( 150 ), _execToSign( 150 ) {
	std::cout << "Form: Default Constructor called." << std::endl;
}

Form::Form( const std::string name_ ): _name( name_ ), isSign( false ), _requireToSign( 150 ), _execToSign( 150 ) {
	std::cout << "Form: Name Constructor called." << std::endl;
}

Form::Form( const std::string name_, int requireToSign_, int execToSign_ ): _name( name_ ), isSign( false ), _requireToSign( requireToSign_ ), _execToSign( execToSign_ ) {
	std::cout << "Form: Name and Other Constructor called." << std::endl;
}

Form::Form(const Form &var) {
	std::cout << "Form: Copy Const called." << std::endl;
	if ( this != &var ) {
		this->getName() = var.getName();
		this->_requireToSign = var.getRequireToSign();
		this->_execToSign = var.getExecToSign();
	}
	std::cout << "Value address: " << &this->_name << std::endl;
	std::cout << "Value address: " << &var._name << std::endl;
}

Form &Form::operator=(const Form &var) {
	std::cout << "Form: Copy assignment Const called." << std::endl;
	if ( this != &var ) {
		this->getName() = var.getName();
		this->_requireToSign = var.getRequireToSign();
		this->_execToSign = var.getExecToSign();
	}
	std::cout << "Value address: " << &this->_name << std::endl;
	std::cout << "Value address: " << &var._name << std::endl;
	return *this;
}

Form::~Form() {
	std::cout << "Form: Deconstructor called." << std::endl;

}

void Form::beSigned(const Bureaucrat &var) const {
	if ( var.getGrade() <= getRequireToSign() ) {
		this->isSign = true;
		std::cout << "This " << var.getName() << " signed " << this->getName() << std::endl;
	} else {
		std::cout << "This " << var.getName() << " couldn't sign " << this->_name << " because to Low Then Sign Grade." << std::endl;
		throw GradeTooLowException();
	}
}

std::string	Form::getName() const { return this->_name; }

int 		Form::getRequireToSign() const { return this->_requireToSign; }

int 		Form::getExecToSign() const { return this->_execToSign; }

bool		Form::isSigned() const { return this->isSign; }

std::ostream &operator<<(std::ostream &o , const Form& var){
	o << var.getName() + " form is " << (var.isSigned() ? "signed," : "not signed,")
	<< " requires grade " << var.isSigned() << " to sign and grade "
	<< var.getExecToSign() << " to execute";
	return (o);
}
