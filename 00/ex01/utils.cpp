// Created by Onur Dursun on 10/3/22.

#include "utils.hpp"

# include <string>
# include <iostream>

std::string controller(std::string s) {
	std::string str;

	if (s.length() > 10) {
		str = s.substr(0, 9);
		str.append(".");
	} else
		str = s;
	return str;
}

std::string	takeInput(void)
{
	std::string	in;
	std::getline(std::cin, in);

	while (in.empty())
	{
		if (in.empty() || in == " ")
			std::cout << "Input is empty, try again: ";
		std::getline(std::cin, in);
	}
	return (in);
}
