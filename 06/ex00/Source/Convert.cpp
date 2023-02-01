// Created by odursun on 01.01.2023.

#include "../Include/Convert.hpp"

// std::stoi vs linux also came in c++11.
// The Makefile will also be compiled specifically for linux.

Convert::Convert () {
	std::cout << "Convert: Constructor called." << std::endl;
}

Convert::Convert ( const Convert &c ) {
	if ( this != &c )
		*this = c;
	std::cout << "Convert: Copy constructor called." << std::endl;
}

Convert &Convert::operator = ( const Convert &c ) {
	std::cout << "Convert: Copy assignment constructor called." << std::endl;
	if ( this != &c )
		*this = c;
	return *this;
}

Convert::~Convert () {
	std::cout << "Convert: Deconstructor called." << std::endl;
}

void	Convert::run ( const std::string &str ) {
	toChar(str.c_str());
	toInt(str.c_str());
	toFloat(str.c_str());
	toDouble(str.c_str());
}

const std::string Convert::toUpperCase(const std::string &var) {
	std::string tmp = var;
	for (int i = var.length() - 1 ; i >= 0 ; i--){
		tmp[i] = toupper(tmp[i]);
	}
	return tmp;
}

bool Convert::isNan ( const std::string &str ) { return ( !strcmp(toUpperCase(str).c_str(), "NAN") ); }

void Convert::toChar (const std::string &str) {
	char c = 0;
	if (isNan(str)) {
		std::cout << "char   : impossible" << std::endl;
		return;
	}
	try {
		c = std::stoi(str);
	} catch ( std::exception &e ) {
		if ( str.length() == 1 && isprint(str[0]) )
			c = str[0];
		else
			std::cout << "Char   : Non displayable" << std::endl;
	}
	std::cout << "char   : " << (isprint(c) ? std::string(1, c).c_str() : "Non Displayable") << std::endl;
}

void Convert::toInt ( const std::string &str ) {
	int n = 0;
	if (isNan(str)){
		std::cout << "int   : impossible" << std::endl;
		return;
	}
	try {
		n = std::stoi(str);
	} catch ( std::exception &e ) {
		if ( str.length() == 1 && isprint(str[0]) ) {
			printNumber(str[0], 'i');
			return ;
		}
		else
			std::cout << "Int    : Non displayable" << std::endl;
	}
	std::cout << "int    : " << n << std::endl;
}

void	Convert::toFloat ( const std::string &str ) {
	float n = 0;
	if (isNan(str)){
		std::cout << "float   : impossible" << std::endl;
		return;
	}
	try {
		n = std::stof(str);
	} catch ( std::exception &e ) {
		if ( str.length() == 1 && isprint(str[0]) ) {
			printNumber(str[0], 'f');
			return ;
		}
		else {
			std::cout << "float  : Non displayable" << std::endl;
		}
	}
	if ( n == static_cast<int> ( n ) )
		std::cout << "float  : " << n << ".0f" << std::endl;
	else
		std::cout << "float  : " << n << std::endl;
}

void	Convert::toDouble ( const std::string &str ) {
	double n = 0;
	if (isNan(str)){
		std::cout << "double   : impossible" << std::endl;
		return;
	}
	try {
		n = std::stod(str);
	} catch ( std::exception &e ) {
		if ( str.length() == 1 && isprint(str[0]) ) {
			printNumber(str[0], 'd');
			return ;
		}
		else {
			std::cout << "Double : Non displayable" << std::endl;
		}
	}
	if ( n == static_cast<int> ( n ) )
		std::cout << "double : " << n << ".0" << std::endl;
	else
		std::cout << "double : " << n << std::endl;
}

void	Convert::printNumber ( const char c, char type ) {
	char	types[3] = {'i', 'f', 'd'};
	int		i = -1;

	while (++i < 3)
		if (type == types[i])
		break;
	switch (i) {
		case 0:
			std::cout << "int    : " << static_cast<int>(c) << std::endl;
		break;
		case 1:
			std::cout << "float  : " << static_cast<float>(c) << ".0f" << std::endl;
		break;
		case 2:
			std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
		break;
	}
}
