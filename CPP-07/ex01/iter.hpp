#ifndef ITER_HPP
#define ITER_HPP

#include <string.h>
#include <iostream>

template <typename T, typename F>
void iter(T arr, int length, F f)
{
	if (!arr || !f)
		return ;
	for (int i = 0; i < length; i++)
		f(arr[i]);
}

// template<typename F>
// void print(F &to_print)
// {
// 	std::cout << to_print << std::endl;
// }

#endif