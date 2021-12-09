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
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base b;
	try
	{
		b = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				b = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::bad_cast& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}

}

int main(void)
{
	Base *test;
	for (size_t i = 0; i < 40; i++)
	{
		test = generate();
		identify(test);
		identify(*test);
		delete test;
	}
}