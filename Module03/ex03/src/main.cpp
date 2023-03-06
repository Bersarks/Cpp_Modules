#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrap("Barbie Girl");

	diamondTrap.attack("Ken");
	diamondTrap.guardGate();
	diamondTrap.takeDamage(20);
	diamondTrap.highFivesGuys();
	diamondTrap.beRepaired(10);
	diamondTrap.takeDamage(100);
	diamondTrap.whoAmI();

	std::cout << "----------------------------------------" << std::endl;

	DiamondTrap diamondTrap2("Ken");
	diamondTrap2.attack("Barbie Girl");
	diamondTrap2.guardGate();
	diamondTrap2.takeDamage(20);
	diamondTrap2.highFivesGuys();
	diamondTrap2.beRepaired(10);
	diamondTrap2.takeDamage(100);
	diamondTrap2.guardGate();
	diamondTrap2.whoAmI();

	return (0);
}
