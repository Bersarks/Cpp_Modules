#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
