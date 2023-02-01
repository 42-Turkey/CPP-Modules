// Created by Onur Dursun on 10/6/22.

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <cstdlib> //exit func

class Replace
{
private:
	std::ifstream	_inFile;
	std::ofstream	_outFile;
	std::string		_text;

public:
	Replace ( char *fname );
	~Replace();

	int		replaceFile ( std::string stringToReplace, std::string replacement );
	int		readFile ( std::string newFile );
};

# endif //REPLACE_HPP
