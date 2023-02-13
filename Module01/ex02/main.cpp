#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringRef = str;

	std::cout << "The memory address of the string variable: " << &str << "\n";
	std::cout << "The memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "The memory address held by stringRef: " << &stringRef << "\n";

	std::cout << "\n";

	std::cout << "The value of the string variable: " << str << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringRef: " << stringRef << std::endl;
}
