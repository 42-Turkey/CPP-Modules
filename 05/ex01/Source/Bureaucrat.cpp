// Created by Onur Dursun on 12/27/22.

//#include "../Include/Bureaucrat.hpp"
#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(): _name("none"), _grade(150) {
	std::cout << "Bureucrat: Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat( std::string name_ ): _name( getName() ), _grade(150) {
	std::cout << "Bureucrat: Name constructor called." << std::endl;
}

Bureaucrat::Bureaucrat( std::string name_, int grade_ ): _name( name_ ) {
	setGrade( grade_ );
	std::cout << "Bureucrat: Grade constructor called." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &var ) {
	std::cout << "Bureaucrat const called." << std::endl;
	if ( this != &var )
		setGrade( var.getGrade() );
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat deconst called." << std::endl;

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &var) {
	std::cout << "Bureaucrat Copy assignment const called." << std::endl;
	if ( this != &var )
		setGrade( var.getGrade() );
	return *this;
}

void Bureaucrat::setGrade( int grade_ ) {
	if ( grade_  < 1)
		throw GradeTooHighException();
	else if ( grade_ > 150 )
		throw GradeTooLowException();
	else
		_grade = grade_;
}

void		Bureaucrat::signForm( const Form &var ) const { var.beSigned(*this); }

int			Bureaucrat::getGrade() const { return this->_grade; }

std::string	Bureaucrat::getName() const { return this->_name; }

std::ostream &operator << ( std::ostream &o, const Bureaucrat &var ) {
	o << "Bureaucrat name => " << var.getName() << " | his grade => " << var.getGrade() << std::endl;
	return o;
}
