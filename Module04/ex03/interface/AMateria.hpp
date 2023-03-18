#pragma once

#include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();
		AMateria & operator=(AMateria const & other);

	protected:
		std::string _type;
		AMateria(AMateria const & src);

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
