// Created by Onur Dursun on 10/6/22.

/*
note link:
wchar_t
https://learn.microsoft.com/en-us/cpp/cpp/char-wchar-t-char16-t-char32-t?view=msvc-170
*/

#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl		harl;
	//std::string	s(argv[1]);
	if (argc != 2)
	{
		std::cerr << "Wrong argument" << std::endl;
		exit (1);
	}
	char	level_list[LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	char	*end = level_list + sizeof(level_list) / sizeof(vowel[0]); 
	for (int i = 0; i < 4; ++i)
		if (argv[1] == level_list[i])
			break ;
	int	i = std::find(level_list, end, argv[1]) - level_list;
	switch ( i ) {
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	return (0);
}