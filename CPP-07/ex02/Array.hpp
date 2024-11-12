#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
template<typename T>

class Array
{
	T *array;
	int Size;
	public:
		Array();
		Array(int n);
		T & operator=(const Array &ar);
		T & operator[](int index) const;
		int size() const;
		~Array();
};


#include "Array.tpp"
#endif