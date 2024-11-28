#include "RPN.hpp"

static std::stack<int> Numbers;
static std::stack<char *> operators;

void ReversePolishNumber()
{
	char *c;
	int total = Numbers.top();
	Numbers.pop();

	while (!operators.empty())
	{
		// std::cout << "========\n";
		c = operators.top();
		operators.pop();
		if (*c == '+')
			total += Numbers.top();
		if (*c == '-')
			total -= Numbers.top();
		if (*c == '*')
			total *= Numbers.top();
		if (*c == '/')
			total /= Numbers.top();
		Numbers.pop();
	}
	if (Numbers.empty() && !operators.empty())
		std::cout << "Error: there is no enough of operators .\n";
	else
		std::cout << total << '\n';
}

void ReverseStack(){

	std::stack<int>  TmpStack;

	while (!Numbers.empty())
	{
		TmpStack.push(Numbers.top());
		Numbers.pop();
	}
	Numbers = TmpStack;
}

void StoreOperators(int ac, char **av)
{
	char *str;

	for (int j = 1; j < ac; j++)
	{
		str = strtok(av[j], " \t\v1 2 3 4 5 6 7 8 9");
		while (str)
		{
			if (*str == '+' || *str == '-' || *str == '*' || *str == '/')
			{
				std::cout << "++++++ " << *str << '\n';
				for (int i = 0; str[i]; i++)
				{
					if (str[i] != *str)
					{
						std::cerr << "Error: invalide operator.\n";
						exit(-1);
					}
				}
				operators.push(str);
			}
			std::cout << "-----> " << *str << '\n';
			str = strtok(NULL, " \t\v");;
		}
	}
	ReverseStack();
	ReversePolishNumber();
}

void StoreArgumment(int ac, char **av)
{
	char *str;
	char *ptr = NULL;
	int number;

	for (int j = 1; j < ac; j++)
	{
		str = strtok(av[j], " \t\v*+-/");
		while (str)
		{
			number = strtod(str, &ptr);
			if (number > 10 || *ptr)
			{
				std::cerr << "Error: invalide number.\n";
				exit(-1);
			}
			else
				Numbers.push(number);
			std::cout << "-----> " << *str << '\n';
			str = strtok(NULL, " \t\v*+-/");
		}
	}
	StoreOperators(ac, av);
}