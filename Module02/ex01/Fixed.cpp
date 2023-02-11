#include "Fixed.hpp"

Fixed::Fixed()
{
	fixedPointValue = 0;
#ifdef DEBUG
	std::cout << "Default constructor called" << std::endl;
#endif
}

Fixed::Fixed(const int integer)
{
#ifdef DEBUG
	std::cout << "Int constructor called" << std::endl;
#endif
	fixedPointValue = integer << _fractionalBits;
}

Fixed::Fixed(const float floatingPoint)
{
#ifdef DEBUG
	std::cout << "Float constructor called" << std::endl;
#endif
	fixedPointValue = roundf(floatingPoint * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
#ifdef DEBUG
	std::cout << "Copy constructor called" << std::endl;
#endif
	*this = copy;
}

Fixed::~Fixed()
{
#ifdef DEBUG
	std::cout << "Destructor called" << std::endl;
#endif
}

Fixed& Fixed::operator=(const Fixed &copy)
{
#ifdef DEBUG
	std::cout << "Copy assignment operator called" << std::endl;
#endif
	setRawBits(copy.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

int		Fixed::getRawBits(void) const
{
	return (fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fixedPointValue / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (fixedPointValue >> _fractionalBits);
}
