#include "mutantstack.hpp"

int main(void)
{
	Mutantstack<int> stack;

	stack.push(8);
	stack.push(8);
	stack.push(8);
	stack.push(8);
	stack.push(8);
	std::cout << stack.begin() << std::endl;
	std::cout << stack.end() << std::endl;
	return (0);
}