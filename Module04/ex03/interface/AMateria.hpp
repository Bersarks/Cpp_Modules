<<<<<<< HEAD
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
=======
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
>>>>>>> d0c0c0c01caee30928ede01ead1636e633308895
