#include "whatever.hpp"

int main(void)
{
	std::cout << "---MIN/MAX TETS----" << std::endl;
	std::cout << max(8.25, 6.2) << std::endl;
	std::cout << min(8.25, 6.2) << std::endl;
	std::cout << max(8.9, 6.2) << std::endl;
	std::cout << min(-89, -125) << std::endl;
	std::cout << max(8.25, 112.36) << std::endl;
	std::cout << min(8.25, 112.36) << std::endl;
	std::cout << max(9.012f, 6.2f) << std::endl;
	std::cout << min(9.012f, 6.2f) << std::endl;

	std::cout << "---SWAP TETS----" << std::endl;
	int a = 5, b = 10;
	float c = 5.5f, d = 10.2f;

	std::cout << "A and B before swap : " << a << " - " << b << std::endl;
	swap(&a, &b);
	std::cout << "A and B after swap : " << a << " - " << b << std::endl;
	std::cout << "C and D before swap : " << c << " - " << d << std::endl;
	swap(&c, &d);
	std::cout << "C and D after swap : " << c << " - " << d << std::endl;

	return(0);
}