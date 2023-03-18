#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const & src) : _type(src._type)
{
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator=(AMateria const & other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}


