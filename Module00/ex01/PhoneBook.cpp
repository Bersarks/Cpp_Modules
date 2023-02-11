#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactCount = 0;
}

bool is_number(const std::string& s)
{
	if (s.length() > 9)
		return false;

	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

void	PhoneBook::addContact()
{
	int i = contactCount % 8;

	std::cout << "Enter first name: ";
	std::getline(std::cin, contacts[i].cFirstName);

	std::cout << "Enter last name: ";
	std::getline(std::cin, contacts[i].cLastName);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, contacts[i].cNickname);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, contacts[i].cPhoneNumber);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, contacts[i].cDarkestSecret);

	contactCount++;
}

str	line(str line)
{
	if (line.length() > 10)
	{
		line.resize(9);
		line.append(".");
	}
	return (line);
}
void	PhoneBook::printContact(int i)
{
	std::cout << "First Name: " << contacts[i].cFirstName << "\n";
	std::cout << "Last Name: " << contacts[i].cLastName << "\n";
	std::cout << "Nickname: " << contacts[i].cNickname << "\n";
	std::cout << "Phone Number: " << contacts[i].cPhoneNumber << "\n";
	std::cout << "Darkest Secret: " << contacts[i].cDarkestSecret << std::endl;
}

void	PhoneBook::searchContact()
{
	int i = 0;
	str idx;

	std::cout << std::setw(10) << "     index|first name| last name|  nickname" << "\n";
	std::cout << "-------------------------------------------" << "\n";
	while (i < contactCount && i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << line(contacts[i].cFirstName) << "|";
		std::cout << std::setw(10) << line(contacts[i].cLastName) << "|";
		std::cout << std::setw(10) << line(contacts[i].cNickname) << std::endl;
		i++;
	}
	while (32)
	{
		std::cout << "Contact Index (to exit write: exit): ";
		std::getline(std::cin, idx);
		if (is_number(idx) == true)
			if (atoi(idx.c_str()) < contactCount && atoi(idx.c_str()) < 8)
			{
				printContact(atoi(idx.c_str()));
				break;
			}
			else
				std::cout << "Please give a valid input." << std::endl;
		else if (idx == "exit")
			break;
		else
			std::cout << "Please give a valid input." << std::endl;
	}
}
