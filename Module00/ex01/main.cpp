#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string input;

	while (1)
	{
		std::cout << "Enter command (ADD/SEARCH/EXIT): ";
		std::getline (std::cin, input);
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
