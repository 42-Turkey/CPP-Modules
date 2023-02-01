// Created by odursun on 01.01.2023.

#pragma once

#include <iostream>
#include <string>

class Convert {
private:
	void	toChar ( const std::string &str );
	void	toInt ( const std::string &str );
	void	toFloat ( const std::string &str );
	void	toDouble ( const std::string &str );
	void	printNumber ( const char c, char type );
	bool	isNan ( const std::string &str );
	const std::string toUpperCase ( const std::string &var );
public:
	Convert ( void );
	Convert ( const Convert &c );
	Convert& operator = ( const Convert &c );
	~Convert ( void );
	void	run ( const std::string &str );
};
