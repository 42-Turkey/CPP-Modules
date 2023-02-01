// Created by Onur Dursun on 10/6/22.

#include "Replace.hpp"

int fileError(std::string message)
{
	if (message != "")
		std::cerr << "Error: " << message << "\n./replace <your_fileName> <stringToReplace> <replacement>" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
			return (fileError("Wrong argument"));
	Replace replace(argv[1]);
	if (!replace.readFile(argv[1]))
		return (fileError(""));
	if (!replace.replaceFile(argv[2], argv[3]))
		return (fileError(""));
	return  (0);
}