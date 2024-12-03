#include "PmergeMe.hpp"

std::queue<int> mergeSortQueue(std::queue<int> &left, std::queue<int> &right)
{
	std::queue<int> result;

	std::cout << "left size: " << left.size() << " right size: " << right.size() << '\n';
	while (!left.empty() && !right.empty())
	{
		if (left.front() > right.front())
		{
			result.push(right.front());
			right.pop();
		}
		else
		{
			result.push(left.front());
			left.pop();
		}
	}
	while(!left.empty() || !right.empty())
	{
		if (!left.empty())
		{
			result.push(left.front());
			left.pop();
		}
		else
		{
			result.push(right.front());
			right.pop();		
		}
	}
	return (result);
}

std::queue<int> splitQueue(std::queue<int> &mainq)
{
	std::queue<int> left, right;
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

std::list<int> mergeSortList(std::list<int> &left, std::list<int> &right)
{
	std::list<int> result;

	std::cout << "left size: " << left.size() << " right size: " << right.size() << '\n';
	while (!left.empty() && !right.empty())
	{
		if (left.front() > right.front())
		{
			result.push_back(right.front());
			right.pop_front();
		}
		else
		{
			result.push_back(left.front());
			left.pop_front();
		}
	}
	while(!left.empty() || !right.empty())
	{
		if (!left.empty())
		{
			result.push_back(left.front());
			left.pop_front();
		}
		else
		{
			result.push_back(right.front());
			right.pop_front();		
		}
	}
	return (result);
}

std::list<int> splitList(std::list<int> &mainq)
{
	std::list<int> left, right;
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
