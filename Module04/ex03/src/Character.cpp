#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_floor[i] = NULL;
	}
}

Character::Character(Character const & src) : _name(src._name)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (_floor[i])
			delete _floor[i];
	}
}

Character & Character::operator=(Character const & other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;

			if (_floor[i])
				delete _floor[i];
			if (other._floor[i])
				_floor[i] = other._floor[i]->clone();
			else
				_floor[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
	delete m;
}

void Character::unequip(int idx)
{
	if(idx >= 4 || idx < 0)
		std::cout << "Wrong index number!" << std::endl;
	if (!_inventory[idx])
		std::cout << "No materia at index " << idx << std::endl;
	else if (idx >= 0 && idx < 4)
	{
		if(!_floor[idx])
			_floor[idx] = _inventory[idx];
		else
		{
			delete _floor[idx];
			_floor[idx] = _inventory[idx];
		}
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout<<"there is no materia or wrong index" << std::endl;
}
