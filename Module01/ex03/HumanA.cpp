#include "HumanA.hpp"
/* Quoting from C++ Primer pp455:

Some members must be initialized in the constructor initializer. For such members, assigning to 
them in the constructor body doesn't work. Members of a class type that do not have default 
constructor and members that are const or reference types must be initialized in the constructor 
initializer regardless of type. */
HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
