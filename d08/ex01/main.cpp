#include "span.hpp"

int main(void)
{
	Span sp = Span(1199);
	for (size_t i = 0; i < 150; i++)
		sp.addNumber(i + 2);
	for (size_t i = 150; i < 800; i++)
		sp.addNumber(i + 20);
	for (size_t i = 800; i < 1200; i++)
		sp.addNumber(i + 200);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}