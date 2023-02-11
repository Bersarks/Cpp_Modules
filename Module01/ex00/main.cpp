#include "Zombie.hpp"

int main()
{
	// Create a new Zombie on the heap
	Zombie* nZombie = newZombie("Zombie_1");
	nZombie->announce();
	delete nZombie;

	// Create a new Zombie on the stack
	randomChump("Zombie_2");
	return (0);
}
