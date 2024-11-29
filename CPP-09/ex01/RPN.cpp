#include "RPN.hpp"

static std::stack<int> Numbers;
static std::stack<char *> operators;

void ReversePolishNumber()
{
	char *c;
	int left;
	int right;

	if (Numbers.size() < 2 || operators.empty())
	{
		std::cerr << (Numbers.size() < 2 ? "Error: invalide syntax of reverse polish Number .\n" :
				"Error: there is no operator to calculate .\n");
		exit(-1);
	}
	right = Numbers.top();
	Numbers.pop();
	left = Numbers.top();
	Numbers.pop();
	c = operators.top();
	operators.pop();
	if (*c == '+')
		Numbers.push(left + right);
	if (*c == '-')
		Numbers.push(left - right);
	if (*c == '*')
		Numbers.push(left * right);
	if (*c == '/')
		Numbers.push(left / right);
}


void StoreArgumment(int ac, char **av)
{
	char *str;
	char *ptr = NULL;
	int number;
	// char *tmp;
	// int flag = 1;
	for (int j = 1; j < ac; j++)
	{
		str = strtok(av[j], " \t\v");
		while (str)
		{
			number = strtod(str, &ptr);
			if (*str == '+' || *str == '-' || *str == '*' || *str == '/')
			{
				for (int i = 0; str[i]; i++)
				{
					if (str[i] != *str)
					{
						std::cerr << "Error: invalide operator.\n";
						exit(-1);
					}
				}
				operators.push(str);
				ReversePolishNumber();

			}
			else if (number >= 10 || *ptr)
			{
				std::cerr << "Error: invalide number.\n";
				exit(-1);
			}
			else
				Numbers.push(number);
			str = strtok(NULL, " \t\v");
		}
	}
	if (Numbers.size() == 1)
			std::cout << Numbers.top() << '\n';
	else
		std::cout << "We need more operators man .\n";
}