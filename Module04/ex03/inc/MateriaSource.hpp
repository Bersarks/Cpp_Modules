#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _inventory[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & other);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};
