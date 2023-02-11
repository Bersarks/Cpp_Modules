#include "Fixed.hpp"

Fixed::Fixed()
{
#ifdef DEBUG
	std::cout << "Default constructor called" << std::endl;
#endif
	fixedPointValue = 0;
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
	fixedPointValue = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
#ifdef DEBUG
	std::cout << "getRawBits member function called" << std::endl;
#endif
	return (fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	fixedPointValue = raw;
}
