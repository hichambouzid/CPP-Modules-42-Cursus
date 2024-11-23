#include "BitcoinExchange.hpp"

void BitcoinExchange::SplitCsv(std::string line)
{
	std::size_t pos;

	pos = line.find(',');
	data_csv.push_back(std::pair<std::string, std::string>(line.substr(0, pos), line.substr(pos + 1)));
}

void BitcoinExchange::SplitData(std::string line)
{
	std::size_t pos;
	char *str = NULL;

	pos = line.find(" | ");
	if (std::string::npos == pos)
		Input.push_back(std::pair<std::string, std::string>(std::string("Error: Bad input"), line));		
	else
	{
		if (strtod_l(line.substr(pos + 3).c_str(), &str, NULL) <= 0 || *str)
		{
		Input.push_back(std::pair<std::string, std::string>(std::string("Error: not a positive number."), std::string("")));		
		}
		else
			Input.push_back(std::pair<std::string, std::string>(line.substr(0, pos), line.substr(pos + 3)));
	}
}

BitcoinExchange::BitcoinExchange(char * arg1, char * arg2)
{
	std::ifstream csv;
	std::ifstream ToExchange;
	std::string r;
	csv.open(arg2, std::ifstream::in);
	ToExchange.open(arg1, std::ifstream::in);
	if (!csv.is_open() || !ToExchange.is_open())
	{
		std::cerr << "Error opening file: " << (csv.is_open() ? std::string(arg1) : std::string(arg2)) << '\n';
		return;
	}
	while (std::getline(csv, r))
		SplitCsv(r);
	while (std::getline(ToExchange, r))
		SplitData(r);
		std::cout << "inside loupe.\n";
	for (std::vector<std::pair<std::string, std::string> >::iterator it = Input.begin(); it != Input.end(); it++)
	{
		std::cout << it->first << " ===================== " << it->second << '\n';
	}
}
