// Created by Onur Dursun on 10/3/22.

#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook	phoneBook;
	std::string	input;
	int			idx;

	idx = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "Use ADD; SEARCH; EXIT;";
		std::cout << "\nWhat's a next? ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			phoneBook.addContact(idx);
			++idx;
		}
		else if (!input.compare("SEARCH"))
			phoneBook.SearchContact();
		else if (!input.compare("EXIT"))
			std::cout << "Goodbye!" << std::endl;
	}
	return (0);
}