#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(Fixed first, Fixed second) : x(first), y(second)
{
}

Point::Point(const Point &copy) : x(copy.getX()), y(copy.getY())
{
}

Point::~Point()
{
}

Point	&Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

Fixed	const Point::getX() const
{
	return (this->x);
}

Fixed	const Point::getY() const
{
	return (this->y);
}
