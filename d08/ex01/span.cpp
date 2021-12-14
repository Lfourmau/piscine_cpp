#include "span.hpp"

Span::Span(unsigned int n) : max_length(n), stored(0) {};

void Span::addnumber(int to_add)
{
	try
	{
		if (this->stored == 50)
			throw(std::exception());
		this->lst.push_back(to_add);
		this->stored++;
	}
	catch(const std::exception& e)
	{
		std::cout << "Too much numbers in the list !" << std::endl;
	}
	
}

int Span::shortestSpan(void)
{

}
int Span::longestSpan(void)
{
	return (std::max(this->lst));
}