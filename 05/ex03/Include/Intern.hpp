//
// Created by Onur Dursun on 12/30/22.
//


#pragma once

#include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
private:
	AForm   *makeShrubberyCreationForm(const std::string target);
	AForm   *makeRobotomyRequestForm(const std::string target);
	AForm   *makePresidentialPardonForm(const std::string target);
public:
	Intern();
	Intern(const Intern& var_);
	Intern &operator=(const Intern& var_);
	~Intern();

	AForm	*makeForm(const std::string name_, const std::string target_);

	class FormNotFound:public std::exception{
	public:
		const char* what() const throw(){
			return "Form Not Found";
		} };
};
