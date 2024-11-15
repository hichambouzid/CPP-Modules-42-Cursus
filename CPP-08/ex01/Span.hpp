#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <set>

class Span
{
		unsigned int nbr;
		unsigned int increment;
		std::set<int> f;
	public:
		Span(unsigned int number);
		Span(const Span & s);
		Span & operator=(const Span & s);
		unsigned int getNbr() const;
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
};

#endif