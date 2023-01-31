#pragma once

#include "ClapTrap.hpp"

//#define DEBUG

class ScavTrap : virtual public ClapTrap
{
	private:
		bool	_isGuarding;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& other);
		void attack(const std::string& target);
		void guardGate();
};
