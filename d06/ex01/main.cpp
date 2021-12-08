#include "serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data test;

	std::cout << &test << std::endl;
	std::cout << deserialize(serialize(&test)) << std::endl;
	return (0);
}