// Created by Onur Dursun on 10/6/22.

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3
#define LEVEL 4

class Harl {

public:
	void	complain ( std::string level );
private:
	void	debug ( void );
	void	info ( void );
	void	warning ( void );
	void	error ( void );
}; // Harl

#endif //HARL_HPP