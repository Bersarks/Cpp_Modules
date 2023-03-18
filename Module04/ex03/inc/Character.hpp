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
