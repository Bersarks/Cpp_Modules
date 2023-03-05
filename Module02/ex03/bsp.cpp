#include "Point.hpp"

//	barycentric coordinates method
//	x = abs((x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)) / 2)
float calculateArea(const Point& p1, const Point& p2, const Point& p3)
{
	float	x = abs((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
					 p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
					 p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2);
	return (x);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	t1,t2,t3,t4;

	t1 = calculateArea(a, b, c);
	t2 = calculateArea(point, a, b);
	t3 = calculateArea(point, a, c);
	t4 = calculateArea(point, b, c);
	return (t1 == t2 + t3 + t4);
}
