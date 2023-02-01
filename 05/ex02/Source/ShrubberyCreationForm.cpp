// Created by Onur Dursun on 12/28/22.

#include "../Include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default Target") {
	std::cout << "ShrubberyCreationForm: Default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) : AForm( "ShrubberyCreationForm", 145, 137),_target(target_) {
	std::cout << "ShrubberyCreationForm: Name constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &var_) {
	std::cout << "ShrubberyCreationForm: Copy constructor called." << std::endl;
	if ( this != &var_ )
		*this = var_;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &var_) {
	std::cout << "ShrubberyCreationForm: Copy assignment constructor called." << std::endl;
	if ( this != &var_ )
		this->_target = var_._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm: Deconstructor called." << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if( (int)executor.getGrade() > this->getExecToSign())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->isSigned() == false){
		throw(AForm::FormNotSignedException());
	}
	else
	{
		std::ofstream ofs(this->getTarget() + "_shrubbery");
		if (!ofs.is_open())
			throw std::ofstream::failure(strerror(errno));
		ofs << "               ,@@@@@@@," << std::endl;
		ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		ofs << "       |o|        | |         | |" << std::endl;
		ofs << "       |.|        | |         | |" << std::endl;
		ofs << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

	}
}

std::string	ShrubberyCreationForm::getTarget(void)const { return (this->_target); }

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm &var_)
{
	o << "Form " << var_.getName()
		<< ":\n\tsign-grade:\t" << var_.getRequireToSign()
		<< "\n\texec-grade:\t" << var_.getExecToSign()
		<< "\n\tis signed:\t" << var_.isSigned() << std::endl;
	return (o);
}
