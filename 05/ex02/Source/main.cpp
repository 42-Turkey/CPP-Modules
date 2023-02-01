// Created by Onur Dursun on 12/27/22.

#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

int main( void ) {
	try {
		//CONSTRUCTOR
		std::cout << "CONSTRUCTOR" << std::endl;
		Bureaucrat a("Bob", 150);
		ShrubberyCreationForm form("Form");
		RobotomyRequestForm asd("Form2");
		PresidentialPardonForm abc("Form3");
		//SIGN FORM
		std::cout << std::endl << "FORM" << std::endl;
		a.signForm(abc);
		a.executeForm(abc);
		a.signForm(asd);
		a.executeForm(asd);
		a.signForm(form);
		a.executeForm(form);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
