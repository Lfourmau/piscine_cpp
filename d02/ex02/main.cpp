#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a(89);
	Fixed const b(78);
	bool test;
	Fixed addition(a + b);

	test = a < b;
	std::cout << "< "<< test << std::endl;
	test = a > b;
	std::cout << "> "<< test << std::endl;
	test = a <= b;
	std::cout << "<= "<< test << std::endl;
	test = a >= b;
	std::cout << "<= "<< test << std::endl;
	test = (a == b);
	std::cout << "== "<< test << std::endl;
	test = (a != b);
	std::cout << "!= "<< test << std::endl;
	std::cout << "+" << addition << std::endl;
	
	return 0;
}