#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define DEBUG

class Fixed
{
private:
	int					fixedPointValue;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	Fixed(const int integer);
	Fixed(const float floatingPoint);
	Fixed(const Fixed &copy);
	~Fixed();

	Fixed& operator=(const Fixed &copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);

#endif
