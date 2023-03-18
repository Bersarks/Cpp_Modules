<<<<<<< HEAD
#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
		AMateria* _floor[4];

		Character();

	public:
		~Character();
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const & other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
=======
#pragma once

#include "../interface/ICharacter.hpp"
#include "../interface/AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];

		Character();

	public:
		~Character();
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const & other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
>>>>>>> d0c0c0c01caee30928ede01ead1636e633308895
