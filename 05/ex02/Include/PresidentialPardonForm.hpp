// Created by Onur Dursun on 12/28/22.


#pragma once

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm: public  AForm {
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm ( std::string target_ );
	PresidentialPardonForm ( const PresidentialPardonForm &var_ );
	~PresidentialPardonForm();

	PresidentialPardonForm &operator = ( const PresidentialPardonForm &var_ );

	void execute(Bureaucrat const &executor) const;
	std::string	getTarget() const;
};

std::ostream &operator << (std::ostream &o, const PresidentialPardonForm &var_ );
