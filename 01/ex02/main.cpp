// Created by Onur Dursun on 10/6/22.

#include <iostream>

int	main ( void )
{
	std::string string1 = "HI THIS IS STRING";
	std::string *stringPTR = &string1;
	std::string &stringREF = string1;

	std::cout << "Original String Adress: " << &string1 << std::endl;
	std::cout << "using stringPTR Adress: " << &(*stringPTR) << std::endl;
	std::cout << "using stringREF Adress: " << &stringREF << std::endl;
	std::cout << "Original String Value: " << string1 << std::endl;
	std::cout << "stringPTR Value: " << *stringPTR << std::endl;
	std::cout << "stringREF Value: " << stringREF << std::endl;
}