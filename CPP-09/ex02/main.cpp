#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::list<int> data_1;
	std::list<int> chunk0;

	int number;

	if (ac < 3)
	{
		std::cerr << "Error: invalide number of Argument. \n";
		return (0);
	}
	for (int i = 1; i < ac ; i++)
	{
		number = atoi(av[i]);
		if (number < 0)
		{
			std::cerr << "Error: is not a positive number.\n";
			exit(-1);
		}
		else
			chunk0.push_back(number);
	}
	data_1 = splitList(chunk0);
	while (!data_1.empty())
	{
		std::cout << data_1.front() << "  ";
		data_1.pop_front();
	}
}