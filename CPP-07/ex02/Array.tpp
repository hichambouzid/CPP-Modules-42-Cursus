#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	Size = 10;
	array = new T[10];
}

template<typename T>
Array<T>::Array(int n)
{
	Size = n;
	array = new T[n];
}

template<typename T>
T & Array<T>::operator=(const Array &ar)
{
	if (this != ar)
	{
		for (int i = 0; i < Size; i++)
			this->array[i] = ar.array[i];
	}
	return (*this);
}

template<typename T>
T & Array<T>::operator[](int index) const
{
	if (index >= Size || index < 0)
		throw std::out_of_range("index out of range.");
	return (array[index]);
}

template<typename T>
int Array<T>::size() const
{
	return (Size);
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Destructor of Template class array was called.\n";
	delete [] array;
}