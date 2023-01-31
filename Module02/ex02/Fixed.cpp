#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
#ifdef DEBUG
	std::cout << "Default constructor called" << std::endl;
#endif
}

Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{
#ifdef DEBUG
	std::cout << "Int constructor called" << std::endl;
#endif
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _fractionalBits)))
{
#ifdef DEBUG
	std::cout << "Float constructor called" << std::endl;
#endif
}

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
#ifdef DEBUG
	std::cout << "Copy constructor called" << std::endl;
#endif
}

Fixed::~Fixed()
{
#ifdef DEBUG
	std::cout << "Destructor called" << std::endl;
#endif
}

Fixed	&Fixed::operator=(const Fixed &other)
{
#ifdef DEBUG
	std::cout << "Assignation operator called" << std::endl;
#endif
	_value = other.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Greater than operator called" << std::endl;
#endif
	return (_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Less than operator called" << std::endl;
#endif
	return (_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Greater than or equal operator called" << std::endl;
#endif
	return (_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Less than or equal operator called" << std::endl;
#endif
	return (_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Equal operator called" << std::endl;
#endif
	return (_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Not equal operator called" << std::endl;
#endif
	return (_value != other._value);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Addition operator called" << std::endl;
#endif
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Subtraction operator called" << std::endl;
#endif
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Multiplication operator called" << std::endl;
#endif
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
#ifdef DEBUG
	std::cout << "Division operator called" << std::endl;
#endif
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed	&Fixed::operator++()
{
#ifdef DEBUG
	std::cout << "Prefix increment operator called" << std::endl;
#endif
	++_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
#ifdef DEBUG
	std::cout << "Postfix increment operator called" << std::endl;
#endif
	Fixed	tmp(*this);

	++_value;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
#ifdef DEBUG
	std::cout << "Prefix decrement operator called" << std::endl;
#endif
	--_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
#ifdef DEBUG
	std::cout << "Postfix decrement operator called" << std::endl;
#endif
	Fixed	tmp(*this);

	--_value;
	return (tmp);
}

int		Fixed::getRawBits() const
{
#ifdef DEBUG
	std::cout << "getRawBits member function called" << std::endl;
#endif
	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
#ifdef DEBUG
	std::cout << "setRawBits member function called" << std::endl;
#endif
	_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)_value / (1 << _fractionalBits));
}

int		Fixed::toInt() const
{
	return (_value >> _fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed	Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() > second.toFloat())
		return (first);
	return (second);
}

Fixed	Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() < second.toFloat())
		return (first);
	return (second);
}
