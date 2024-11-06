#include "ScalarConverter.hpp"


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of argument.\n";
		return (1);
	}
	ScalarConverter::convert(std::string(av[1]));
}
