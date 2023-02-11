#pragma once

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;
		void printContact(int index);
	public:
		PhoneBook();
		void addContact();
		void searchContact();
};
