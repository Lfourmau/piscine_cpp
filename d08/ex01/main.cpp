#include "span.hpp"

int main(void)
{
	Span sp = Span(2);
	sp.fill_container(50, -50);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}