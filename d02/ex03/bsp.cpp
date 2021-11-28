#include "Point.hpp"

float sign (Point p1, Point p2, Point p3)
{
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool b1, b2, b3;

    b1 = sign(a, b, c) < 0.0f;
    b2 = sign(a, c, point) < 0.0f;
    b3 = sign(a, point, b) < 0.0f;

    return ((b1 == b2) && (b2 == b3));
}