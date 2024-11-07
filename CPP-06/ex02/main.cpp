#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand(time(0));
	switch (std::rand() % 3)
	{
		case 0:
		{
			std::cout << "A	was created.\n";
			return (new A);
		}
		case 1:
		{
			std::cout << "B	was created.\n";
			return (new B);
		}
		case 2:
		{
			std::cout << "C was created.\n";
			return (new C);
		}
		default:
			return (new A);
	}
}

void identify(Base* p)
{
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;
	Base *base = NULL;

	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);
	base = dynamic_cast<Base *>(p);
	if (a)
		std::cout << "Base contain an object of A class.\n";
	else if (b)
		std::cout << "Base contain an object of B class.\n";
	else if (c)
		std::cout << "Base contain an object of C class.\n";
	else if (base)
		std::cout << "Base class.\n";
	else
		std::cout << "Unknown type.\n";

}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "================ succesfully cast to a ====================\n";
		(void)a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " to A" <<'\n';
	}
		try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "=========== succesfully cast to b =================\n";
		(void)b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " to B" <<'\n';
	}
		try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "================ succesfully cast to c ================\n";
		(void)c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " to C" <<'\n';
	}
	try
	{
		Base &base = dynamic_cast<Base&>(p);
		std::cout << "================ successfully cast to Base ================\n";
		(void)base;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " to Base" <<'\n';
	}
	
}

int main()
{
	Base *base = generate();
	// Base *b = new Base;
	identify(base);
	delete base;
	// delete b;
	std::cout << "\n\n\n\n\n";
	Base a;
	identify(a);

}