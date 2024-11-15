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
			// int a = b - a;
			for (it = f.begin(); it != f.end(); ++it)
			{
				std::cout << "=======" << *(it) << "============\n";
				std::set<int>::iterator If = it;
				++If;
				for (; If != f.end() ;If++)
				{
					std::cout << "=======" << *(If) << "============\n";
					if (*(If) - *(it) < b)
					{
						// std::cout << "=====\n";
						std::cout << *(If) << "\n";
						std::cout << *(it) << "\n";
						// std::cout << "=====\n";
						b = *(If) - *(it);
					}
				}
				std::cout << "\n\n";
				// i++;
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