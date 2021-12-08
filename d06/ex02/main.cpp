#include "Base.hpp"

Base * generate(void)
{
	int random_value = rand() % 3 + 1;
	Base *ret = NULL;

	if (random_value == 1)
	{
		std::cout << "Instance of A just created" << std::endl;
		A ptr;
		ret = &ptr;
		return (ret);
	}
	else if (random_value == 2)
	{
		std::cout << "Instance of B just created" << std::endl;
		B ptr;
		ret = &ptr;
		return (ret);
	}
	else if (random_value == 3)
	{
		std::cout << "Instance of C just created" << std::endl;
		C ptr;
		ret = &ptr;
		return (ret);
	}
	return (ret);
}


void identify(Base * p)
{
	A* Aptr = dynamic_cast<A*>(p);
	if (Aptr)
	{
		std::cout << "A" << std::endl;
		return;
	}
	B* Bptr = dynamic_cast<B*>(p);
	if (Bptr)
	{
		std::cout << "B" << std::endl;
		return;
	}
	C* Cptr = dynamic_cast<C*>(p);
	if (Cptr)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

int main(void)
{
	Base *test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
	test = generate();
	identify(test);
}