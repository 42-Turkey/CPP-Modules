// Created by Onur Dursun on 12/28/22.

#include "../Include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5), _target("default") {
	std::cout << "PresidentialPardonForm: Default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_):AForm("PresidentialPardonForm", 25, 5), _target( target_ ) {
	std::cout << "PresidentialPardonForm: Name constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &var_) {
	std::cout << "PresidentialPardonForm: Copy constructor called." << std::endl;
	if ( this != &var_ )
		this->_target = var_._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &var_) {
	std::cout << "PresidentialPardonForm: Copy assignment constructor called." << std::endl;
	if ( this != &var_ )
		this->_target = var_._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm: Deconstructor called." << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if ((int) executor.getGrade() > this->getExecToSign())
		throw GradeTooLowException();
	else if (this->isSigned() == true)
		throw AForm::FormNotSignedException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void)const { return (this->_target); }

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm &var_)
{
	o << "Form " << var_.getName()
		<< ":\n\tsign-grade:\t" << var_.getRequireToSign()
		<< "\n\texec-grade:\t" << var_.getExecToSign()
		<< "\n\tis signed:\t" << var_.isSigned() << std::endl;
	return (o);
}
