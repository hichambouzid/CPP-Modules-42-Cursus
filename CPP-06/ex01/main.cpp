#include "Serialize.hpp"
#include "Data.hpp"

int main()
{
	Data *n = new Data;
	uintptr_t foo = 0;
	std::cout << "foo:   " << foo << std::endl;
	foo = Serialize::serialize(n);

	// foo -= 1;
	std::cout << "                From data to uintptr.\n";
	std::cout << "************************************************************" << std::endl;
	std::cout << n->f << std::endl;
	std::cout << foo<< std::endl;
	std::cout << "************************************************************" << std::endl;
	// foo += 1;
	n = Serialize::deserialize(foo);
	std::cout << "                 From uintptr to data.\n";
	std::cout << "************************************************************" << std::endl;
	std::cout << n->f << std::endl;
	std::cout << foo<< std::endl;
	std::cout << "************************************************************" << std::endl;

}