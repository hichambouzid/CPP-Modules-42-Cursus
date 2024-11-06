#include <iostream>
#include <stdlib.h>

int main(int ac, char **av)
{
	char *str;
	locale_t c;
	if (ac == 2)
	{ 
		double f = strtold_l(av[1], &str, NULL);
		std::cout << f << std::endl;
		if (*str)
			std::cout << "the string contain another charcters\n";
		std::cout << str << std::endl;
	}
}