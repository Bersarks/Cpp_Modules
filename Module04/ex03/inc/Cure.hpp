#pragma once

#include "AMateria.hpp"


class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();
		Cure & operator=(Cure const & other);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
