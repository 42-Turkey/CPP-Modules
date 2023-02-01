// Created by Onur Dursun on 12/29/22.

#pragma once

#include <iostream>

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
private:
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm ( std::string target_ );
	RobotomyRequestForm ( const RobotomyRequestForm &var_ );
	~RobotomyRequestForm();

	RobotomyRequestForm &operator = ( const RobotomyRequestForm &var_ );

	void execute(Bureaucrat const &executor) const;
	std::string	getTarget() const;
};

std::ostream &operator << (std::ostream &o, const RobotomyRequestForm &var_ );

