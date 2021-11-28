#include "Point.hpp"

Point::Point(void) : _x(Fixed()), _y(Fixed()) {};
Point::~Point(void) {};

Point::Point(Point const& src)
{
	//std::cout << "Copy constructor called" << std::endl;
	operator=(src);
}
Point::Point(Fixed const x, Fixed const y) : _x(Fixed(x)), _y(Fixed(y))
{

}

Point& Point::operator=(Point const& rhs)
{
	(void)rhs;
	return (*this);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	(void)a;
	(void)b;
	(void)c;
	(void)point;
	return (true);
}

Fixed const Point::getX(void)
{
	return (this->_x);
}
Fixed const Point::getY(void)
{
	return (this->_y);
}