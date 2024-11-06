#include "Serialize.hpp"

uintptr_t Serialize::serialize(Data* ptr)
{
	std::cout << "serialize function was calles.\n";
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw)
{
	std::cout << "deserialize data was called.\n";
	return (reinterpret_cast<Data *>(raw));
}
