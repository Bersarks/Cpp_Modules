#include "Brain.hpp"

Brain::Brain()
{
#ifdef DEBUG
	std::cout << "Brain default constructor called" << std::endl;
#endif
}

Brain::Brain(const Brain &name)
{
#ifdef DEBUG
	std::cout << "Brain copy constructor called" << std::endl;
#endif
	*this = name;
}

Brain::~Brain()
{
#ifdef DEBUG
	std::cout << "Brain destructor called" << std::endl;
#endif
}

Brain &Brain::operator=(const Brain *other)
{
#ifdef DEBUG
	std::cout << "Brain assignation operator called" << std::endl;
#endif
	if (this != other)
		*this = other;
	return (*this);
}
