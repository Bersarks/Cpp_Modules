#pragma once

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(Fixed first, Fixed second);
		Point(const Point &copy);
		~Point();
		const Fixed	getX() const;
		const Fixed	getY() const;
		Point	&operator=(const Point &src);

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
