// Created by Onur Dursun on 12/29/22.

// Created by Onur Dursun on 12/28/22.

#include "../Include/RobotomyRequestForm.hpp"

static int			randomNumber = 0;

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default") {
std::cout << "RobotomyRequestForm: Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_): AForm("RobotomyRequestForm", 72, 45), _target( target_ ) {
	std::cout << "RobotomyRequestForm: Name constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &var_) {
	std::cout << "RobotomyRequestForm: Copy constructor called." << std::endl;
	if ( this != &var_ )
		this->_target = var_._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &var_) {
	std::cout << "RobotomyRequestForm: Copy assignment constructor called." << std::endl;
	if ( this != &var_ )
		this->_target = var_._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm: Deconstructor called." << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if ((int)executor.getGrade() > this->getExecToSign())
		throw (Bureaucrat::GradeTooLowException());
	else if (!(randomNumber++ % 2))
		std::cout << "UrrrrrrrrrrrU " << this->getTarget() << " do robotic sound" << std::endl;
	else
		std::cout << "Robotomy BOOOOMMMMM!!!!" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void)const { return (this->_target); }

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm &var_)
{
	o << "Form " << var_.getName()
	  << ":\n\tsign-grade:\t" << var_.getRequireToSign()
	  << "\n\texec-grade:\t" << var_.getExecToSign()
	  << "\n\tis signed:\t" << var_.isSigned() << std::endl;
	return (o);
}

