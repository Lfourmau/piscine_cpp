#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point p1;
	Point p2(10, 0);
	Point p3(0, 10);	

	Point test1(0, 0);
	Point test2(1, 8 );
	Point test3(-2, 7);
	Point test4( 0.01f, 0.01f );
	Point test5( 53, 2 );

	std::cout << "Triangle : " << p1 << " " << p2 << " " << p3 << std::endl;
	std::cout << "Test " << test1 << " : " << (bsp(p1, p2, p3, test1) ? "true" : "false") << std::endl;
	std::cout << "Test " << test2 << " : " << (bsp(p1, p2, p3, test2) ? "true" : "false") << std::endl;
	std::cout << "Test " << test3 << " : " << (bsp(p1, p2, p3, test3) ? "true" : "false") << std::endl;
	std::cout << "Test " << test4 << " : " << (bsp(p1, p2, p3, test4) ? "true" : "false") << std::endl;
	std::cout << "Test " << test5 << " : " << (bsp(p1, p2, p3, test5) ? "true" : "false") << std::endl;

	return 0;
}