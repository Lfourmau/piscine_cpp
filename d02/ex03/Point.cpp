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
std::ostream& operator<<(std::ostream& out, Point const& rhs)
{
	out << rhs.getX().toFloat() << ";";
	out << rhs.getY().toFloat();
	return (out);
}

Fixed const Point::getX(void) const
{
	return (this->_x);
}
Fixed const Point::getY(void) const
{
	return (this->_y);
}