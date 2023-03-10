#include "Cat.hpp"

Cat::Cat()
{
#ifdef DEBUG
	std::cout << "Cat default constructor called" << std::endl;
#endif

	type = "Cat";
}

Cat::Cat(const Cat &copy)
{
#ifdef DEBUG
	std::cout << "Cat copy constructor called" << std::endl;
#endif
	this->type = copy.type;
	brain = new Brain;
	*brain = *copy.brain;
}

Cat::~Cat()
{
#ifdef DEBUG
	std::cout << "Cat destructor called" << std::endl;
#endif

	delete brain;
}

Cat &Cat::operator=(const Cat &copy)
{
#ifdef DEBUG
	std::cout << "Cat assignation operator called" << std::endl;
#endif
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow..." << std::endl;
}
