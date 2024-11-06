#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include "Data.hpp"
#include <cstdint>
#include <iostream>
class Data;
class Serialize
{
	Serialize();
	public:
	static 	uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
#endif