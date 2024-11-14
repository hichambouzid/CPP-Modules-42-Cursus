#include "easyfind.hpp"


int main()
{
	std::list<int> arr;
	arr.push_back(10);
	arr.push_back(11);
	arr.push_back(12);
	arr.push_back(13);
	arr.push_back(4);
	arr.push_back(15);
	easyfind(arr, 15);
}