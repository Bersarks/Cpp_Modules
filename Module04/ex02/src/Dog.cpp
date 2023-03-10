#include "Dog.hpp"

Dog::Dog()
{
#ifdef DEBUG
	std::cout << "Dog default constructor called" << std::endl;
#endif

	type = "Dog";
}

Dog::Dog(const Dog &copy)
{
#ifdef DEBUG
	std::cout << "Dog copy constructor called" << std::endl;
#endif
	this->type = copy.type;
	brain = new Brain;
	*brain = *copy.brain;
}

Dog::~Dog()
{
#ifdef DEBUG
	std::cout << "Dog destructor called" << std::endl;
#endif

	delete brain;
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
