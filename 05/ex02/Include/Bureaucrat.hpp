// Created by Onur Dursun on 12/27/22.

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
	const std::string	_name;
	int 				_grade;
public:
	Bureaucrat ( void );
	Bureaucrat ( std::string name_ );
	Bureaucrat ( std::string name_, int grade_ );
	Bureaucrat ( const Bureaucrat &var );
	~Bureaucrat ( void );

	Bureaucrat	&operator = ( const Bureaucrat &var );

	int			getGrade ( void ) const;
	void		setGrade ( int grade_ );
	std::string getName ( void ) const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw(){
			return "Grade To High";
		} };
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw(){
			return "Grade To Low";
		} };

	void signForm ( const AForm& var ) const;

	void	executeForm(const AForm &form);
};

std::ostream &operator << ( std::ostream &o, const Bureaucrat &var );
