#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ClapTrap b("Cody");

	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Cody-clone");
	b.beRepaired(3);
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	return (0);
}
