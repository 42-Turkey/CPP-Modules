// Created by Onur Dursun on 9/9/22.

#include "PhoneBook.hpp"

void PhoneBook::addContact( int idx ) {
	idx %= 8;
	list[idx].addContact();
}

void PhoneBook::SearchContact() {
	std::stringstream	ss;
	size_t				i;
	std::string			input;

	printTable();
	std::cout << "Select contact to show: ";
	std::getline(std::cin, input);
	std::stringstream(input) >> i;
	if (i > 0 && i < 9)
	{
		if (this->list[i - 1].getName().empty())
			std::cout << "Contact is empty" << std::endl;
		else
			this->list[i - 1].printContact(i);
	}
	else
		std::cout << "Can't find contact" << std::endl;
}

void PhoneBook::printTable() {
	cout << "-------------------------------------------|" << endl;
	cout << std::setw(11) << "Index|";
	cout << std::setw(11) << "Name|";
	cout << std::setw(11) << "Last Name|";
	cout << std::setw(11) << "Nick Name|";
	cout << endl;
	for (int idx = 0; idx < 8; idx++) {
		if (!this->list[idx].getName().empty()) {
			cout << "-------------------------------------------|" << endl;
			cout << std::setw(10) << idx + 1 << "|";
			cout << setw(10) << controller(list[idx].getName()) << "|";
			cout << setw(10) << controller(list[idx].getLastName()) << "|";
			cout << setw(10) << controller(list[idx].getNickName()) << "|";
			cout << endl;
		}
	}
}