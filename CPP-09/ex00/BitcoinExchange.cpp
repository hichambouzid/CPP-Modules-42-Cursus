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
	// char *str = NULL;

	pos = line.find(" | ");
	if (std::string::npos == pos)
		Input.push_back(std::pair<std::string, std::string>(std::string("Error: Bad input"), line));		
	else
	{
		// if (strtod_l(line.substr(pos + 3).c_str(), &str, NULL) <= 0 || *str)
		// 	Input.push_back(std::pair<std::string, std::string>(std::string("Error: not a positive number."), std::string("")));		
		// else
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
	// for (std::vector<std::pair<std::string, std::string> >::iterator it = Input.begin(); it != Input.end(); it++)
	// {
	// 	std::cout << it->first << " ===================== " << it->second << '\n';
	// }
}

int DVrangeCheck(std::vector<std::pair<std::string, std::string> >::iterator f, std::vector<std::pair<std::string, std::string> > data)
{
	char *str;
	const char *number = f->first.c_str();
	int date = strtod(number, &str);
	int month = strtod(number + 5, &str);
	int day = strtod(number + 8, &str);
	int range[] = {31, 28, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	std::vector<std::pair<std::string, std::string> >::iterator j;
	std::string var1, var2;
	double value;

	// std::cout << "checccck : " <<  (f->second) << '\n';
	if (*str || date <= 0 || month <= 0 || day <= 0 || date < 2009)
		return (0);
	if (range[month - 1] < day)
		return (0);
	else
	{
		str = NULL;
		value = strtod(f->second.c_str(), &str);
		if (*str)
			return (-1);
		else if (value < 0)
			return (-2);
		else if (value > 1000)
			return (-3);
		else
		{
			// std::cout << "I'm here .\n";
		j = data.begin() + 1;
		for (; j != data.end(); j++)
		{
		 	var1 = f->first.substr(0, 7);
			var2 = j->first.substr(0, 7);
			// std::cout << "---------> " << var1 << '\n';
			// std::cout << "---------> " << var2 << '\n';
			if (var1.compare(var2))
			{
				var1 = f->first.substr(8);
				var2 = j->first.substr(8);

				if (strtod(var1.c_str(), &str) == strtod(var2.c_str(), &str))
				{
					var1 = f->second;
					var2 = j->second;
					// std::cout << "----date to exechange-----> " << var1 << '\n';
					std::cout << "---valueeee ------> " << var2 << '\n';
					std::cout << f->first << " => " << f->second << " = " <<strtod(var1.c_str(), &str) * strtod(var2.c_str(), &str) << '\n';
					return (10);
				}
			}
		}
		}
		return (10);
}
}



void CheckErrors(std::vector<std::pair<std::string, std::string> >::iterator f, int flag, std::vector<std::pair<std::string, std::string> > data)
{
	try{
		// if (flag == 0 && (!f->first.compare("date") || !f->second.compare("value")))
		// 	return;
		if (!flag&& (f->first.compare("date") || f->second.compare("value")))
			throw std::string("Error: correct the first line .");
		else if (!f->first.compare("Error: Bad input"))
			throw f->first + std::string(" => ") + f->second;
		else if (!DVrangeCheck(f, data) && flag)
			throw std::string("Error: in date config.");
		else if (DVrangeCheck(f, data) == -1 && flag)
			throw std::string("Error: invalide value to Exchange.");
		else if (DVrangeCheck(f, data) == -2 && flag)
			throw std::string("Error: not a possitive number.");
		else if (DVrangeCheck(f, data) == -3 && flag)
			throw std::string("Error: too large a number.");
	}
	catch (std::string e)
	{
		std::cerr << e << '\n';
	}
}

void BitcoinExchange::StartExchange()
{
	std::vector<std::pair<std::string, std::string> >::iterator it = Input.begin();
	int i;

	i = 0;
	for (; it != Input.end(); it++)
	{
		CheckErrors(it, i, this->data_csv);
		i++;
	}
}