#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		contacts[8];
		int			contactCount;
		int			phoneBookIndex;
		std::string	phName;
		std::string	phSurName;
		std::string	phNickName;
		std::string	phPhoneNumber;
		std::string	phDarkestSecret;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
		void	printContact(int index);
};

#endif
