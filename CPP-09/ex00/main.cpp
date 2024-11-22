#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cerr << "Invalide number of argument.\n";
		return (0);
	}
	BitcoinExchange btcExchanger(av[1], av[2]);
}