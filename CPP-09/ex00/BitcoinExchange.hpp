#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class BitcoinExchange
{
	std::vector<std::pair<std::string, std::string> > data_csv;
	std::vector<std::pair<std::string, std::string> > Input;

public:
	BitcoinExchange(char * toExchange, char *csv);
	void SplitCsv(std::string line);
	void SplitData(std::string line);
};

#endif