#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_isGuarding = false;
#ifdef DEBUG
	std::cout << "ScavTrap default constructor called" << std::endl;
#endif
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_isGuarding = false;
#ifdef DEBUG
	std::cout << "ScavTrap constructor called" << std::endl;
#endif
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	*this = other;
#ifdef DEBUG
	std::cout << "ScavTrap copy constructor called" << std::endl;
#endif
}

ScavTrap::~ScavTrap()
{
#ifdef DEBUG
	std::cout << "ScavTrap destructor called" << std::endl;
#endif
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		this->_isGuarding = other._isGuarding;
	}
#ifdef DEBUG
	std::cout << "ScavTrap assignation operator called" << std::endl;
#endif
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "\033[31mClapTrap: " << _name << " is out of energy!\033[0m" << std::endl;
	else
		std::cout << "\033[31mClapTrap: " << _name << " because he has not enough hit points.\033[0m" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_isGuarding == false)
	{
		std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode." << std::endl;
		this->_isGuarding = true;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already in Gate keeper mode." << std::endl;
}
