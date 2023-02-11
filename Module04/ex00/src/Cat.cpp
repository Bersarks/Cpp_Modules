#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
#ifdef DEBUG
	std::cout << "Cat default constructor called" << std::endl;
#endif
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
#ifdef DEBUG
	std::cout << "Cat copy constructor called" << std::endl;
#endif
	*this = copy;
}

Cat::~Cat()
{
#ifdef DEBUG
	std::cout << "Cat destructor called" << std::endl;
#endif
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
