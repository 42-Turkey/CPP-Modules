// Created by Onur Dursun on 12/27/22.

#pragma once

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	mutable bool		isSign;
	int 				_requireToSign;
	int 				_execToSign;
public:
	Form ( void );
	Form ( const std::string name_ );
	Form ( const std::string name_, int _requireToSign, int _execToSign );
	Form ( const Form &var );
	~Form ( void );

	Form &operator = ( const Form &var );

	std::string	getName() const;
	int 		getRequireToSign() const;
	int 		getExecToSign() const;
	void		beSigned( const Bureaucrat &var ) const;
	bool		isSigned() const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw(){
			return "Form Grade To High";
		} };
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw(){
			return "Form Grade To Low";
		} };
};

std::ostream &operator << ( std::iostream &o, const Form &var );
