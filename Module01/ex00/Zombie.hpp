#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie(std::string name);
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
