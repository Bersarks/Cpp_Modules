#pragma once

#include "Animal.hpp"

//#define DEBUG

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &copy);
		void makeSound() const;
};
