// Created by Onur Dursun on 12/27/22.

#include <Form.hpp>

int main( void )
{
	try{
		Bureaucrat	test;
		Bureaucrat	bureaucrat("Bob", 2);
		Form form("Form", 5, 5);
		bureaucrat.signForm(form);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
