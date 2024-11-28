#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: invalide number of argument .\n";
		return (0);
	}
	StoreArgumment(ac, av);
}