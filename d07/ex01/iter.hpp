#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	inc(T value)
{
	value++;
	std::cout << value << " - ";
}

template <typename T>
void	iter(T *ptr, unsigned int length, void (*funcPtr)(T param))
{
	unsigned int count = 0;

	while (count < length)
	{
		funcPtr(ptr[count]);
		count++;
	}
}


#endif