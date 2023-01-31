#include "FragTrap.hpp"

int main()
{
	// Yo dawg, I heard you like constructors, so I put a constructor in your constructor
	FragTrap fragTrap;
	fragTrap.attack("some random dude");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(10);
	fragTrap.highFivesGuys();

	std::cout << "---------------------------------" << std::endl;

	FragTrap fragTrap2("FragTrap2");
	fragTrap2.attack("some random dude");
	fragTrap2.takeDamage(50);
	fragTrap2.beRepaired(10);
	fragTrap2.highFivesGuys();

	return (0);
}
