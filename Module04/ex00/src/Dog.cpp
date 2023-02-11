#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
#ifdef DEBUG
	std::cout << "Dog default constructor called" << std::endl;
#endif
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
#ifdef DEBUG
	std::cout << "Dog copy constructor called" << std::endl;
#endif
	*this = copy;
}

Dog::~Dog()
{
#ifdef DEBUG
	std::cout << "Dog destructor called" << std::endl;
#endif
}

Dog &Dog::operator=(const Dog &copy)
{
#ifdef DEBUG
	std::cout << "Dog assignation operator called" << std::endl;
#endif
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof..." << std::endl;
}
