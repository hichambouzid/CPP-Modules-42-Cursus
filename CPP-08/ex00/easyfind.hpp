#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <vector>
#include <algorithm>
#include <iostream>
#include <list>
// #include <stack>
template<typename T>
void easyfind(T f, int e)
{
	typename T::iterator it;

	it = std::find(f.begin(), f.end(), e);
	if (it != f.end())
		std::cout << "Element is found inside this array.\n";
	else
		std::cout << "Elemet not found.\n";
}


#endif