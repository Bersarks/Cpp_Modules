<<<<<<< HEAD
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
=======
#pragma once

#include "../interface/AMateria.hpp"


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
>>>>>>> d0c0c0c01caee30928ede01ead1636e633308895
