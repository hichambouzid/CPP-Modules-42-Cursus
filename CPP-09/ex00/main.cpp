#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cerr << "Error: could not open file.\n";
		return (0);
	}
	BitcoinExchange btcExchanger(av[1], av[2]);
	btcExchanger.StartExchange();
}