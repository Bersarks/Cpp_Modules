#pragma once

#include "AMateria.hpp"


class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();
		Ice & operator=(Ice const & other);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
