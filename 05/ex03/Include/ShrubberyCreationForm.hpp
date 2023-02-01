// Created by Onur Dursun on 12/28/22.


#pragma once

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
private:
	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm ( std::string target_ );
	ShrubberyCreationForm ( const ShrubberyCreationForm &var_ );
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator = ( const ShrubberyCreationForm &var_ );

	void execute(Bureaucrat const &executor) const;
	std::string	getTarget() const;
};

std::ostream &operator << (std::ostream &o, const ShrubberyCreationForm &var_ );
