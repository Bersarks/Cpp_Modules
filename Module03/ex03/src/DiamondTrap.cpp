#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	_name = "DiamondTrap";
#ifdef DEBUG
	std::cout << "DiamondTrap default constructor called" << std::endl;
#endif
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
#ifdef DEBUG
	std::cout << "DiamondTrap constructor called" << std::endl;
#endif
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other._name + "_clap_name"), FragTrap(other._name), ScavTrap(other._name)
{
	_name = other._name;
#ifdef DEBUG
	std::cout << "DiamondTrap copy constructor called" << std::endl;
#endif
}

DiamondTrap::~DiamondTrap()
{
#ifdef DEBUG
	std::cout << "DiamondTrap destructor called" << std::endl;
#endif
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
#ifdef DEBUG
	std::cout << "DiamondTrap assignation operator called" << std::endl;
#endif
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	FragTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name ==> " << _name;
	std::cout << "\nClapTrap name    ==> " << ClapTrap::_name << std::endl;
}
