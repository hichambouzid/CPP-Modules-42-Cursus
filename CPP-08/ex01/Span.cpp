#include "Span.hpp"


Span::Span(unsigned int number)
{
	this->nbr = number;

	this->increment = 0;
}

Span::Span(const Span & s)
{
	this->nbr = s.getNbr();
	this->increment = s.increment;


}

Span & Span::operator=(const Span & s)
{
	if (this != &s)
	{
		this->nbr = s.getNbr();
		this->increment = s.increment;
	}
	return (*this);
}


unsigned int Span::getNbr() const
{
	return (this->nbr);
}

void Span::addNumber(int n)
{
	try
	{
		if (increment >= nbr)
		{
			throw std::string("There is no place array is full.");
		}
		else
		{
			f.insert(n);
			increment++;
		}
	}
	catch(const std::string e)
	{
		std::cerr << e << '\n';
	}
}


int Span::shortestSpan()
{
	try
	{
		if (f.size() <= 1)
			throw std::string("Array containe only :");
		else
		{
			std::set<int>::iterator it = f.begin();
			int a = *(it) ;
			int b = *(++it) - a;
			for (it = f.begin(); it != f.end(); ++it)
			{
				std::set<int>::iterator If = it;
				++If;
				for (; If != f.end() ;If++)
				{
					if (*(If) - *(it) < b)
						b = *(If) - *(it);
				}
			}
			return (b);
		}

	}
	catch (const std::string e)
	{
		std::cerr << e << f.size() << '\n';
	}
	return (0);
}

int Span::longestSpan()
{
		try
	{
		if (f.size() <= 1)
			throw std::string("Array containe only :");
		else
		{
			std::set<int>::iterator it = f.begin();
			int a = *(it);
			for (; it != f.end(); it++);
			return (*(--it) - a);
		}

	}
	catch (const std::string e)
	{
		std::cerr << e << f.size() << '\n';
	}
	return (0);

}


void Span::addNumbers()
{
	int how;

	how = (int)nbr - (int)increment;
	if (how > 0)
	{
		srand(time(0));
		for (int i = 0; i < how; i++)
			f.insert(rand());
		// ======= result of generating numbers =========
		// for (std::multiset<int>::iterator it = f.begin(); it != f.end(); it++)
		// 		std::cout << "=======> " << *(it) << '\n';
	}
}
