#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	switch (argc)
	{
		case 2:
			Harl	harl;

			if (argv[1] == levels[0])
				harl.complain(0);
			else if (argv[1] == levels[1])
				harl.complain(1);
			else if (argv[1] == levels[2])
				harl.complain(2);
			else if (argv[1] == levels[3])
				harl.complain(3);
			else
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}
