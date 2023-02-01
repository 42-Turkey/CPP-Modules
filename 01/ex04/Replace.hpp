// Created by Onur Dursun on 10/6/22.

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace
{
private:
	std::ifstream	_inFile;
	std::ofstream	_outFile;
	std::string		_text;

public:
	Replace ( std::string fname );
	~Replace();

	int		replaceFile ( std::string stringToReplace, std::string replacement );
	int		readFile ( std::string newFile );
};

# endif //REPLACE_HPP
