// Created by Onur Dursun on 12/27/22.

#include <Bureaucrat.hpp>

int main( void ){
	try{
		Bureaucrat test("Onur", 2);
		Bureaucrat test1("Onur", 100);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}
