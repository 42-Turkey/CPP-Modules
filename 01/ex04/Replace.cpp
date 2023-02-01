// Created by Onur Dursun on 10/6/22.

#include "Replace.hpp"

Replace::Replace ( char *fname ) {
	_inFile.open(fname);
	if (!_inFile)
	{
		std::cerr <<  "The file to open can't be an empty string" << std::endl;
		_inFile.close();
		exit (1);
	}
	std::string	localFile(fname);
	std::cout << "Opening the file " << fname << std::endl;
	localFile.append(".replace");
	_outFile.open(localFile.c_str());

}

int	Replace::readFile ( std::string newFile ) {
	if (newFile == "")
	{
		std::cerr << "The file to open can't be an empty string" << std::endl;
		return  (0);
	}
	std::string	str;
	while (std::getline(_inFile, str))
	{
		_text.append(str);
		if (!_inFile.eof())
			_text.append("\n");
	}
	std::cout << "Input file set to " << newFile << std::endl;
	return (1);
}

Replace::~Replace ( void ) {
	std::cout << "Closing the file..." << std::endl;
	_inFile.close();
	_outFile.close();
}


int	Replace::replaceFile ( std::string stringToReplace, std::string replacement ) {
	size_t i;

	if ( stringToReplace == "" || replacement == "" )
	{
		std::cerr << "Strings can't be empty" << std::endl;
		return (0);
	}
	while ((i = _text.find(stringToReplace)) != std::string::npos)
	{
		_text.erase( i, stringToReplace.length() );
		_text.insert( i, replacement );
	}
	_outFile << _text;
	if (_text == "")
	{
		_inFile.close();
		std::cerr << "empty string" << std::endl;
		return (1);
	}
	std::cout << "Relocation is complete." << std::endl;
	return (1);
}
