#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(Point const& src);
		Point(Fixed const x, Fixed const y);
		Point& operator=(Point const& rhs);
		~Point(void);
		Fixed const getX(void);
		Fixed const getY(void);

	private:
		Fixed const _x;
		Fixed const _y;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif