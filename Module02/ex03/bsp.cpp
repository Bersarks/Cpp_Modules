#include "Point.hpp"

// barycentric coordinates method
float calculateArea(const Point& p1, const Point& p2, const Point& p3)
{
	//		x = abs((x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)) / 2)
	float	x = abs((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
					 p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
					 p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2);
	return (x);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	float	t1,t2,t3,t4;

	// calculate area of triangle ABC
	t1 = calculateArea(a, b, c);
	// calculate area of triangle PAB
	t2 = calculateArea(point, a, b);
	// calculate area of triangle PAC
	t3 = calculateArea(point, a, c);
	// calculate area of triangle PBC
	t4 = calculateArea(point, b, c);
	// if sum of A, B, C, D is same as A, then point lies inside the triangle
	// t2, t3 ve t4'ün alanları toplamı t1'e eşitse nokta üçgenin içinde demektir.
	// çünkü t2, t3 ve t4'ün alanları toplamı t1'in alanının toplamına eşittir.
	return (t1 == t2 + t3 + t4);
}
