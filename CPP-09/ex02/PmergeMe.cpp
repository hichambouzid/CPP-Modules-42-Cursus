#include "PmergeMe.hpp"

std::queue<double> FirstData;
std::list<double> SecondData;

std::queue<double> mergeSortQueue(std::queue<double> &left, std::queue<double> &right)
{
	std::queue<double> result;
	std::set<double> unique;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			if (unique.find(left.front()) == unique.end())
			{
				result.push(left.front());
				unique.insert(left.front());
			}
				left.pop();
		}
		else
		{
			if (unique.find(right.front()) == unique.end())
			{
				result.push(right.front());
				unique.insert(right.front());
			}
			right.pop();
		}
	}
while (!left.empty()) {
        if (unique.find(left.front()) == unique.end()) {
            result.push(left.front());
            unique.insert(left.front());
        }
        left.pop();
    }

    while (!right.empty()) {
        if (unique.find(right.front()) == unique.end()) {
            result.push(right.front());
            unique.insert(right.front());
        }
        right.pop();
    }
	return (result);
}

std::queue<double> splitQueue(std::queue<double> &mainq)
{
	std::queue<double> left, right;
	size_t lenght = mainq.size(); 
	if (lenght <= 1)
		return (mainq);


	for (size_t i = 0; i < lenght / 2; i++)
	{
		left.push(mainq.front());
		mainq.pop();
	}
	for (size_t i = lenght / 2; i < lenght; i++)
	{
		right.push(mainq.front());
		mainq.pop();		
	}
	left = splitQueue(left);
	right = splitQueue(right);
	return (mergeSortQueue(left, right));
}

long	get_current_time(void)
{
	struct timeval	time;
	long			nbr;

	if (gettimeofday(&time, NULL))
	{
		std::cerr << "Error: was happen ind gettimeofday\n";
		return (-1);
	}
	nbr = time.tv_sec * 1000000;
	nbr += time.tv_usec;
	return (nbr);
}


std::list<double> mergeSortList(std::list<double> &left, std::list<double> &right)
{
	std::list<double> result;
	std::set<double> unique;

	// std::cout << "left size: " << left.size() << " right size: " << right.size() << '\n';
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			if (unique.find(left.front()) == unique.end())
			{
				result.push_back(left.front());
				unique.insert(left.front());
			}
				left.pop_front();
		}
		else
		{
			if (unique.find(right.front()) == unique.end())
			{
				result.push_back(right.front());
				unique.insert(right.front());
			}
			right.pop_front();
		}
	}
while (!left.empty()) {
        if (unique.find(left.front()) == unique.end()) {
            result.push_back(left.front());
            unique.insert(left.front());
        }
        left.pop_front();
    }

    while (!right.empty()) {
        if (unique.find(right.front()) == unique.end()) {
            result.push_back(right.front());
            unique.insert(right.front());
        }
        right.pop_front();
    }
	return (result);
}

std::list<double> splitList(std::list<double> &mainq)
{
	std::list<double> left, right;
	size_t lenght = mainq.size(); 
	if (lenght <= 1)
		return (mainq);


	for (size_t i = 0; i < lenght / 2; i++)
	{
		left.push_back(mainq.front());
		mainq.pop_front();
	}
	for (size_t i = lenght / 2; i < lenght; i++)
	{
		right.push_back(mainq.front());
		mainq.pop_front();		
	}
	left = splitList(left);
	right = splitList(right);
	return (mergeSortList(left, right));
}

void SortData()
{
	double end, start;
	start = get_current_time();
	SecondData = splitList(SecondData);
	end = get_current_time();
	int i = 0;
	std::cout << "After:  " ;
	for (std::list<double>::iterator it = SecondData.begin(); it != SecondData.end() && i++ < 5; it++)
		std::cout << ' ' << *it;
	if (SecondData.size() > 5)
		std::cout << " [...]";
	std::cout << '\n';
	std::cout << "Time to process a range of " << SecondData.size() <<
		" elements with std::list : " << (end - start) / 1000 << " us\n";
	start = get_current_time();
	FirstData = splitQueue(FirstData);
	end = get_current_time();
	std::cout << "After: " ;
	// while (!FirstData.empty())
	// {
	// 	std::cout  << " " << FirstData.front();
	// 	FirstData.pop();
	// }
	std::cout << "\n";
	std::cout << "Time to process a range of " << FirstData.size() <<
		" elements with std::queue : " << (end - start) / 1000 << " us\n";
}

void fillData(int ac, char **av)
{
	char *str;
	long number;

	for (int i = 1; i < ac; i++)
	{
		number = strtod(av[i], &str);
		if (*str || number < 0 || number > 2147483647)
		{
			std::cerr << "Error\n";
			exit(-1);
		}
		FirstData.push(number);
		SecondData.push_back(number);
	}
	std::cout << "Before: " ;
	int i= 0;
	for (std::list<double>::iterator it = SecondData.begin(); it != SecondData.end() && i++ < 5; it++)
		std::cout << ' ' << *it;
	if (SecondData.size() > 5)
		std::cout << " [...]";
	std::cout << '\n';
	SortData();
}