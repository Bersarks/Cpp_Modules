
#include "FileOperations.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	FileOperations	file(argv[1], argv[2], argv[3]);
	file.replace();
	return (0);
}
