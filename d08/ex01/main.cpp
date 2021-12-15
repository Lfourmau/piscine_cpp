#include "span.hpp"

void printvl(int val)
{
	std::cout << "[" << val << "]";
}

int main(void)
{

	std::cout << "////Basics TESTS////" << std::endl;
	std::cout << "Building classic instance" << std::endl;
	Span sp = Span(10);
	std::cout << "Building filled instance" << std::endl;
	Span sp2 = Span(10, 50, -20);

	std::cout << "Print filled instance" << std::endl;
	for_each(sp2.getBegin(), sp2.getEnd(), printvl);
	std::cout << std::endl;
	std::cout << "Trying to add a number to filled instance" << std::endl;
	sp2.addNumber(89);
	std::cout << "Trying to add 10 numbers to classic instance" << std::endl;
	sp.addNumber(-42);
	sp.addNumber(142);
	sp.addNumber(1142);
	sp.addNumber(48);
	sp.addNumber(4);
	sp.addNumber(-452);
	sp.addNumber(895);
	sp.addNumber(0);
	sp.addNumber(8);
	sp.addNumber(5);
	std::cout << "Print classic instance" << std::endl;
	for_each(sp.getBegin(), sp.getEnd(), printvl); std::cout << std::endl;
	std::cout << "Trying to add a number to classic instance" << std::endl;
	sp2.addNumber(111);
	std::cout << "shortest in classic : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest in classic : " << sp.longestSpan() << std::endl;
	
	std::cout << "////Big TESTS////" << std::endl;
	std::cout << "Building big instance" << std::endl;
	Span sp3 = Span(1500, 10000, -10000);
	std::cout << "Print big instance" << std::endl;
	for_each(sp3.getBegin(), sp3.getEnd(), printvl); std::cout << std::endl;
	std::cout << "shortest in big : " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest in big : " << sp3.longestSpan() << std::endl;

	std::cout << "////Exceptions TESTS////" << std::endl;
	std::cout << "Building 1 nb instance" << std::endl;
	Span sp4 = Span(1);
	sp4.addNumber(42);
	std::cout << "shortest in 1nb instance : " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest in 1nb instance : " << sp4.longestSpan() << std::endl;


	
	return (0);
}