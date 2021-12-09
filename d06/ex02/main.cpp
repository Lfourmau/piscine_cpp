#include "Base.hpp"

Base * generate(void)
{
	int random_value = rand() % 3 + 1;
	Base *ret = NULL;

	if (random_value == 1)
	{
		std::cout << "Instance of A just created" << std::endl;
		ret = new A;
		return (ret);
	}
	else if (random_value == 2)
	{
		std::cout << "Instance of B just created" << std::endl;
		ret = new B;
		return (ret);
	}
	else if (random_value == 3)
	{
		std::cout << "Instance of C just created" << std::endl;
		ret = new C;
		return (ret);
	}
	return (ret);
}


void identify(Base * p)
{
	try
	{
		A* Aptr = dynamic_cast<A*>(p);
		if (Aptr)
			std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		B* Bptr = dynamic_cast<B*>(p);
		if (Bptr)
			std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		C* Cptr = dynamic_cast<C*>(p);
		if (Cptr)
			std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main(void)
{
	Base *test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
	test = generate();
	identify(test);
	delete test;
}