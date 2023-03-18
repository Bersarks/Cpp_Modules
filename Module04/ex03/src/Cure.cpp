<<<<<<< HEAD
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & src) : AMateria(src)
{
}

Cure::~Cure()
{
}

Cure & Cure::operator=(Cure const & other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
=======
#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const & src) : AMateria(src)
{
}

Cure::~Cure()
{
}

Cure & Cure::operator=(Cure const & other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
>>>>>>> d0c0c0c01caee30928ede01ead1636e633308895
