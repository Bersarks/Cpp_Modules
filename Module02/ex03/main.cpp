#include "Point.hpp"

int main( void )
{
	const Point a(1.1f,1.1f);
	const Point b(5, 0);
	const Point c(0, 5);
	const Point p(2.4f, 2.4f);

	if (bsp(a,b,c,p))
		std::cout << "OK\n";
	else
		std::cout << "KO\n";
}
