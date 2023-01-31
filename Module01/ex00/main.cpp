#include "Zombie.hpp"

int main()
{
	Zombie* newZombie = new Zombie("Zombie_1");
	newZombie->announce();
	delete newZombie;
	randomChump("Zombie_2");
	return (0);
}