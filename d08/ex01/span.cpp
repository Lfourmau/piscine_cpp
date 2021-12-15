#include "span.hpp"

Span::Span(unsigned int n) : max_length(n), stored(0) {};
Span::Span(unsigned int n, int range_max, int range_min) : max_length(n), stored(0)
{
	this->lst = std::list<int>(n);
	fill_container(this->getBegin(), this->getEnd(), range_max, range_min);
}

void Span::addNumber(int to_add)
{
	try
	{
		if (this->stored >= this->max_length)
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
	try
	{
		if (this->stored < 2)
			throw(std::exception());
		this->lst.sort();
		std::cout << std::endl;
		std::list<int>::const_iterator it;	
		std::list<int>::const_iterator ite = this->lst.end();	
		for (it = this->lst.begin(); next(it) != ite; ++it)
		{
			//std::cout << "[" << "IT = " << *it << ", IT + 1 = " << *next(it) << "RESULT -> " << *next(it) - *it << "]" << std::endl;
			if (*next(it) - *it < this->smallest_itrvl)
				this->smallest_itrvl = *next(it) - *it;
		}
		return (this->smallest_itrvl);
	}
	catch(const std::exception& e)
	{
		std::cout << "Please add numbers in the list. Error code : ";
		return (-1);
	}
	
}
int Span::longestSpan(void)
{
	try
	{
		if (this->stored < 2)
			throw(std::exception());
		int max = *(std::max_element(this->lst.begin(), this->lst.end()));
		int min = *(std::min_element(this->lst.begin(), this->lst.end()));
		return (max - min);
	}
	catch(const std::exception& e)
	{
		std::cout << "Please add numbers in the list. Error code : ";
		return (-1);
	}
	
}