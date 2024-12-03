#include "PmergeMe.hpp"



int main(int ac, char **av)
{
	// std::list<int> data_1;
	// std::list<int> chunk0;

	// int number;
	(void)ac;
	(void)av;
	if (ac < 3)
	{
		std::cerr << "Error: invalide number of Argument. \n";
		return (0);
	}
	else
		fillData(ac, av);	
	// data_1 = splitList(chunk0);
	// while (!data_1.empty())
	// {
	// 	std::cout << data_1.front() << "  ";
	// 	data_1.pop_front();
	// }
}