#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define DEBUG

class Fixed
{
private:
	int					fixedPointValue;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed& operator=(const Fixed &copy);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
