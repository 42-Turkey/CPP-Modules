// Created by Onur Dursun on 12/27/22.

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const std::string	_name;
	mutable bool		isSign;
	int 				_requireToSign;
	int 				_execToSign;
public:
	AForm ( void );
	AForm ( const std::string name_ );
	AForm ( const std::string name_, int _requireToSign, int _execToSign );
	AForm ( const AForm &var );
	virtual ~AForm ( void );

	AForm &operator = ( const AForm &var );

	std::string	getName() const;
	int 		getRequireToSign() const;
	int 		getExecToSign() const;
	void		beSigned ( const Bureaucrat& var ) const;
	bool		isSigned() const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw(){
			return "AForm Grade To High";
		} };
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw(){
			return "AForm Grade To Low";
		} };
	class FormNotSignedException:public std::exception{
	public:
		const char* what() const throw(){
			return "Form Not Signed";
		} };
	virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &o , const AForm& var);

