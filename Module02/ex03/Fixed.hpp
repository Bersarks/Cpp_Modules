#pragma once

# include <iostream>
# include <cmath>

//# define DEBUG

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
	// Constructors and destructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();

	// Operators
		Fixed	&operator=(const Fixed &other);
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
	
	// Arithmetic operators
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

	// Getters and setters
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	// Other methods
		float			toFloat(void) const;
		int				toInt(void) const;
		static Fixed	max(const Fixed &first, const Fixed &second);
		static Fixed	min(const Fixed &first, const Fixed &second);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &f);
