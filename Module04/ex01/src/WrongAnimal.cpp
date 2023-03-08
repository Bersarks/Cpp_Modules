#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
#ifdef DEBUG
	std::cout << "WrongAnimal default constructor called" << std::endl;
#endif
}

WrongAnimal::WrongAnimal(const std::string &_type) : type(_type)
{
#ifdef DEBUG
	std::cout << "WrongAnimal constructor called" << std::endl;
#endif
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
#ifdef DEBUG
	std::cout << "WrongAnimal copy constructor called" << std::endl;
#endif
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
#ifdef DEBUG
	std::cout << "WrongAnimal destructor called" << std::endl;
#endif
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
#ifdef DEBUG
	std::cout << "WrongAnimal assignation operator called" << std::endl;
#endif
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong silence..." << std::endl;
}
