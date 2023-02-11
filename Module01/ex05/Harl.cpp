#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << "\n";
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-";
	std::cout << "specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << "\n";
	std::cout << "I cannot believe adding extra bacon";
	std::cout << " cost more money. You don’t put";
	std::cout << " enough! If you did I would not";
	std::cout << " have to ask for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << "\n";
	std::cout << "I think I deserve to have some extra bacon";
	std::cout << "for free. I’ve been coming for years whereas";
	std::cout << " you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << "\n";
	std::cout << "This is unacceptable, I want to speak to";
	std::cout << " the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			(this->*func[i])();
		i++;
	}
}
// void (Harl::*func[4])(void) Harl classından olan ve void döndüren 4 tane fonksiyonu gösteren bir pointer dizisi
