#pragma once

#include <iostream>

//#define DEBUG

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const std::string &_type);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &copy);
		std::string getType() const;
		virtual void makeSound() const;
};
