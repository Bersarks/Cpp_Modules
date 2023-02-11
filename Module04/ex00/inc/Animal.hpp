#pragma once

#include <iostream>

//#define DEBUG
#define DEFAULT_TYPE "*default type*"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const std::string &_type);
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);
		std::string getType() const;
		virtual void makeSound() const;
};
