#include "iter.hpp"


int main(void)
{
	float tab[] = {1.6f, 2.6f, 3.6f, 4.6f, 5.6f, 6.6f, 7.6f, 8.6f, 9.6f};
	for (size_t i = 0; i < 9; i++)
		std::cout << tab[i] << " - ";
	std::cout << std::endl;
	
	iter(tab, 9, &inc);
	std::cout << std::endl;
	return (0);
}