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
	Data *end;

	std::cout << &test << std::endl;
	end = deserialize(serialize(&test));
	std::cout << end << std::endl;
	end->nb = 25;
	std::cout << end->nb << std::endl;
	return (0);
}