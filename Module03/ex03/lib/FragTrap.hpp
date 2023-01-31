#pragma once

#include "ScavTrap.hpp"

//#define DEBUG

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		~FragTrap();
		FragTrap& operator=(const FragTrap& other);
		void highFivesGuys(void);
};
