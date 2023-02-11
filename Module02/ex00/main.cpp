#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	b( a );
	Fixed	c;

	c = b;
	std::cout << a.getRawBits() << "\n";
	std::cout << b.getRawBits() << "\n";
	std::cout << c.getRawBits() << "\n";

	Fixed	d;
	d.setRawBits( 10 );
	Fixed	f(d);
	Fixed	e;
	e = d;
	std::cout << d.getRawBits() << "\n";
	std::cout << f.getRawBits() << "\n";
	std::cout << e.getRawBits() << std::endl;
	return 0;
}
