#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
#ifdef DEBUG
	std::cout << "WrongCat default constructor called" << std::endl;
#endif
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
#ifdef DEBUG
	std::cout << "WrongCat copy constructor called" << std::endl;
#endif
	*this = copy;
}

WrongCat::~WrongCat()
{
#ifdef DEBUG
	std::cout << "WrongCat destructor called" << std::endl;
#endif
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
#ifdef DEBUG
	std::cout << "WrongCat assignation operator called" << std::endl;
#endif
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow..." << std::endl;
}
