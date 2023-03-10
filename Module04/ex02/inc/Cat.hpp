#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

//#define DEBUG

class Cat : public Animal, public Brain
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &copy);
		void	makeSound() const;
};
