#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Johnny");
	ScavTrap b("Richard");
	a.beRepaired(2);
	a.takeDamage(95);
	a.beRepaired(5);
	b.attack("Adam");
	b.takeDamage(100);
	b.beRepaired(3);
	b.guardGate();
	a.guardGate();
	return (0);
}
