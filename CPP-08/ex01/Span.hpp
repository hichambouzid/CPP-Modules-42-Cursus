#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <set>
#include <stdlib.h>

class Span
{
		unsigned int nbr;
		unsigned int increment;
		std::multiset<int> f;
	public:
		Span(unsigned int number);
		Span(const Span & s);
		Span & operator=(const Span & s);
		unsigned int getNbr() const;
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addNumbers();
};

#endif