<<<<<<< HEAD
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria(src)
{
}

Ice::~Ice()
{
}

Ice & Ice::operator=(Ice const & other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
=======
#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const & src) : AMateria(src)
{
}

Ice::~Ice()
{
}

Ice & Ice::operator=(Ice const & other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
>>>>>>> d0c0c0c01caee30928ede01ead1636e633308895
