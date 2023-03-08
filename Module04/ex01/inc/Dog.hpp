#pragma once

#include "Animal.hpp"

//#define DEBUG

class Dog : public Animal, public Brain
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog &operator=(const Dog &copy);
		void makeSound() const;
};
