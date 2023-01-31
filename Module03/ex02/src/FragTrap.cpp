#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
#ifdef DEBUG
	std::cout << "FragTrap default constructor called" << std::endl;
#endif
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
#ifdef DEBUG
	std::cout << "FragTrap constructor called" << std::endl;
#endif
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
#ifdef DEBUG
	std::cout << "FragTrap copy constructor called" << std::endl;
#endif
	*this = other;
}

FragTrap::~FragTrap()
{
#ifdef DEBUG
	std::cout << "FragTrap destructor called" << std::endl;
#endif
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
#ifdef DEBUG
	std::cout << "FragTrap assignation operator called" << std::endl;
#endif
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << _name << " gives a high five" << std::endl;
}
