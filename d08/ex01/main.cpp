#include "span.hpp"

int main(void)
{
	Span sp = Span(1200);
	srand(time(NULL));

	for (size_t i = 0; i < 1200; i++)
		sp.addNumber(rand() % 2000);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}