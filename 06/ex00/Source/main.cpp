// Created by odursun on 01.01.2023.

#include "Convert.hpp"

int main(int ac,char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [value]" << std::endl;
		return 0;
	}
	Convert convert;
	convert.run(av[1]);
}
