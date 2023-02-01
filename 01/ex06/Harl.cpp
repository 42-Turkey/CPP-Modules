// Created by Onur Dursun on 10/6/22.

#include "Harl.hpp"

void	Harl::complain( std::string level ) {
	void (Harl::*complaint[LEVEL])( void ) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	std::string	complainLevel[LEVEL] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		void (Harl::*select)( void ) = complaint[i];
		if ( level == complainLevel[i] )
			(this->*select)();
	}
}

void	Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}