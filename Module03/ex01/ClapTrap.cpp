#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
#ifdef DEBUG
	std::cout << "ClapTrap default constructor called" << std::endl;
#endif
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
#ifdef DEBUG
	std::cout << "ClapTrap name constructor called" << std::endl;
#endif
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
#ifdef DEBUG
	std::cout << "ClapTrap copy constructor called" << std::endl;
#endif
	*this = other;
}

ClapTrap::~ClapTrap()
{
#ifdef DEBUG
	std::cout << "ClapTrap destructor called" << std::endl;
#endif
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
#ifdef DEBUG
	std::cout << "ClapTrap assignation operator called" << std::endl;
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

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap: " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "\033[31mClapTrap: " << _name << " is out of energy!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap: " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
	else if (this->_hitPoints > 0)
		this->_hitPoints = 0;
	else
	{
		std::cout << "\033[33mClapTrap: " << _name << " is already dead!\033[0m" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->_name << " was attacked and lost " << amount << " hit points, he now has " << this->_hitPoints << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0 && this->_hitPoints + amount <= 10)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " of hit points, he now has " << this->_hitPoints << "hit points." << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough energy points.\033[0m" << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough hit points.\033[0m" << std::endl;
	else
		std::cout << "\033[33mClapTrap " << this->_name << " can't be repaired to have more than 10 hit points.\033[0m" << std::endl;
}
