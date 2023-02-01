// Created by Onur Dursun on 9/9/22.

#include <iostream>

using std::cout;
using std::endl;

int main(int ac, char **av)
{
	if (ac != 1) {
		for (int i = 1; i < ac; ++i)
			for (char *s = av[i]; *s; ++s)
				(*s > 96 && *s < 122) ? cout << char(*s - 32) : cout << (char) *s;
		cout << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return  (0);
}
