#include "mutantstack.hpp"
#include <iostream>

int main()
{
	std::cout << "Building classic instance" << std::endl;
	MutantStack<int> mstack;
	std::cout << "Building instance by copy" << std::endl;
	MutantStack<int> mstack2(mstack);
	std::cout << "Pushing 8 in copy instance" << std::endl;
	mstack2.push(8);
	std::cout << "Print top value in copy instance" << std::endl;
	std::cout << mstack2.top() << std::endl;
	std::cout << "classic instance = copy instance" << std::endl;
	mstack = mstack2;
	std::cout << "classic instance top value" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "push 5 and 17 in classic instance" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top value in classic instance" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "removing a value in classic instance" << std::endl;
	mstack.pop();
	std::cout << "New size of classic instance" << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "It tests" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
