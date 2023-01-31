#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrap("DiamondTrap");

	diamondTrap.attack("test");
	diamondTrap.guardGate();
	diamondTrap.takeDamage(20);
	diamondTrap.highFivesGuys();
	diamondTrap.beRepaired(10);
	diamondTrap.takeDamage(100);
	diamondTrap.whoAmI();

	std::cout << "----------------------------------------" << std::endl;

	DiamondTrap diamondTrap2;
	diamondTrap2.attack("test-yo");
	diamondTrap2.guardGate();
	diamondTrap2.takeDamage(20);
	diamondTrap2.highFivesGuys();
	diamondTrap2.beRepaired(10);
	diamondTrap2.takeDamage(100);
	diamondTrap2.whoAmI();

	return (0);
}
